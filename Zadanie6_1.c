#include <stdio.h>

// Definicja unii
union Data {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    // Inicjalizacja unii
    union Data data;

    // Przypisanie i wyświetlenie wartości dla typu int
    data.intValue = 10;
    printf("Wartość int: %d\n", data.intValue);

    // Przypisanie i wyświetlenie wartości dla typu float
    data.floatValue = 3.14;
    printf("Wartość float: %f\n", data.floatValue);

    // Przypisanie i wyświetlenie wartości dla typu char
    data.charValue = 'A';
    printf("Znak char: %c\n", data.charValue);

    return 0;
}
