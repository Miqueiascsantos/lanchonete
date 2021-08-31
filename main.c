#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float x=0;
	float r=0;
	float r1=0;
	float r2=0;
	
	printf("Quantos sanduiches deseja: ");
	scanf("%f", &x);
	
	r= ((x * 2)* 50) /1000;
	r1= (x * 50) /1000;
	r2= (x * 100) /1000;
	
	printf("Quantidade de queijo a comprar em KG: %f kg\n",r);
	
	printf("Quantidade de presunto a comprar em KG: %f kg\n",r1);
	
	printf("Quantidade de hamburguer a comprar em KG: %f kg\n",r2);
	
	system("pause");
	
	return 0;
}
