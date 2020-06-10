/*
Program to demonstrate, accepting arguments from command-line and 
strncmp funtion implementation

return 0 if string matches for n bits 
If mis-match, return +ve integer if string1 is greater than string2 
If mis-match, return -ve integer if string2 is greater than string1  
*/ 

#include<stdio.h>
#include<string.h> 
#include<stdlib.h> //for exit funtion 

#define DEBUG 0  
#define POSITIVE_INTEGER 100 
#define NEGATIVE_INTEGER -100
#define ZERO_RESPONSE 0 

int find_min(int *a) 
{
//work to implement better 
	int min = a[0];

	if(a[0] >= a[1]) {
	min = a[1]; 
	} 
	
	if(a[0] >= a[2]) {
	min = a[2]; 
	}
	
	return min; 

}

int string_n_comparison(char *string1, char *string2, int n) 
{

	int len_string1, len_string2, for_limit;   
	int a[3], i; 

	len_string1 = strlen(string1); 
	len_string2 = strlen(string2); 
	a[0] = n; 
	a[1] = len_string1;
	a[2] = len_string2; 

	for_limit = find_min(a); 
	
	for(i = 0; i < for_limit; i++) {
		if(string1[i] != string2[i]) {
			if(len_string1 > len_string2) {
				return POSITIVE_INTEGER; 
			}	
			return NEGATIVE_INTEGER; 	
	}
	} 

	return ZERO_RESPONSE; 

}

int main(int argc, char *argv[]) 
{
	int i = 0; 
	int n; 
	//int ret_strncmp; 
	int ret_userdef; 
	char string1[50], string2[50]; 

#if DEBUG	
	printf("number of input arguments : %d \n", argc ); 
#endif 
	if(argc != 4) {
		printf("usage : strncmp <string1> <string2> <num of bits to be compared> \n"); 
		exit(0); 
	} 
#if DEBUG
	printf("printing input arguments : \n"); 
	while(i <= 3) { 
		printf("%s \n", argv[i]) ;
		i++; 
	}
#endif   
	sscanf(argv[1], "%s", string1);
	sscanf(argv[2], "%s", string2);
	sscanf(argv[3], "%d", &n); 

#if DEBUG
	printf("%s %s %d \n", string1, string2, n); 
#endif  
	//ret_strncmp = strncmp(string1, string2, n); 
	//printf("response using standard strncmp library funtion : %d \n", ret_strncmp); 

	ret_userdef = string_n_comparison(string1, string2, n); 	 
	printf("response using implemented strncmp funtion : %d \n", ret_userdef);   
	
return 0; 

}
