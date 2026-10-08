#include <stdbool.h>

bool canMakeArithmeticProgression(int* arr, int arrSize) {
    // 1. Ordenação direta e simples (do menor para o maior)
    for (int i = 0; i < arrSize; i++) {
        for (int j = i + 1; j < arrSize; j++) {
            // Se o número atual for maior que um número à frente, trocam de lugar
            if (arr[i] > arr[j]) { //i=0 | j=1
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    // 2. Calcula a diferença entre o segundo e o primeiro número
    int diff = arr[1] - arr[0];
    
    // 3. Verifica se essa mesma diferença se mantém até ao fim
    for (int i = 2; i < arrSize; i++) {
        if (arr[i] - arr[i - 1] != diff) {
            return false; // A diferença mudou, não é progressão
        }
    }
    
    return true; // Passou em todas as verificações
}