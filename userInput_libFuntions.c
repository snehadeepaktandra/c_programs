//sscanf 
//fscanf 
//gets --> Funtionality not supported by latest compilers 
//fgets 
//scanf

//gets and fgets are same but how many bytes are to be read can be specified using fgets. 
//fgets reads until new line charecter. 


#include<stdio.h> 
#include<stdlib.h>


int main() 
{
	FILE *fp;

	int i; 
	char str[10];  
	
	fp = fopen("file.txt", "w+"); //opening file  
	fputs("10 string", fp); //writing into file 
	fflush(fp); 
	rewind(fp); // sets file position to beginning of file 
	
	fscanf(fp, "%d %s ", &i, str); 
	
	fclose(fp); 	
		
	printf("int read from fscanf of file : %d \n", i ); 
	printf("str read from fscanf of file : %s \n", str ); 
	  

#if 0	
	char scanf_string[50]; 
	char fgets_string[50]; 

	char sscanf_string[50] = "5 ignore content"; 
	int i; 
	char str[10];  

	printf("Enter string to input through scanf : ");
	scanf(" %s", scanf_string); //stops reading after whitespace 
	printf(" scanf_string is : %s \n", scanf_string);


	printf("Enter string to input through fgets : ");
	fgets(fgets_string, 50, stdin);  
	printf(" fgets_string is : %s \n", fgets_string);   

	sscanf(sscanf_string, "%d %*s %s", &i, str); // *s is to skip string in the order ('ignore' is string skipped in this case)
	printf("int read from sscanf : %d \n", i); 
	printf("str read from sscanf : %s \n", str);   
#endif  

return 0; 
}



/*
Output : 
Enter string to input through scanf : this is input string
 scanf_string is : this

Enter string to input through fgets : this is input string
 fgets_string is : this is input string

int read from sscanf : 5 
str read from sscanf : content

int read from fscanf of file : 10 
str read from fscanf of file : string
*/  
