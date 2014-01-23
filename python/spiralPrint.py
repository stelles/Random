def spiralPrint(array):
	x = 0
	y = 0
	while x < len(array) - 1:
		print array[y][x],
		x += 1
	while y < len(array) - 1:
		y += 1
		print array[y][x],
	while x > 0:
		print array[y][x],
		x -= 1
	while y > 0:
		print array[y][x],
		y -= 1
	if len(array) == 1: print array[0][0]
	if len(array) <= 2:
		return
	else:
		
		smaller = array[1:len(array)-1]
		for i in range(len(smaller)):
			smaller[i] = smaller[i][1:len(smaller[i])-1]

		spiralPrint(smaller)




theArray = [[x for x in xrange(5)] for x in xrange(5)]


spiralPrint(theArray)
