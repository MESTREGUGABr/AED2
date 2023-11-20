#include "bst.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[]) {
    arvore a = NULL;
    int opcao, valor;

    do {
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                scanf("%d", &valor);
                a = inserir(a, valor);
                break;

            case 2:
                preorder(a);
                printf("\n");
                break;

            case 3:
                inorder(a);
                printf("\n");
                break;

            case 4:
                posorder(a);
                printf("\n");
                break;

            case 5:
                reverso(a);
                printf("\n");
                break;

            case 6:
                printf("%d\n", qtdPar(a));
                break;

            case 7:
                scanf("%d", &valor);
                int ant = antecessor(a, valor);
                printf("%d\n",ant);
                break;

            case 8:
                scanf("%d", &valor);
                printf("%d\n",pai(a, valor));
                break;

            case 9:
                scanf("%d", &valor);
                a = remover(a, valor);
                break;

            case 10:
                printf("%d\n", somaPar(a));
                break;

            case 11:
                scanf("%d", &valor);
                a = podar(a, valor);
                break;

            case 12:
                a = dobro(a);
                break;

            case 13:
                scanf("%d", &valor);
                printf("%d\n", busca(a, valor));
                break;

            case 14:
                scanf("%d", &valor);
                descendentes(a, valor);
                break;

            case 15:
                printf("%d\n", altura(a));
                break;

            case 99:
                printf("\n");
                break;

        }
    } while (opcao != 99);

    return 0;
}
