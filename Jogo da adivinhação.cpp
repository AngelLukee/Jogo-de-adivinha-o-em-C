#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");	
	
int aleatorio, participanteNum = 0, palpites = 0;
srand(time(0));
aleatorio = rand() % 100 + 1;

  printf("Este é um jogo da adivinhação, irei gerar um numero aleatório\ne você precisa tentar descobrir qual foi o numero gerado.\n");
	printf("O numero aleatório gerado, será de 1 a 100.\n\n");
	
	while (participanteNum != aleatorio){
		printf("Digite um numero:\n");
			scanf("%d", &participanteNum);
			 if (participanteNum == aleatorio){
			 	printf("Parabéns! Você acertou o número!\n");
			 		palpites++;
			 }
			 else if (participanteNum > aleatorio) {
			 	printf("Muito alto! Tente um menor!\n\n");
			 		palpites++;
			 }
			 else {
			 	printf("Muito baixo! Tente um maior!\n\n");
			 		palpites++;
			 }
	}
		printf("Você necessitou de %d palpites para acertar o número.", palpites);
}
