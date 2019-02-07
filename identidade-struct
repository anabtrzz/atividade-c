#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
typedef struct{
	char nome[60];
	int nascimento;
	char mae[60];
	char pai[60];
	char sexo[10];
	int rg;
}Identidade;

main(){
	setlocale(LC_ALL,"");
	Identidade id;
	
	printf ("seu nome: ");
	scanf ("%s", id.nome);
	
	printf ("sua idade: ");
	scanf ("%d", &id.nascimento);
	
	printf ("nome da mãe: ");
	scanf ("%s", id.mae);
	
	printf ("nome do pai: ");
	scanf ("%s",id.pai);
		
	printf ("sexo: ");
	scanf ("%s",id.sexo);
	
	printf ("rg: ");
	scanf ("%d",&id.rg);
	
	printf ("%s \n %d anos \n filhx de %s e %s \n do sexo %s \n e rg %d", id.nome, id.nascimento, id.mae, id.pai, id.sexo, id.rg);
}
