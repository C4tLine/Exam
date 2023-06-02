#include <stdio.h>

float sumFoo(int n) {
    float sum = 0;
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
        sum += (float)fact / (i * i); // Сумма факториала делённого на число итерации
    }
    return sum; // Вовзращаем число
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%.2f\n", sumFoo(n)); // Вывод в типе float
    return 0;
}