#include<stdio.h>
#include<string.h>


void string_reversal(char *str) 
{
	int i = 0;
	int j;  
	char temp; 

	j = strlen(str)-1; 

	while(i <= j) {
 		temp = str[i]; 
		str[i] = str[j]; 
		str[j] = temp;  
		i++; 
		j--; 
	}

}


int main()
{
	char string[50] = "This is sample string for reversal"; 

	printf("string before reversal : %s \n", string);
	
	string_reversal(string); 

	printf("String after reversal : %s \n", string); 

	return 0; 
}


