#!/usr/bin/env ruby

def nextp(val)
	aval = val.to_s.split(//).map{|x| x.ord-48}

	mid = aval.length.even? ? [aval.length/2-1, aval.length/2] : [(aval.length/2).floor]

	m = (aval[0..mid[0]-1]+aval.values_at(*mid)+aval[0..mid[0]-1].reverse) if mid.length.odd?
	m = (aval[0..mid[0]]+aval[0..mid[0]].reverse) if mid.length.even?

	mv = m.map{|x| (48+x).chr}.join.to_i
	return m if mv>val

	ctn = true
	while ctn
		mid.each{|x| m[x]+=1}
		mv = m.map{|x| (48+x).chr}.join.to_i
		return mv if mv>val && m.max<10
		ctn = false if m.max>=10
	end

	return nextp(val.round(-mid[0]-1))
end

gets.chomp.to_i.times do 
	v = gets.chomp.to_i
	puts nextp(v).inspect
end