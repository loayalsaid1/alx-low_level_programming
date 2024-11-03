"""
	linearly traverse, once we reach a value greater than x,
		make <right> == i and left, i / 2 ((The last place we were in))
		and then make binary search from left to right
"""

array = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]

size = len(array)






def search(arr, size, x):
	# check for types, and the array is not NULL and all these things
	if arr[0] == x:
		return 0
	

	i = 1 
	# traverse unill a greater value and stop
	while array[i] <= x:
		if array[i]  == x:
			return i
		i = i * 2	

	# istablish the range
	left = (i / 2) + 1
	right = i
	# search for that range
	binary_search(array=arr, left=left, right=right)
