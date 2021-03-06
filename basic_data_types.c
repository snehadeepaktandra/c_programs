/*Program to demonstrate various data types, Conversion characters and size(bytes) occupied in memory, to understand the range*/ 

#include<stdio.h> 

int main()
{
	
	/*variable declaration*/
	int a = -2147483648;  //int by default is signed integer type
        unsigned int b = 4294967295; 
        short int  c = -32768; 
	unsigned short int d = 65535; 
	long int e = -9223372036854775808U;  
	long long int f = -9223372036854775808U; 
	unsigned long int g = 18446744073709551615U; 
	unsigned long long int h = 18446744073709551615U; 
		
	char ch = 'c'; 

	float fl = -9999.999;
        double db = -1000000.1000000; 
	long double ldb = -1000000.1000000;         

	/*Pointers*/ 
	int *p_a = &a; 
	char *p_ch = &ch; 
	float *p_fl = &fl; 
	double *p_db = &db; 
	
       
	/*Printing variables*/ 
       printf("int a is : %d \n", a); 
       printf("unsigned int b is : %u \n", b); 
       printf("short int c is : %hd \n", c); 
       printf("unsigned short int d is : %u \n", d); 
       printf("long int e is : %li \n", e); 
       printf("long long int f is : %lli \n ", f); 
       printf("unsigned long int g is : %lu \n", g);
       printf("unsigned long long int h is : %llu \n", h);

       printf("charecter type ch is : %c\n", ch);
       printf("float type fl is : %6.3f\n", fl);
       printf("double type db is : %7.7lf\n", db);
       printf("long double type ldb is : %7.7Lf\n", ldb);

       printf("\n");

       /*Sizeof each data types*/	
	printf("sizeof 'integer' type is: %ld\n", sizeof(int)); 
	printf("sizeof 'unsigned integer' type is: %ld\n", sizeof(unsigned int)); 
	printf("sizeof 'short integer' type is: %ld\n", sizeof(short int)); 
	printf("sizeof 'unsigned short integer' type is: %ld\n", sizeof(unsigned short int)); 
	printf("sizeof 'long integer' type is: %ld\n", sizeof(long int)); 
	printf("sizeof 'long long integer' type is: %ld\n", sizeof(long long int)); 
	printf("sizeof ' unsigned long integer' type is: %ld\n", sizeof(unsigned long int)); 
	printf("sizeof 'unsigned long long integer' type is: %ld\n", sizeof(unsigned long long int)); 
	printf("sizeof 'charecter' type is: %ld\n", sizeof(char)); 
	printf("sizeof 'signed char' type is: %ld\n", sizeof(signed char)); 
	printf("sizeof 'unsigned char' type is: %ld\n", sizeof(unsigned char)); 
	printf("sizeof 'float' type is: %ld\n", sizeof(float)); 
	printf("sizeof 'double' type is : %ld \n", sizeof(double));
	printf("sizeof 'long double' is : %ld \n", sizeof(long double));

	printf("\n"); 

	/*dereferring Pointers*/ 
	printf("dereferring integer pointer p_a : %d \n", *p_a); 
	printf("dereferring charecter pointer p_ch : %c \n", *p_ch); 
	printf("dereferring float pointer p_fl : %6.3f \n", *p_fl); 
	printf("dereferring double pointer p_db : %7.7f \n", *p_db);

	printf("\n"); 

	/*printing size of pointers*/ 
	printf("size of interger pointer : %ld \n", sizeof(int *)); 
	printf("size of charecter pointer : %ld \n", sizeof(char *)); 
	printf("size of float pointer : %ld \n", sizeof(float *)); 
	printf("size of double pointer : %ld \n", sizeof(double *)); 
	
	printf("\n");

	/*printing pointers*/ 
	printf("Pointer p_a is : %p \n ", p_a); 
	printf("Pointer p_ch is : %p \n ", p_ch); 
	printf("Pointer p_fl is : %p \n ", p_fl); 
	printf("Pointer p_db is : %p \n ", p_db);

	printf("\n");

	/*Incrementing Pointers*/ 
	printf("Incrementing integer pointer : %p \n", ++p_a); 
	printf("Incrementing charecter pointer : %p \n", ++p_ch); 
	printf("Incrementing float pointer : %p \n", ++p_fl); 
	printf("Incrementing double pointer : %p \n", ++p_db); 
		

return 0; 
} 

/* 
Warnings : 
BasicDataTypes.c:13:16: warning: integer constant is so large that it is unsigned
  long int e = -9223372036854775808;
                ^~~~~~~~~~~~~~~~~~~
BasicDataTypes.c:14:21: warning: integer constant is so large that it is unsigned
  long long int f = -9223372036854775808;
                     ^~~~~~~~~~~~~~~~~~~
BasicDataTypes.c:15:24: warning: integer constant is so large that it is unsigned
  unsigned long int g = 18446744073709551615;
                        ^~~~~~~~~~~~~~~~~~~~
BasicDataTypes.c:16:29: warning: integer constant is so large that it is unsigned
  unsigned long long int h = 18446744073709551615;
                             ^~~~~~~~~~~~~~~~~~~~
---> Integer literals are by default of type signed int, the last number is too large to be represented as a signed 32 bit integer,
it is to be specified to the compiler that it is unsigned int by suffixig it with "U" 
===================================================================================================================================

Output : 
int a is : -2147483648 
unsigned int b is : 4294967295 
short int c is : -32768 
unsigned short int d is : 65535 
long int e is : -9223372036854775808 
long long int f is : -9223372036854775808 
 unsigned long int g is : 18446744073709551615 
unsigned long long int h is : 18446744073709551615 
charecter type ch is : c
float type fl is : -9999.999
double type db is : -1000000.1000000
long double type ldb is : -1000000.1000000

sizeof 'integer' type is: 4
sizeof 'unsigned integer' type is: 4
sizeof 'short integer' type is: 2
sizeof 'unsigned short integer' type is: 2
sizeof 'long integer' type is: 8
sizeof 'long long integer' type is: 8
sizeof ' unsigned long integer' type is: 8
sizeof 'unsigned long long integer' type is: 8
sizeof 'charecter' type is: 1
sizeof 'signed char' type is: 1
sizeof 'unsigned char' type is: 1
sizeof 'float' type is: 4
sizeof 'double' type is : 8 
sizeof 'long double' is : 16 

dereferring integer pointer p_a : -2147483648 
dereferring charecter pointer p_ch : c 
dereferring float pointer p_fl : -9999.999 
dereferring double pointer p_db : -1000000.1000000 

size of interger pointer : 8 
size of charecter pointer : 8 
size of float pointer : 8 
size of double pointer : 8 

Pointer p_a is : 0x7ffd82b38e9c 
 Pointer p_ch is : 0x7ffd82b38e97 
 Pointer p_fl is : 0x7ffd82b38ea0 
 Pointer p_db is : 0x7ffd82b38ea8 
 
Incrementing integer pointer : 0x7ffd82b38ea0 
Incrementing charecter pointer : 0x7ffd82b38e98 
Incrementing float pointer : 0x7ffd82b38ea4 
Incrementing double pointer : 0x7ffd82b38eb0
*/ 


