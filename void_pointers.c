/*Program to demonstrate Void pointers 
*A single pointer which is capable of storing address of any data type is a Void Pointer
*/

#include<stdio.h> 

int main()
{

	int a; 
	char c; 
	float f; 

	void *p; 

	p  = &a; 
	*(int *)p = 10; 
	printf("Value of a is : %d \n", a ); 
	printf("value of a is : %d \n", *(int *)p);

	p = &c; 
	*(char *)p = 'A'; 
	printf("Value of c is : %c \n", c); 

	p = &f; 
	*(float *)p = 10.9;  
	printf("Value of f is : %f \n", f); 
	printf("Value of f is : %f \n", *(float *)p); 


	//Incrementing a void pointer 
	// p = (int *)p + 1; 
	p = &a; 
	printf("Address of a is : %p \n", &a);
	printf("Address in P : %p \n", (int *)p); 
	p = (int *)p + 1; 
	printf("Address after incremented : %p \n", (int *)p);  


	p = &c; 
	printf("Address of c is : %p \n", &c);
	printf("Address in P : %p \n", (char *)p); 
	p = (char *)p + 1; 
	printf("Address after incremented : %p \n", (char *)p);  
	
	p = &f; 
	printf("Address of f is : %p \n", &f);
	printf("Address in P : %p \n", (float *)p); 
	p = (float *)p + 1; 
	printf("Address after incremented : %p \n", (float *)p);  

return 0; 
}


/*output : 
 * Value of a is : 10
value of a is : 10 
Value of c is : A 
Value of f is : 10.900000 
Value of f is : 10.900000 
Address of a is : 0x7fff6fbee518 
Address in P : 0x7fff6fbee518 
Address after incremented : 0x7fff6fbee51c 
Address of c is : 0x7fff6fbee517 
Address in P : 0x7fff6fbee517 
Address after incremented : 0x7fff6fbee518 
Address of f is : 0x7fff6fbee51c 
Address in P : 0x7fff6fbee51c 
Address after incremented : 0x7fff6fbee520
*/ 
