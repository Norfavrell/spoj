#!/usr/bin/env ruby

gets.chomp.to_i.times do 
	n,m,d = gets.scan(/\d+/).map(&:to_i)
	h = 0
	n.times{ h+=((gets.chomp.to_i-1)/d).floor }

	puts h>=m ? 'YES' : 'NO'
end