#include <stdio.h>


int main() {

    int n = 9;
    int somatotal = 0;
    int somaesquerda = 0;

    for(int i = 0; i < n; i++){
        printf("int i = %d\n", i);
        somatotal += i;
        printf("Soma = %d\n", somatotal);
    }

    for(int i = n; i > 0; i--){
        somaesquerda += i;
        printf("somaesquerda = %d\n", somaesquerda);
        if(somatotal - somaesquerda == somaesquerda){
            printf("Somas iguais! %d = %d", somatotal, somaesquerda);
        }
    }

    return 0;
}