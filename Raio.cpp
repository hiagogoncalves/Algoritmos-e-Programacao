#include <stdio.h>

float raio,volume;

int main(){
	printf("digite o valor  de raio\n");
	scanf("%f",&raio);
	
//calculo
volume=((4.0/3.0)*3.14159*raio*raio*raio);

//comando de sa�da
printf("volume da esfera � %.2f",volume);
return 0;

}
