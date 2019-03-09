#this is a divide and conquer algorithm
#ideal for large arrays
def mergesort (array):
	
	if len(array) > 1:
		n = len(array)//2
		left = mergesort (array[:n])
		right = mergesort (array[n:])
		array = merge (left,right)

	return array

def merge (left, right):
	
	i,j=0,0
	array=left+right
	while (i<len(left) and j<len(right)):
			if left[i]<=right[j]:
				array[i+j]=left[i]
				i+=1
			else:
				array[i+j]=right[j]
				j+=1

	while(i<len(left)):
		array[i+j]=left[i]
		i+=1
	while(j<len(right)):
		array[i+j]=right[j]
		j+=1
	return array

if __name__ == '__main__':
	
	array = [2,5,6,3,8,1,9,2,4,-1,-3]
	print(mergesort(array))