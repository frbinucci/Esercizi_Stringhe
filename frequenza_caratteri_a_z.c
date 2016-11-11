#include<stdio.h>

int frequenza(char string[],char c);
void frequenzaAlfabeto(char string[]);

int main()
{

	char string[27];
	char c;
	printf("Inserire una stringa: ");
	scanf("%26s",string);

	printf("\n");
	frequenzaAlfabeto(string);
	printf("\n\n");


}

int frequenza(char string[],char c)
{
	int count=0;
	int i=0;
	while(string[i]!='\0')
	{
		if(string[i]==c)
		{
			count++;
		}
		i++;
	}

	return count;
}

void frequenzaAlfabeto(char string[])
{
	int freq;
	char check='a';
	char max='a'+25;
	while(check<=max)
	{
		freq=frequenza(string,check);
		printf("La frequenza di %c nella stringa e': %d",check,freq);
		printf("\n");
		check++;
	}
}
