v = [ 0 ]
v.append(1)
v.append(2)
for i in range(3, 8050):
	v.append(v[i - 1] + v[i - 2])
	#print("v[" + str(i) + "] = " + str(v[i]) + ";")

n = int(input())

for i in range(0, n):
    x = int(input())
    print(v[x])