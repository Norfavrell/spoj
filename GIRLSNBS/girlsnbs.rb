#!/usr/bin/env ruby

while dta = /(-?\d+) (-?\d+)/.match(gets.chomp)
	if dta[1]==dta[2]  && dta[1]=="-1"
		break
	end

	inp = [dta[1].to_f, dta[2].to_f]
	puts (inp.max/(inp.min+1)).ceil
end