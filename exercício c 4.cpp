#include<stdio.h>
int quant,total;

int main(){
	printf("Digite a quantidade de fruta\n");
	scanf("%d",&quant);
	
	//calculo
	if(quant>=12){
		total=(quant * 1.0);
	}
	else{
		total=(quant * 1.30);
	}
	printf("resultado\n");
	printf("total da compra %.2f\n",total);
return 0;	
}

