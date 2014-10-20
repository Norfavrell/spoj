while 1:
	try:
		k=int(raw_input())
	except EOFError:
		break
	if k==0:
		print 0
	elif k==1:
		print 1
	else:
		print 2*k-2
