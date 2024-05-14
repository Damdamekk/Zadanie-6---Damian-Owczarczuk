#include <stdio.h>

int main() {
    // Tworzenie tablicy dziesięciu liczb całkowitych
    int array[10];

    // Inicjalizacja tablicy wartościami od 0 do 9
    for (int i = 0; i < 10; i++) {
        array[i] = i;
    }

    // Użycie wskaźnika do wyświetlenia zawartości tablicy
    int *ptr = array; // Inicjalizacja wskaźnika na pierwszy element tablicy
    for (int i = 0; i < 10; i++) {
        printf("Wartość elementu %d: %d\n", i, *ptr); // Wyświetlenie wartości elementu
        ptr++; // Przesunięcie wskaźnika na następny element
    }

    return 0;
}
