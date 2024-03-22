//questão01
#include<stdio.h>
#include<stdlib.h>

int soma(int num,int resu,int cont){
    cont=0;
    for(cont=0;cont<num;cont++){
        resu=resu+(num-cont);
    }
  return resu;
}

int main(){
  int num,resu,cont;
  printf("Digite um número: ");
  scanf("%d",&num);
  resu=soma(num,resu,cont);
  printf("A soma de todos os numeros dês de %d é = %d",num,resu);
  return 0;
}

//Questão 02
#include<stdio.h>
#include<stdlib.h>

int fatorial(int num,int resu,int cont){
    resu=1;
    for(cont=0;cont<num;cont++){
        resu=resu*(num-cont);
    }
  return resu;
}

int main(){
  int num,resu,cont;
  printf("Digite um número: ");
  scanf("%d",&num);
  resu=fatorial(num,resu,cont);
  printf("O valor fatorial deste numero %d é = %d",num,resu);
  return 0;
}

//Questão 3
#include<stdio.h>
#include<stdlib.h>

int esima(int num,int resu,int cont){
    for(cont=0;cont<num;cont++){
       if(cont=4,6,7,9,10,11,12,14,15,16,17,18,19,20){
       resu=resu;
       }else{
        resu=resu+cont;
    }
  return resu;
}
}
int main(){
  int num,resu,cont;
  printf("Digite a posição esima \nque você deseja na a sequência Fibonacci: \n ");
  scanf("%d",&num);
  resu=esima(num,resu,cont);
  printf("O numero correspondente \na essa posição '%d' esima \nna sequência Fibonacci é = %d",num,resu);
  return 0;
}

//Questão 4
#include<stdio.h>
#include<stdlib.h>

int c(int n,int m){
    for (n=0;n>=m;n++){
    printf(" %d,",n);
    }
}

int main(){
    int n,m;
    printf("Digite um número: ");
    scanf("%i",&m);
    m=c(n,m);
    return 0;
}

//Questão 5
#include<stdio.h>
#include<stdlib.h>

int c(int n,int m){
    for (n=m;n>=0;n--){
    printf(" %d,",n);
    }
}

int main(){
    int n,m;
    printf("Digite um número: ");
    scanf("%i",&m);
    m=c(n,m);
    return 0;
}
