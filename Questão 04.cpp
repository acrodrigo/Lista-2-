#include<stdio.h>
#include<conio.h>
	int main(){
		float sal, sal1;
		printf("Digite o valor do seu s�lario.\n");
		scanf("%f", &sal);
		sal1 = sal + (sal*0.25);
		printf("Seu s�lario com bonus de 25% � %.2f.", sal1);
	}
