//I consulted GeeksforGeeks article on Bitwise Operators for C++
//https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/

char findOdd(char arr[], int arr_size) {
	if(arr_size == 1) return arr[0]; //if size is 1, return the only value in array
	int temp = int(arr[0]); //store first element as ascii equivalent in temp
	for(int i = 1; i < arr_size; i++) //loop n times
		temp = temp ^ int(arr[i]); //perform bitwise XOR on each element and store result
	return char(temp); //return result as char
}

/* This works because we are performing bitwise XOR. What this means is that it is checking
   every individual bit and outputting 1 if they are different and 0 if they are the same (XOR)
   Since we are looking for a single odd character, every even character would have their bits
   cancel each other out because of the nature of XOR. So essentially, we are left with the bits
   of the odd character in the array
*/