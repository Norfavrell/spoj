#!/usr/bin/env ruby

fibonacci = Hash.new{ |h,k| h[k] = k < 2 ? k : h[k-1] + h[k-2] }
i = gets.chomp.to_i

i.times {|v| fibonacci[v] }

puts fibonacci[i+2]