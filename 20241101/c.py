import math

def truncate(n):
    n = n * 100
    n = math.trunc(n)
    n = n / 100
    return n

n = int(input())
for i in range(0, n):
	x = float(input())
	n1 = x * 1.5
	n2 = x * 1.125
	n3 = n1 * 1.125
	n4 = n2 * 1.125
	print("%.2f %.2f %.2f %.2f %.2f" % (truncate(x), truncate(n1), truncate(n2), truncate(n3), truncate(n4)))