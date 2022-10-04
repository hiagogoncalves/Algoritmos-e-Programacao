#include<stdio.h>
int idade;
int main(){
	printf("digite a idade");
	scanf("%d",&idade);
	
	if(idade>=5 && idade<=150){
		if(idade>=5 && idade<=7){
			printf("INFANTIL");}
		else if(idade>=8 && idade<=10){
				printf("JUVENIL");}
		else if(idade>=11 && idade<=15){
					printf("ADOLESCENTE");}
		else if(idade>=16 && idade<=30){
						printf("ADULTO");}
		else if(idade>=30 && idade<=150){
							printf("SENIOR");
		}
	}
	
	
else {
	printf("IDADE INVALIDA");
}

return 0;
}

