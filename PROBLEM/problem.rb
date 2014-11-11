#!/usr/bin/env ruby

config = [1, 4, 2, 6, 8, 3, 5, 9, 0, 7]
ops = [:-, :-]

T = gets.chomp.to_i
T.times do
	vals = gets.scan(/\d/).map(&:to_i)
	puts (config[vals[0]].method(ops[0]).call config[vals[1]]).method(ops[1]).call config[vals[2]]
end