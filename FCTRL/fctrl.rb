#!/usr/bin/env ruby

T = gets.chomp.to_i

T.times do |i|
	n = gets.chomp.to_i

	result, m = 0, 5
	result, m = result+(n/m).floor, m*5 while n>=m

	puts result
end