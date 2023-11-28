// Bruno Lauand Ferrão - 32217994
// Raul Vilhora Cardoso Matias - 32267274

#include <stdio.h>

int main() {
    FILE *file = fopen("entrada.txt", "r");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int N;
    fscanf(file, "%d", &N);

    int i, T, D, last_exit_time = 0, current_time = 0;
    int direction = 0; // 0: parada, 1: esquerda para direita, 2: direita para esquerda

    for (i = 0; i < N; ++i) {
        fscanf(file, "%d %d", &T, &D);

        // Calcula o tempo necessário para a pessoa chegar ao outro lado
        int travel_time = T - current_time;

        // Tempo atual
        current_time = T;

        // Se a escada está parada, ou a pessoa quer ir na mesma direção que a escada,
        // a pessoa entra imediatamente
        if (direction == 0 || direction == D) {
            last_exit_time = current_time + 10;
            direction = D;
        } else {
            // Se a pessoa quer ir na direção oposta, espera a escada parar
            last_exit_time = last_exit_time + 10 + travel_time;
            direction = D;
        }
    }

    // Imprime o momento em que a última pessoa saiu
    printf("%d\n", last_exit_time);

    fclose(file); // Fecha o arquivo

    return 0;
}
