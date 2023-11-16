#include "bst.h"
#include <stdlib.h>
#include <stdio.h>

arvore inserir(arvore raiz, int valor){
    if(raiz == NULL){
        arvore nova = (arvore) malloc(sizeof(struct no));
        nova->valor = valor;
        nova->esq = NULL;
        nova->dir = NULL;

        return nova;
    }
    else {
        if(valor > raiz->valor){
            raiz->dir = inserir(raiz->dir, valor);
        } else {
            raiz->esq = inserir(raiz->esq, valor);
        }
        return raiz;
    }
}

void preorder(arvore raiz){
    if(raiz != NULL){
        printf("[%d]",raiz->valor);
        preorder(raiz->esq);
        preorder(raiz->dir);
        
    }
    

}

void inorder(arvore raiz){
    if(raiz != NULL){
        inorder(raiz->esq);
        printf("[%d]",raiz->valor);
        inorder(raiz->dir);
    }
}

void posorder(arvore raiz){
    if(raiz != NULL){
        posorder(raiz->esq);
        posorder(raiz->dir);
        printf("[%d]",raiz->valor);
    }
}

int qtdPar(arvore raiz){
    
    int cont = 0;
    
    if(raiz == NULL){
        return 0;
    }
    
    if(raiz->valor % 2 == 0){
        cont++;
    }
    
    cont += qtdPar(raiz->esq);
    cont += qtdPar(raiz->dir);
    
    return cont;
}

int pai(arvore raiz, int valor){
    if(raiz != NULL){
        if(raiz->esq->valor == valor || raiz->dir->valor == valor){
            printf("[%d]", raiz->valor);
        } else {
            pai(raiz->esq,valor);
            //pai(raiz->dir,valor);
        }
    }
    
}

int altura(arvore raiz){
    if(raiz == NULL){
        return 0;
    } 
    int alturaEsq = altura(raiz->esq);
    int alturaDir = altura(raiz->dir);
    
    return 1 + (alturaEsq > alturaDir ? alturaEsq : alturaDir);
}

int busca(arvore raiz, int chave){
    if(raiz != NULL){
        if (raiz->valor == chave){
            return 1;
        }
        if(busca(raiz->esq,chave) == 1){
            return 1;
        }
        if(busca(raiz->dir,chave) == 1){
            return 1;
        }
    } 
    return 0;
}

arvore dobro(arvore raiz){
    if(raiz != NULL){
        raiz->valor = raiz->valor * 2;
        dobro(raiz->esq);
        dobro(raiz->dir);
    }
}

void descendentes(arvore raiz, int chave){
    
}

int somaPar(arvore raiz){
    int somador = 0;
    
    if(raiz == NULL){
        return 0;
    }
    if(raiz != NULL){
        if(raiz->valor % 2 == 0){
            somador += raiz->valor;
        }
        somador += somaPar(raiz->esq);
        somador += somaPar(raiz->dir);
        
    }
    return somador;
}
    

    

