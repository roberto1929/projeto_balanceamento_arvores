#include <libprg/libprg.h>


int main() {
    no_avl_t *raiz = NULL;
    srand(time(NULL));
    int n, valor,z;
    int contador = 0;

    printf("┌—————————————————————————————————————————————————————┐\n");
    printf("| Bem vindo ao programa de manipulação de árvores AVL |\n");
    printf("└—————————————————————————————————————————————————————┘\n");

    printf("Digite o número de elementos a serem inseridos na árvore (n): ");
    scanf("%d", &n);

    printf("Digite o número de elementos a serem removidos da árvore (z): ");
    scanf("%d", &z);

    int *valores_na_arvore = (int *) malloc(n * sizeof(int));

    printf("Inserindo %d elementos na árvore AVL\n", n);
    for (int i = 0; i < n; i++) {
        valor = rand() % 100;
        raiz = inserir(raiz, valor, &contador);
        valores_na_arvore[i] = valor;
    }
    imprimir_texto_grafo(raiz);

    printf("\nRemovendo %d elementos da árvore AVL\n", z);
    for (int i = 0; i < z; i++) {
        int indice = rand() % n;
        valor = valores_na_arvore[indice];
        raiz = remover(raiz, valor, &contador);
    }

    free(valores_na_arvore);
    imprimir_texto_grafo(raiz);

    printf("\nTotal de rotações feitas: %d\n", contador);
    printf("\nEncerrando programa....\n");
    return 0;
}