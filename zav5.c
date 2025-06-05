#include <stdio.h>

// Введення масиву
void inputArray(double arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Введіть елемент #%d: ", i + 1);
        scanf("%lf", &arr[i]);
    }
}

// Виведення масиву
void printArray(double arr[], int n) {
    printf("Масив: ");
    for (int i = 0; i < n; i++) {
        printf("%.2lf ", arr[i]);
    }
    printf("\n");
}

// Обчислення суми
double calculateSum(double arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

// Перевірка і запуск
int main() {
    int n;

    printf("Введіть кількість елементів масиву (n > 0): ");
    while (scanf("%d", &n) != 1 || n <= 0) {
        printf("Помилка! Введіть натуральне число n > 0: ");
        while (getchar() != '\n');
    }

    double a[n];
    inputArray(a, n);
    printArray(a, n);
    double sum = calculateSum(a, n);
    printf("Сума елементів масиву: %.2lf\n", sum);

    return 0;
}
