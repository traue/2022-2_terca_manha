//está desatualizado.. vamos corrigir ainda.. :D

int buscaBinaria(int v[], int n, int vBusca)
{
    int esq = 0;
    int dir = n - 1;
    while (esq <= dir) {
        int meio = esq + (dir - esq) / 2;
        if (v[meio] == vBusca)
            return meio;
        if (v[meio] < vBusca)
            esq = meio + 1;
        else
            dir = meio - 1;
    }
    return -1;
}
void main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int v[n];
    int v_ordenado[n];
    int insert, insert_index;
    for (int i = 0; i < n; i++) {
        printf("Digite um valor para a %dª posição: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\n[ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("]");
    printf("\nORDENANDO VETOR...\n");
    for (int i = 0; i < n; i++)
    {
        int min = v[i];
        for (int j = 0; j < n; j++) {
            if (v[j] > min) {
                min = v[j];
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
        for (int i = 0; i < n; i++){
            printf("%d ", v[i]);
        }
        printf("]");
        //printf("\nDigite um valor a buscar: ");
    }

    return 0;
}