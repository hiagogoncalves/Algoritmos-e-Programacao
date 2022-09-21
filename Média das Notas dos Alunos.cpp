#include <stdio.h>

float n1,n2,n3,media;

int main(){
	printf("MEDIA DO ALUNO\n");
	printf("Digite a n1\n");
	scanf("%f",&n1);
	printf("Digite a n2\n");
	scanf("%f",&n2);
	printf("Digite a n3\n");
	scanf("%f",&n3);
	
//calculo
media=( (n1*0.2) + (n2*0.3) + (n3*0.5) );

//comando de saida
printf("resultado\n");
printf("A média do aluno: %.2f",media);
return 0;
}
