cases = int(input())

for i in range(0,cases):
	jnk,top=map(int,input().split())
	print (jnk)
	odd=top*top
	even=odd+top
	print(int((1+top)*top/2))
	print(odd)
	print(even)
