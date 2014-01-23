import math

def polygon(n, r):
	angle = math.radians(360.0/(2*n))
	length = math.sin(angle)*2*r	
	return n*length

print polygon(5, 3.7)
print polygon(100, 1.0)

