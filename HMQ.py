# Heap Sort
# To heapify subtree rooted at index i. n is size of heap
def heapify(arr, N, i):
	largest = i # Initialize largest as root
	l = 2 * i + 1	 # left = 2*i + 1
	r = 2 * i + 2	 # right = 2*i + 2
	# See if left child of root exists and is greater than root
	if l < N and arr[largest] < arr[l]:
		largest = l
	# See if right child of root exists and is greater than root
	if r < N and arr[largest] < arr[r]:
		largest = r
	# Change root, if needed
	if largest != i:
		arr[i], arr[largest] = arr[largest], arr[i] # swap
		# Heapify the root.
		heapify(arr, N, largest)

# The main function to sort an array of given size
def heapSort(arr):
	N = len(arr)
	# Build a maxheap.
	for i in range(N//2 - 1, -1, -1):
		heapify(arr, N, i)
	# One by one extract elements
	for i in range(N-1, 0, -1):
		arr[i], arr[0] = arr[0], arr[i] # swap
		heapify(arr, i, 0)
if __name__ == '__main__':
	arr = [12, 11, 13, 5, 6, 7]
	heapSort(arr)
	N = len(arr)
	print("Sorted array is")
	for i in range(N):
		print("%d" % arr[i], end=" ")

# Merge Sort

def mergeSort(arr):
	if len(arr) > 1:
		# Finding the mid of the array
		mid = len(arr)//2
		# Dividing the array elements
		L = arr[:mid]
		# Into 2 halves
		R = arr[mid:]
		# Sorting the first half
		mergeSort(L)
		# Sorting the second half
		mergeSort(R)
		i = j = k = 0
		# Copy data to temp arrays L[] and R[]
		while i < len(L) and j < len(R):
			if L[i] <= R[j]:
				arr[k] = L[i]
				i += 1
			else:
				arr[k] = R[j]
				j += 1
			k += 1
		# Checking if any element was left
		while i < len(L):
			arr[k] = L[i]
			i += 1
			k += 1
		while j < len(R):
			arr[k] = R[j]
			j += 1
			k += 1
def printList(arr):
	for i in range(len(arr)):
		print(arr[i], end=" ")
	print()
if __name__ == '__main__':
	arr = [12, 11, 13, 5, 6, 7]
	print("Given array is")
	printList(arr)
	mergeSort(arr)
	print("\nSorted array is ")
	printList(arr)

# Quick Sort

# Function to find the partition position
def partition(array, low, high):
	# Choose the rightmost element as pivot
	pivot = array[high]
	# Pointer for greater element
	i = low - 1
	# Traverse through all elements
	# compare each element with pivot
	for j in range(low, high):
		if array[j] <= pivot:
			# If element smaller than pivot is found swap it with the greater element pointed by i
			i = i + 1
			# Swapping element at i with element at j
			(array[i], array[j]) = (array[j], array[i])
	# Swap the pivot element with the greater element specified by i
	(array[i + 1], array[high]) = (array[high], array[i + 1])
	# Return the position from where partition is done
	return i + 1
# Function to perform quicksort
def quicksort(array, low, high):
	if low < high:
		# Find pivot element such that element smaller than pivot are on the left
		# element greater than pivot are on the right
		pi = partition(array, low, high)
		# Recursive call on the left of pivot
		quicksort(array, low, pi - 1)
		# Recursive call on the right of pivot
		quicksort(array, pi + 1, high)
if __name__ == '__main__':
	array = [10, 7, 8, 9, 1, 5]
	N = len(array)
	quicksort(array, 0, N - 1)
	print('Sorted array:')
	for x in array:
		print(x, end=" ")
