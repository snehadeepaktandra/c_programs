/*strcmp returns 0 if strings matches. 
A non-zero value if strings doesn't match
*/

#include<stdio.h> 
#include<string.h> 

//RESPONSE1 is if length matches but strings doesn't match 
//RESPONSE2 is if length matches and strings matches 
//RESPONSE3 is if length only doesn't match
#define RESPONSE1 10 
#define RESPONSE2 0 
#define RESPONSE3 -10

#define DEBUG 0


int string_comparison(char *string1, char *string2) 
{
	int i; 
	
	if(strlen(string1) == strlen(string2)) {
#if DEBUG
	printf("Length of gives strings matching and proceeding to compare charecter by charecter \n"); 
#endif 
	for(i = 0; i<= strlen(string1); i++ ) {
#if DEBUG
		printf("string1[%d] - '%c' : string2[%d] - '%c' \n ", i , string1[i], i , string2[i]); 
#endif 
		if (string1[i] != string2[i]) {
#if DEBUG
			printf("strings doesn't match \n");
			printf("string1[%d] - '%c' doesn't match with string2[%d] - '%c' \n ", i , string1[i], i , string2[i]); 
#endif 
			return RESPONSE1; 	
			}
}
#if DEBUG	
	printf("Strings matches \n"); 
#endif 
	return RESPONSE2;
} 
#if DEBUG
	printf("Length of strings doesn't match \n"); 
#endif 
	return RESPONSE3; 

}

int main()
{
#if 0
	char string1[50] = "deepak2"; 
	char string2[50] = "deepak1";  
#endif 

	char string1[50];
	char string2[50];

	int res_std, res_imp; 

	printf("Enter string1 : "); 
	fgets(string1, 50, stdin);

	printf("Enter string2 : "); 
	fgets(string2, 50, stdin);

	res_std = strcmp(string1, string2); //standard library function call 
	printf("response of string comparison using standard strcmp library is : %d \n" , res_std); 

	res_imp = string_comparison(string1, string2) ; 
	printf("response of string comparison using implemented funtion is : %d \n", res_imp );   


return 0;    


}

