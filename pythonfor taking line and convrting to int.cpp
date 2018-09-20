for i in range(int(input())):
	list1=[int(x) for x in input().split(" ")]
	list1.remove(len(list1)-1)
	print(max(list1))  
