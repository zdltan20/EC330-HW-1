unsigned long genA(int n) {
	if (n == 1) return 1; //base case
	unsigned long result = 0; //to store result of for loop
	for(int i = 1; i < n; i++) //sums all integers where first time increases while second decreases
		result = result + genA(i) * genA(n-i); //sum of recurssive call products from 1 to n-1 and n to 1
	return result;
}

/* This code checks if n is 1 which is the base case and returns 1. If not, it creates a variable to store the
   the result of the for loop. Inside the for loop, there are recurssive calls where the the first recurssive
   call increases to n-1 while the second recurssive call goes down to 1. Result stores the sum of the product
   of these recurssive calls
*/