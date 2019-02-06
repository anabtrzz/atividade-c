#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
typedef struct{
	char nome[20];
	char tipo[20];
	int A;
	int D;
} Pokemon;

main (){
	setlocale(LC_ALL,""); 
	Pokemon poke;
	printf ("Digite o nome: ");
	scanf ("%s", poke.nome);
	printf ("O nome é: %s \n", poke.nome);
	
	printf ("Digite o tipo do seu pokemon: ");
	scanf ("%s", poke.tipo);
	printf ("O tipo do seu pokemon é: %s \n", poke.tipo);
	
	printf ("Digite um poder de ataque: ",poke.A);
	scanf ("%d",&poke.A);
	printf ("O poder de ataque é: %d \n", poke.A);
	
	printf ("Digite um poder de defesa: ");
	scanf ("%d", &poke.D);
	printf ("O poder de defesa é: %d \n", poke.D);
}
