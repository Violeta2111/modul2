#include <stdio.h>
#include <math.h>

// Структура для точки
typedef struct {
    double x, y;
} Point;

// Ввід координат трикутника
void inputTriangle(Point t[3], int number) {
    printf("Введіть координати трикутника %d (x y):\n", number);
    for (int i = 0; i < 3; i++) {
        printf("Вершина %d: ", i + 1);
        scanf("%lf %lf", &t[i].x, &t[i].y);
    }
}

// Вивід трикутника
void printTriangle(Point t[3], int number) {
    printf("Трикутник %d: ", number);
    for (int i = 0; i < 3; i++) {
        printf("(%.1lf, %.1lf) ", t[i].x, t[i].y);
    }
    printf("\n");
}

// Довжина сторони між двома точками
double sideLength(Point a, Point b) {
    return sqrt((b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y));
}

// Обчислення площі трикутника за формулою Герона
double triangleArea(Point t[3]) {
    double a = sideLength(t[0], t[1]);
    double b = sideLength(t[1], t[2]);
    double c = sideLength(t[2], t[0]);
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

// Основна програма
int main() {
    Point tri1[3], tri2[3];

    inputTriangle(tri1, 1);
    inputTriangle(tri2, 2);

    printTriangle(tri1, 1);
    printTriangle(tri2, 2);

    double area1 = triangleArea(tri1);
    double area2 = triangleArea(tri2);

    printf("Площа трикутника 1: %.1lf\n", area1);
    printf("Площа трикутника 2: %.1lf\n", area2);

    if (area1 > area2) {
        printf("Трикутник 1 має більшу площу.\n");
    } else if (area2 > area1) {
        printf("Трикутник 2 має більшу площу.\n");
    } else {
        printf("Площі трикутників рівні.\n");
    }

    return 0;
}
