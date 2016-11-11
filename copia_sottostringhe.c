#include<stdio.h>

void copiaSottostringa(char string1[],char string2[],int i,int j);

int main()
{
	char string1[20],string2[20];
	int i,j;
	printf("Inserire una stringa: ");
	scanf("%19s",string1);
	printf("\nInserire indice iniziale: ");
	scanf("%d",&i);
	printf("Inserire indice finale: ");
	scanf("%d",&j);

	copiaSottostringa(string1,string2,i,j);

	printf("\nSottostringa estratta: %s",string2);
	printf("\n\n");


}

void copiaSottostringa(char string1[],char string2[],int i,int j)
{
	int k,z;
	z=0;
	for(int k=i;k<=j;k++)
	{
		string2[z]=string1[k];
		z++;
	}
	string2[z]='\0';
}