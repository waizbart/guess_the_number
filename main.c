#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int chute, placar = 0, dificuldade, random, sair = 0, win;

	printf("=-=-=-=-=-=- ADIVINHE O NÚMERO -=-=-=-=-=-=-=");

	while (sair == 0) {
    win = 0;
    
		printf("\n\nSELECIONE UMA DIFICULDADE:\n1 - FÁCIL\n2 - MÉDIO\n3 - "
			   "HARD\n4 - SAIR\n\n--> ");
		scanf("%i", &dificuldade);

    srand(time(NULL));

		switch (dificuldade) {
  		case 1:
  			random = rand() % 10;
  			break;
  		case 2:
  			random = rand() % 20;
  			break;
  		case 3:
  			random = rand() % 50;
  			break;
  		case 4:
  			printf("\nVocê escolheu sair.\n");
  			sair = 1;
        win = 1;
  			break;
		}

    printf("%i", random);

		while (win == 0) {
			placar++;
			printf("\nSEU CHUTE: ");
			scanf("%i", &chute);

			if (chute == random) {
				printf("PARABÉNS! ACERTOU EM %i TENTATIVAS!", placar);
				win = 1;
				break;
			} else if (chute > random) {
				printf("CHUTE UM VALOR MENOR...");
			} else if (chute < random) {
				printf("CHUTE UM VALOR MAIOR...");
			}
		}
	}
	return 0;
}