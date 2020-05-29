/* Funtion to demonstrate Call by reference.
 * Since reference of variables are sent, effect is seen in both calling function and called function 
 */ 

#include<stdio.h> 

void simple_operation(int local_a, int local_b, int *local_sum, int *local_diff) 
{

	*local_sum = local_a + local_b; 
        *local_diff = local_a - local_b; 	

}

int main()
{

int a = 10, b = 20; 
int sum, diff; 

simple_operation(a, b, &sum, &diff); 

printf("sum is : %d \n", sum); 
printf("diff is : %d \n", diff); 

return 0; 

}

/*Output : 
 sum is : 30
diff is : -10
*/ 
