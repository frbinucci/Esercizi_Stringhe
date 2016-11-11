#include<stdio.h>

int frequenza(char string[],char c);

int main()
{
	char string[20];
	char c;
	printf("Inserire una stringa: ");
	scanf("%19s",string);
	printf("Inserire il carattere da controllare: ");
	scanf(" %c",&c);

	int conta=frequenza(string,c);
	printf("\nLa frequenza di '%c' nella stringa e': %d",c,conta);
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