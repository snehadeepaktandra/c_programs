/*Program for strlen implementation*/ 

#include<stdio.h> 
#include<string.h> 

int string_length(char *string) 
{
	int length=0; 

	while(*string != '\0') {
		length++; 
		string++; 	
	}

return length; 

}

int main()
{

char string1[30]; 
char string2[30];
//char string1[20] = "This is string1";
//char string2[20] = "And this is string2"; 

#if 1
printf("Enter string1 : ");
fgets(string1, 30, stdin);   //fgets reads to a newline - fscanf reads to a whitespace 


printf("Enter string2 : ");
fgets(string2, 30, stdin);
#endif 

printf("string1 is : %s \n", string1); 
printf("string2 is : %s \n", string2);

printf("Length of string1 using strlen standard lib : %ld \n", strlen(string1));
printf("Length of string2 using strlen standard lib : %ld \n", strlen(string2)); 

printf("Length of string1 using implemented funtion : %d \n", string_length(string1)); 
printf("Length of string2 using implemented funtion : %d \n", string_length(string2)); 
  
return 0;
}

/*Output 
Enter string1 : This is string1
Enter string2 : And this is string2
string1 is : This is string1
 
string2 is : And this is string2
 
Length of string1 using strlen standard lib : 16 
Length of string2 using strlen standard lib : 20 
Length of string1 using implemented funtion : 16 
Length of string2 using implemented funtion : 20
*/ 
