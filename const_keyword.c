/*Program to demonstrate const keywork*/ 
/*when const keywork added to variable, it is only allowed to read and write is not allowed */ 
/*const is a compile time instruction*/ 

#include<stdio.h> 

int main()
{

	const int a = 10; 
	//a = 100; doesnt work as it is not allowed to write  
	int *p = &a;
       *p = 100; // is still allowed as pointer itself is not const 
	
	const int b = 20; 
 	const int *q = &b; //pointer pointing to variable of type 'const int'
	//*q = 200; doesn't work 
	++q; //this still works 

	const int c = 30; 
	const int *const r = &c; 
	//++r; this doesn't work as pointer is also defined const 	


return 0; 
}

/* a = 100 gives below error : 
 * error: assignment of read-only variable ‘a’

 ++r gives below error : 
 error: increment of read-only variable ‘r’ 
 */ 
