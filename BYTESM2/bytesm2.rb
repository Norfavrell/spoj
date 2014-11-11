#!/usr/bin/env ruby

T = gets.chomp.to_i

T.times do 
	h, w = gets.scan(/\d+/).map(&:to_i)

	h.times do
		line = gets.scan(/\d+/).map(&:to_i)
		line.each_with_index do |v,i|
			line[i] += @last_line.slice([i-1,0].max,i==0 ? 2 : 3).max
		end unless not defined? @last_line

		puts line.inspect
		@last_line = line
	end

	puts @last_line.max
end