#include<stdio.h>
#include<string.h>

void inverti(char string[]);

int main()
{
	char string[20];
	printf("Inserire la stringa da invertire: ");
	scanf("%s",string);

	inverti(string);

	printf("\nStringa invertita: %s",string);
	printf("\n\n");

}

void inverti(char string[])
{
	int dim=strlen(string);
	char scambio;
	for(int i=0;i<dim/2;i++)
	{
		scambio=string[i];
		string[i]=string[dim-1-i];
		string[dim-i-1]=scambio;
	}

}