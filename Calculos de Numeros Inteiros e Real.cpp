#include <stdio.h>
#include <math.h>

float n1,n2,n3,cubo,produto,soma,rpow;

int main(){
	printf("digite um numero inteiro\n");
	scanf("%f",&n1);
	printf("digite outro numero inteiro\n");
	scanf("%f",&n2);
	printf("digite um numero real\n");
	scanf("%f",&n3);
	
//calculo
produto=((2*n1)+(n2/2));
soma=((3*n1)+(n3));
cubo=pow(n3,3);

//comando de saida
printf("produto %.2f\n",produto);
printf("soma %.2f\n",soma);
printf("ao cubo %.2f\n",cubo);
return 0;
}
