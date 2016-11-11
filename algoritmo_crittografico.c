#include <stdio.h>

void cripta(char string[],int chiave);
void decripta(char string[],int chiave);

int main()
{
	char string[20];
	int key;
	printf("Inserire la stringa da criptare: ");
	scanf("%19s",string);
	printf("Inserire la chiave: ");
	scanf("%d",&key);
	cripta(string,key);
	printf("\nStringa criptata: %s",string);
	decripta(string,key);
	printf("\nStringa decriptata: %s",string);
	printf("\n\n");

}

void cripta(char string[],int chiave)
{
	int i=0;
	int offset;
	while(string[i]!='\0')
	{
		if(string[i]>='a' && string[i]<='z')
		{
			offset=chiave;
			if(string[i]+chiave>'z')
			{
				do
				{
					offset-=26;
				}
				while(string[i]+offset>'z');
			}
			string[i]=string[i]+offset;
		}
		i++;
	}

}

void decripta(char string[],int chiave)
{
	int i=0;
	int offset;
	while(string[i]!='\0')
	{
		if(string[i]>='a' && string[i]<='z')
		{
			offset=chiave;
			if(string[i]-chiave<'a')
			{
				do
				{
					offset-=26;
				}
				while(string[i]-offset<'a');
			}
			string[i]-=offset;

		}
		i++;
	}

}