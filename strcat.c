#include<stdio.h>
#include<string.h> 

//#define MODE1 
#define MODE2 

#ifdef MODE1 
//Saving concatenated strings into new string without disturbing original strings. 
void string_concatenate(char *string1, char *string2, char *string3) 
{ 
	int i = 0,j =0; 
	
	while(string1[i] != '\0') {
	string3[i] = string1[i]; 
	i++; 
	}
	
	while(string2[j] != '\0') {
		string3[i] = string2[j]; 
		i++;
		j++; 
	}
	string1[i] = '\0';
}


#endif 

#ifdef MODE2
//concatenate 2 strings and store result in desination string(one of 2 input strings) 
void string_concatenate(char *string1, char *string2) 
{
	int i,j = 0; 
	i = strlen(string1); 
	
	while(string2[j] != '\0') {
		string1[i] = string2[j]; 
		i++; 
		j++; 
	}	
	string1[i] = '\0'; 
}

#endif 


int main()
{
	char string1[50] = "This is string1"; 
	char string2[50] = "and this is string2"; 
	char string3[100];

#if 0 
	printf("Enter string1 : ");
	fgets(string1, 50, stdin); 

	printf("Enter string2 : ");
	fgets(string2, 50, stdin); 
#endif 
	
	printf("string1 is : %s \n", string1);
	printf("string2 is : %s \n", string2);

#ifdef MODE1
	string_concatenate(string1, string2, string3);
	printf("Resultant string is : %s \n", string3);  
#endif 

#ifdef MODE2 
	string_concatenate(string1, string2);
	printf("Destination string1 is : %s \n", string1);
#endif 
	

return 0; 
}

/*Output : 
Using fgets and reading input strings from keyboard, newline gets appended after each string. 
*/
