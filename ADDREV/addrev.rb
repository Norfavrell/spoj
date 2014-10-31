#!/usr/bin/env ruby

T = gets.chomp.to_i

for i in 1..T
	a,b = gets.scan(/\d+/).map(&:reverse).map(&:to_i)
	puts (a+b).to_s.reverse.sub(/^0+/, '')
end

