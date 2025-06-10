#include <stdio.h>
#include <math.h>

// Функція для введення масиву
void inputArray(double arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Введіть a[%d]: ", i + 1);
        scanf("%lf", &arr[i]);
    }
}

// Функція для виведення масиву
void printArray(double arr[], int n) {
    printf("Масив: ");
    for (int i = 0; i < n; i++) {
        printf("%.1lf ", arr[i]);
    }
    printf("\n");
}

// Обчислення суми модулів
double sumOfAbs(double arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += fabs(arr[i]);
    }
    return sum;
}

// Основна програма
int main() {
    int n;

    printf("Введіть кількість елементів масиву (n > 0): ");
    while (scanf("%d", &n) != 1 || n <= 0) {
        printf("Помилка! Введіть натуральне число: ");
        while (getchar() != '\n');
    }

    double a[n];
    inputArray(a, n);
    printArray(a, n);
    double result = sumOfAbs(a, n);
    printf("Сума модулів елементів: %.1lf\n", result);

    return 0;
}
