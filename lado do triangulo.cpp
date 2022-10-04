#include<stdio.h>
float a,b,c;

int main(){
	printf("digite o lado A do triangulo\n");
	scanf("%f",&a);
	printf("digite o lado B do triangulo\n");
	scanf("%f",&b);
	printf("digite o lado C do teriangulo\n");
	scanf("%f",&c);
	if(a+b>c && b+c>a && a+c>b){
	
	 if(a==b && b==c){
	
	 printf("equilatero\n");
    } 
	else if(a==b || c==a || b==c){
	
	 printf("isoceles\n");
    }
	 else{
	
	   printf("escaleno");
    }  

else{
	printf("a figura nao e um triangulo");
}
}
	return 0;
}
