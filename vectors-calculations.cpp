//Developed by Lucas Martins

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

	int vectorA [5], vectorB [5], calculations[5], i;
	char choose_operator;

for (i = 0 ;  i < 5 ;  i++)
	{
		printf("Chose de values of vector A:\n");

     	scanf("%d", &vectorA[i]);
	}

	system("cls");

	for (i = 0 ;  i < 5 ;  i++)
	{
		printf("Chose de values of vector B:\n");

     	scanf("%d", &vectorB[i]);
	}
	
	system("cls");
	
	printf("Chose an operation (options: + , * , - , / , m) //m = mean) \n");
	scanf("%s", &choose_operator);
	
	if (choose_operator == '+')
	{
		for(i = 0; i < 5; i++)
		{
		printf("\tThe SUM of vectores a and b is:%i\n\n",calculations[i] = vectorA[i] + vectorB[i]);
		}
	}
	
		if (choose_operator == '*')
	{
		for(i = 0; i < 5; i++)
		{
		printf("\tThe SUBTRACTION of vectores a and b is:%i\n\n",calculations[i] = vectorA[i] * vectorB[i]);
		}
	
	}	
	
		if (choose_operator == '-')
	{
		for(i = 0; i < 5; i++)
		{
		printf("\tThe MULTIPLICATION of vectores a and b is:%i\n\n",calculations[i] = vectorA[i] * vectorB[i]);
		}
	
	}	
	
		if (choose_operator == '/')
	{
		for(i = 0; i < 5; i++)
		{
		printf("\tThe DIVISION of vectores a and b is:%i\n\n",calculations[i] = vectorA[i] / vectorB[i]);
		}
	
	}
	
		if (choose_operator == 'm' || choose_operator == 'M')
	{
		for(i = 0; i < 5; i++)
		{
		printf("\tThe MEAN of the values chosen for a and b is:%i\n\n",calculations[i] = (vectorA[i] + vectorB[i]) / 2);
		}
	
	}
	
	system("pause");
	return 0;
}
