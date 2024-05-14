#include <stdio.h>

// Deklaracje funkcji
int dodawanie(int a, int b) {
    return a + b;
}

int mnozenie(int a, int b) {
    return a * b;
}

int odejmowanie(int a, int b) {
    return a - b;
}

int main() {
    // Deklaracja wskaźnika do funkcji
    int (*operation)(int, int);

    int a, b;
    char choice;

    printf("Podaj dwie liczby całkowite: ");
    scanf("%d %d", &a, &b);

    printf("Wybierz operację:\n");
    printf("a) Dodawanie\n");
    printf("b) Mnożenie\n");
    printf("c) Odejmowanie\n");
    printf("Twój wybór: ");
    scanf(" %c", &choice);

    // Ustawienie wskaźnika na odpowiednią funkcję w zależności od wyboru użytkownika
    switch (choice) {
        case 'a':
            operation = dodawanie;
            break;
        case 'b':
            operation = mnozenie;
            break;
        case 'c':
            operation = odejmowanie;
            break;
        default:
            printf("Niepoprawny wybór operacji.\n");
            return 1;
    }

    // Wywołanie funkcji za pomocą wskaźnika i wyświetlenie wyniku
    int result = operation(a, b);
    printf("Wynik operacji: %d\n", result);

    return 0;
}
