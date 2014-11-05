#!/usr/bin/env ruby
M,N = gets.scan(/\d+/).map(&:to_i)

M.times do
	line = gets.scan(/\d+/).map(&:to_i)
	line.each_with_index do |v,i|
		line[i]+=@lline.slice([i-1,0].max, 3).min
	end unless !defined? @lline
	@lline = line
end

puts @lline.min