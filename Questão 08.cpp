#include <stdio.h>
#include <conio.h>

	int main(){
		int NUM, NUM1, NUM2, NUM3 ;
	  	printf("Digite um nu'mero natural de 3 digitos: ");
	  	scanf("%d", &NUM);
	  		if(NUM>10)
			{
			  NUM1=NUM%10;
			  NUM=NUM/10;
			  NUM2=NUM%10;
			  NUM=NUM/10;
			  NUM3=NUM%10;
			  
		  
			}   
	  		printf("%d%d%d\n\n", NUM1,NUM2,NUM3);
	  
}

  	
  
