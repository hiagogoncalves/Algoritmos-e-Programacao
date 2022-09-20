#include<stdio.h>
int id, ano_nasc, ano_atual;
int main(){
	printf("Digite o ano_nasc\n");
	scanf("%d",&ano_nasc);
	printf("Digite o ano_atual\n");
	scanf("%d",&ano_atual);
	
	//calculo
	id=(ano_atual - ano_nasc);
	
	if(id>=16){
		printf("Pode votar");
	}
	else{
		printf("Não pode votar\n");
	
	}
return 0;
}
