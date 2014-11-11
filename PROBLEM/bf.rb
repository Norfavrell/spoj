#!/usr/bin/env ruby

ops = [:+, :*, :-, :/].to_a.repeated_permutation(2).to_a
dta = [[1,8,8,4],[4,3,2,0],[1,0,0,2],[7,6,5,1]]
t_perf = 0
t_total = Time.now
psols = []

ops.each do |op|
	print "Testing #{op.inspect}\n\tGenerating configs..."
	configs = (0..9).to_a.permutation.to_a
	puts "done"

	t = Time.now
	dta.each do |v|
		print "\tSample #{v.inspect}... #{configs.size} / "
		configs.select! do |config|
			t_perf+=1
			((config[v[0]].method(op[0]).call config[v[1]]).method(op[1]).call config[v[2]]) == v[3] rescue false
		end
		puts "#{configs.size}"
	end
	puts "Elapsed #{((Time.now-t)*1000).to_i}\t(#{t_perf})"

	if configs.size>1
		puts "#{configs.size} possible solutions found for #{op.inspect}!"
		psols<<{:op=>op,:configs=>configs}
	end

	print "\n\n"
end

puts "="*20
psols.each do |psol|
	psol[:configs].each do |config|
		puts "#{{:op=>psol[:op], :config=>config}.inspect}"
	end
end

puts "\n\nTotal time: #{((Time.now-t_total)*1000).to_i}ms"
puts "Total cmps: #{t_perf}"

# psols.select! do |psol|
# 	puts "Testing solution #{psol.inspect}"
# 	print "\tGenerating test data..."
# 	tests = (0..9).to_a.repeated_permutation(3).to_a
# 	puts "done"

# 	passing = true

# 	catch :stop do
# 		tests.each do |t|
# 			r = ((psol[:config][t[0]].method(psol[:ops][0]).call psol[:config][t[1]]).method(psol[:ops][1]).call psol[:config][t[2]])
# 			if r<0
# 				puts "\tFailed at #{t}->#{r}"
# 				throw :stop
# 			end
# 		end
# 	end

# 	passing
# end