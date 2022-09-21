#include <stdio.h>

float km,pagar,km_rodados;
int main(){
	printf("valor da corrida\n");
	printf("informa o km do percurso\n");
	scanf("%f",&km);
	
//calculo
 km_rodados=(km*3.00);
 pagar=(km_rodados*4.90);
 
//comando de saida
printf("o valor da corrida foi de %.2f",pagar);
return 0;
}
