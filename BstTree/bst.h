#ifndef BST_H
#define BST_H

typedef struct no {
    int valor;
    struct no *esq;
    struct no *dir;
} no;

typedef no* arvore;


arvore inserir(arvore raiz, int valor);
void preorder(arvore raiz);
void inorder(arvore raiz);
void posorder(arvore raiz);
int qtdPar(arvore raiz);
int pai(arvore raiz, int valor);
int altura(arvore raiz);
int busca(arvore raiz, int chave);
arvore dobro(arvore raiz);
int somaPar(arvore raiz);
void reverso(arvore raiz);
void descendentes(arvore raiz, int chave);
arvore remover(arvore raiz, int valor);
int maiorValor(arvore raiz);
arvore podar(arvore raiz, int valor);
void podarAuxiliar(arvore raiz);
void antecessor(arvore raiz);








#endif