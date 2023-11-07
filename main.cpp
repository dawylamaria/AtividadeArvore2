#include <iostream>

using namespace std;
struct NoArvore {
    int data;
    NoArvore *esquerda;
    NoArvore *direita;
};

void imprimir(NoArvore *raiz) {
    if (raiz != NULL) {
        imprimir(raiz -> esquerda);
        imprimir(raiz -> direita);
        cout << raiz -> data << " ";

    }
}

void deletarArvore(NoArvore *&raiz) {
    if (raiz != NULL) {
        deletarArvore(raiz -> esquerda);
        deletarArvore(raiz -> direita);
        delete raiz;

        raiz = NULL;
        

    }
}

int main(int argc, char** argv) {

    NoArvore *raiz = new NoArvore;
    raiz -> data = 6;
    raiz -> esquerda = NULL;
    raiz -> direita = NULL;

    NoArvore* elementoEsquerda = new NoArvore;
    elementoEsquerda -> data = 5;
    elementoEsquerda -> esquerda = NULL;
    elementoEsquerda -> direita = NULL;

    NoArvore* elementoDireita = new NoArvore;
    elementoDireita -> data = 11;
    elementoDireita -> esquerda = NULL;
    elementoDireita -> direita = NULL;

    raiz->esquerda = elementoEsquerda;
    raiz->direita = elementoDireita;

    imprimir(raiz);
    
    deletarArvore(raiz);
    cout << "\nRaiz apos ser deletada:"<< endl;
    imprimir (raiz);
    

    return 0;
}

