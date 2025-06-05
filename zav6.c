#include <stdio.h>

// Введення масиву
void inputArray(int arr[], int n, char name) {
    for (int i = 0; i < n; i++) {
        printf("Введіть %c[%d]: ", name, i + 1);
        scanf("%d", &arr[i]);
    }
}

// Виведення масиву
void printArray(int arr[], int n, char name) {
    printf("Масив %c: ", name);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Підрахунок від’ємних чисел
int countNegative(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) count++;
    }
    return count;
}

// Основна програма
int main() {
    int n;

    printf("Введіть кількість елементів у масивах (n > 0): ");
    while (scanf("%d", &n) != 1 || n <= 0) {
        printf("Помилка! Введіть натуральне число n > 0: ");
        while (getchar() != '\n');
    }

    int a[n], b[n];

    inputArray(a, n, 'a');
    inputArray(b, n, 'b');

    printArray(a, n, 'a');
    printArray(b, n, 'b');

    int negA = countNegative(a, n);
    int negB = countNegative(b, n);

    if (negA > negB)
        printf("У масиві a більше від’ємних елементів (%d > %d)\n", negA, negB);
    else if (negB > negA)
        printf("У масиві b більше від’ємних елементів (%d > %d)\n", negB, negA);
    else
        printf("Кількість від’ємних елементів у масивах однакова (%d)\n", negA);

    return 0;
}
