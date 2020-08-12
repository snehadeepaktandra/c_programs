/*Program for 
1. Selection Sort
2. Bubble Sort 
3. Insersion Sort
*/ 

#include<stdio.h>


void print_elements(int n, int a[]) 
{
	int k; 

	for(k = 0; k <n; k++) {
	printf(" %d\t", a[k]);
	}
	printf("\n");
}


/*insertion_sort
Start from second element and insert it in appropriate position among elements that are present left to it. 

Assuming hole, the position that is considered and shift elements one after other present to the left of it towards right. 

Idea is left side elements from hole is a sorted list and right side is a unsorted list.  

*/

void insertion_sort(int n, int a[]) 
{
	
	int i,hole,value; 

	for(i = 1; i<n; i++) {
		hole = i; 
		value = a[hole]	; 
		
		while(a[hole-1] > value && hole > 0) {
			a[hole] = a[hole-1]; 
			hole--; 			
		}
		a[hole] = value; 
	}
	printf("Printing elements after Insertion sort : "); 
	print_elements(n, a);

}

/*bubble Sort 
Idea : After every pass, Largest element comes to the end. 

Compare j with j+1 and swap if a[]

Eg:	2	7	4	1	5	3
	j	j+1				until

Pass1:	2	4	1	5	3	7
	j	j+1			until

Pass2:	2	1	4	3	5	7
	j	j+1		until 
and so on.. 
*/

void bubble_sort(int n, int a[])
{
	
	int i,j,temp; 

	for(i = 0; i < n-1; i++){
		for(j = 0; j<n-i-1; j++) {
			if( a[j] > a[j+1]) {
				temp = a[j];
				a[j] = a[j+1]; 
				a[j+1] = temp;
			}
		}
	}	
	printf("Printing elements after Bubble sort : "); 
	print_elements(n, a);

}

/*selection Sort 
Idea : After every pass, smallest element comes to the selected position. 
Selected Position starts from the left most and moves towards end. 

For each pass, Compare element at i_min with element at j and update i_min with j if i_min is greater. 
End of each pass, Move element at i_min to i(selected positon) by swapping both. 


Eg:	2	7	4	1	5	3
	i	j
	i_min

Pass1:  1	7	4	2	5	3
		i	j
		i_min
Paas2:	1	2	4	7	5	3
			i	j
			i_min	 
and so on.. 
*/

void selection_sort(int n, int a[])
{
	int i,j, i_min, temp;
	 
	for(i=0; i<n-1; i++) {
		i_min = i;
		for(j = i+1; j<n; j++ ) {
			if(a[i_min] > a[j]) {
				i_min = j; 	
			}	
		}
		
		temp = a[i];
		a[i] = a[i_min]; 
		a[i_min] = temp; 
	}

	printf("Printing elements after Selection sort : "); 
	print_elements(n, a);
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

	selection_sort(n, a); 
	bubble_sort(n, a); 
	insertion_sort(n, a); 

return 0; 
}
