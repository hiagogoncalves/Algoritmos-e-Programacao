#include<stdio.h>
float n1,n2, med;

int main(){
	printf("digite a n1\n");
	scanf("%f",&n1);
	printf("digite a n2\n");
	scanf("%f",&n2);
	
	if(n1>=0 && n1<=10 && n2>=0 && n2<=10){
	
//CALCULO
med=((n1+n1)/2);
	
	if(med>=7 && med<=10){
		printf("APROVADO\n");
	}
	 else if(med>=3 && med<7){
		printf("EXAME %.2f");
	}
	else if(med>=0 && med<3){
		printf("REPROVADO");
		
	}
	else{
		printf("NOTA INVALIDA");
	}
}
return 0;
}
