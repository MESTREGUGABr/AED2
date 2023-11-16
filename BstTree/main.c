#include "bst.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[]) {
    arvore a = NULL;
    a = inserir(a, 18);
    a = inserir(a, 7);
    a = inserir(a, 9);
    a = inserir(a, 10);
    a = inserir(a, 27);
    a = inserir(a, 12);
    a = inserir(a, 21);
    a = inserir(a, 30);
    a = inserir(a, 2);
    
    //printf("Soma dos pares: %d\n",somaPar(a));

    /*printf("PRE-ORDER: ");
    preorder(a);
    printf("\nIN-ORDER: ");
    inorder(a);
    printf("\n");
    */
    preorder(a);
    printf("\n");
    a = podar(a,7);
    printf("\n");
    preorder(a);
    printf("\n");
    
    
   
    
    
    
    
    

    return 0;

}