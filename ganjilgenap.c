#include <stdio.h>

int main() {
    int bilangan;

    // Meminta input dari pengguna
    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &bilangan);

    // Menentukan apakah bilangan genap atau ganjil
    if (bilangan % 2 == 0) {
        printf("%d adalah bilangan genap.\n", bilangan);
    } else {
        printf("%d adalah bilangan ganjil.\n", bilangan);
    }

    return 0;
}
