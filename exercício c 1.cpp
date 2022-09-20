#include<stdio.h>
#include<math.h>
float n,qua,cub,raizq,raizc,rpow;

int main(){
//comandos de entrada
printf("Digite um numero\n");
scanf("%f",&n);

//operações matematicas
qua=pow(n,2); //n elevado a 2
cub=pow(n,3); //n elevado a 3
raizq=sqrt(n); //raiz quadrada de n
raizc=cbrt(n); // raiz cubica de n
rpow=pow(n,(4.0/7.0)); //raiz usando o pow

//comando de saida
printf("\nQuadrado %.2f\n",qua);
printf("\nCubo %.2f\n",cub);
printf("\nraizq %2.2f\n",raizq);
printf("\nraizc %.2f\n",raizc);
printf("\nraiz utilizando a funcao pow %.2f",rpow);

return 0;
}
