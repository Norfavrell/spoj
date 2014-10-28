#!/usr/bin/env ruby

dta = gets.chomp.to_i
puts "#{dta&(dta-1)==0 ? 'TAK' : 'NIE'}"