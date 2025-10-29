#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


int main(){
    int ex;
    printf("Escolhe o exercicio(1/2/3/4): ");
    scanf("%d", &ex);

    if(ex==1){
        int ano;
        char declarar[50];

        printf("Digite o seu ano escolar: ");
        scanf("%d", &ano);

        switch(ano){
        case 10:
            strcpy(declarar, "Bem-vindo ao ensino secund�rio!");
            break;
        case 11:
        case 12:
            strcpy(declarar, "Continue firme, falta pouco para a faculdade!");
            break;
        default:
            strcpy(declarar, "Aproveite o novo ano letivo!");
        }

        printf("\n%s", declarar);
    }

    if(ex==2){
        int kwas;

        printf("Quantas disciplinas ter� este ano?: ");
        scanf("%d", &kwas);

        int notas[kwas];

        for(int i = 0; i<kwas; i++){
            printf("\nDigite a nota da disciplina %d: ", i+1);
            scanf("%d", &notas[i]);
        }

        float media=0.0;
        for(int i = 0; i<kwas; i++){
            media=media+notas[i];
        }

        media=(float)media/kwas;

        printf("A m�dia das suas notas �: %.1f", media);
    }

    if(ex==3){ //"cria um jogo simples em c"
        int numeroSecreto, palpite, tentativas = 0;

        // Inicializa o gerador de n�meros aleat�rios
        srand(time(NULL));
        numeroSecreto = rand() % 100 + 1; // N�mero entre 1 e 100

        printf("Bem-vindo ao jogo de adivinha��o!\n");
        printf("Tente adivinhar o n�mero entre 1 e 100.\n");

        do {
            printf("Digite seu palpite: ");
            scanf("%d", &palpite);
            tentativas++;

            if (palpite < numeroSecreto) {
                printf("Muito baixo!\n");
            } else if (palpite > numeroSecreto) {
                printf("Muito alto!\n");
            } else {
                printf("Parab�ns! Voc� acertou em %d tentativas.\n", tentativas);
            }
        }
        while (palpite != numeroSecreto);
    }

    if(ex==4){
        int list[10];
        printf("Digite 10 numeros para os ordenar");
        for (int i = 0; i<10; i++){
            printf("\nDigite o numero %d: ", i+1);
            scanf("%d", &list[i]);
        }

        printf("\nOrdenacao incompleta: ");
        for (int i = 0; i<10; i++){printf("%d", list[i]); if(i!=9){printf(",");}}
        printf("\n");

        int placeholder;
        int complete = 0;

        do{
            complete = 1;
            for(int i = 0; i<9; i++){
                if(list[i]>list[i+1]){
                    placeholder = list[i];
                    list[i]=list[i+1];
                    list[i+1]=placeholder;

                    complete = 0;
                }
            }
            for (int it = 0; it<10; it++){printf("%d", list[it]); if(it!=9){printf(",");}}
            printf("\n");
        }
        while(!complete);

        printf("\n");
        printf("Ordenacaoo completa: ");
        for (int i = 0; i<10; i++){printf("%d", list[i]); if(i!=9){printf(",");}}
    }
    return 0;
}
