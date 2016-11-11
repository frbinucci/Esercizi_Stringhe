#include<stdio.h>
#include<ctype.h>

void toUpper(char string[]);

int main()
{
	char string[20];
	printf("Inserire la stringa da convertire: ");
	scanf("%19s",string);

	toUpper(string);

	printf("\nStringa maiuscola: %s",string);
	printf("\n\n");

}

void toUpper(char string[])
{
	int i=0;
	while(string[i]!='\0')
	{
		string[i]=toupper(string[i]);
		i++;
	}
}