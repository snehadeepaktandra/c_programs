/*Merge Sort 
1. Recursive split array into left and right sub-arrays 
2. Merge element by element comparing one by one of left and right arrays. 
	Eg: 	
	left : 2 7 9 
	right : 1 3 5 
*/


#include<stdio.h>

#define Logs

void print_elements(int n, int a[]) 
{
	int k; 

	for(k = 0; k <n; k++) {
	printf(" %d\t", a[k]);
	}
	printf("\n");
}

void merge(int left[], int nL, int right[], int nR, int a[]) 
{
	int i, j, k = 0; 
	
	while(i<nL && j < nR) {
		if(left[i] < right[j]) {
			a[k] = left[i];
			i++; 
			k++; 
		}
		else {
			a[k] = right[j]; 
			j++; 
			k++; 	
		}
	}
	while(i <nL) {
		a[k] = left[i]; 
		i++; 
		k++; 	
	}
	while(j <nR) {
		a[k] = right[j]; 
		j++; 
		k++; 	
	}		
#ifdef Logs 	
	printf("From Merge \n");
	print_elements(k, a); 
#endif 

}

void merge_sort(int n, int *a) 
{
	
	int i,j;

	if(n < 2) {
		return; 
	}

	int mid = n/2;

	int left[mid], right[n-mid];  

	/*	
	int *left, *right;

	left = (int*)malloc(mid*sizeof(int)); 
	right = (int*)malloc((n- mid)*sizeof(int)); 
	*/

	for (i = 0 ; i<mid; i++ ) {
		left[i] = a[i]; 
	} 
#ifdef Logs 
	printf("From Merge_sort - left \n");		
	print_elements(mid, left); 
#endif 
	for (j = mid; j < n; j++) {
		right[j-mid] = a[j]; 	
	}
#ifdef Logs 
	printf("From Merge_sort - right \n");
	print_elements(n-mid, right); 
#endif 

	merge_sort(mid, left); 
	merge_sort(n-mid, right);

	merge(left, mid, right, n-mid, a); 	
	
}


int main()
{

	int n, a[10]; 
	int i; 	

	printf("Enter number of elements : "); 
	scanf(" %d", &n); 

	printf("Enter elements to be sorted : \n");
	for(i = 0; i < n; i++) {
		scanf(" %d", &a[i]); 
	} 

	printf("Printing elements before sorting : "); 
	print_elements(n, a);

	merge_sort(n,a); 
	printf("Sorted Elements : \n ");
	print_elements(n,a); 

return 0; 
}

/*============Execution with logs ==============================
Enter number of elements : 6
Enter elements to be sorted : 
2
9
7
5
1
3
Printing elements before sorting :  2	 9	 7	 5	 1	 3	
From Merge_sort - left 
 2	 9	 7	
From Merge_sort - right 
 5	 1	 3	
From Merge_sort - left 
 2	
From Merge_sort - right 
 9	 7	
From Merge_sort - left 
 9	
From Merge_sort - right 
 7	
From Merge 
 7	 9	
From Merge 
 2	 7	 9	
From Merge_sort - left 
 5	
From Merge_sort - right 
 1	 3	
From Merge_sort - left 
 1	
From Merge_sort - right 
 3	
From Merge 
 1	 3	
From Merge 
 1	 3	 5	
From Merge 
 1	 2	 3	 5	 7	 9	
Sorted Elements : 
 1	 2	 3	 5	 7	 9	
=============================================================================
*/ 
