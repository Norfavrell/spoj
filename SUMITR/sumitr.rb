#!/usr/bin/env ruby

gets.chomp.to_i.times do
	@ll = nil
	gets.chomp.to_i.times do
		l = gets.scan(/\d+/).map(&:to_i)
		l.each_with_index { |v,i| l[i]+=@ll.slice([i-1,0].max, [i+1,2].min).max } if @ll
		puts l.inspect
		puts @ll.inspect
		@ll = l
	end
	puts @ll.max
end
