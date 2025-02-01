#include <stdio.h>
//Desafio super trunfo cadastro de cartas
//teste maciel 

int mais(){
char estado[50]="Goias";
char nomedacidade[40]="Goiania";
int populaçao = 30000;
double areakm²= 729.29;
float pib= 38.48;

printf ("digite o nome do estado/n");
scanf ("%s", &estado);

printf("digite o nome da cidade/n");
scanf("s",&nomedacidade);

printf("digite a area da cidade/n");
scanf("%f",&areakm²);

printf("entre com valor do pib/n");
scanf("%f",&pib);

printf("entre com quantidade de pessoas/n");
scaf("%d",&populaçao);


return 0;
}