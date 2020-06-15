/*Accept one character from user and convert case of that character.
Input : a Output : A
Input : D Output : d
*/


#include<stdio.h>

void Display(char cValue)
{
	if((cValue>=65)&&(cValue<=90))
	{
		cValue=cValue+32;
		printf("%c",cValue);
	}
	else if((cValue>=97)&&(cValue<=122))
	{
		cValue=cValue-32;
		printf("%c",cValue);
	}
}
int main()
{
	char cValue='\0';

	printf("Enter character \n");
	scanf("%c",&cValue);

	Display(cValue);
	
	return 0;
}
