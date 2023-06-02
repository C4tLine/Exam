#include <stdio.h>

void changeRegister(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32; // Обычные буквы
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32; // Заглавные
        }
        i++;
    }
}

int main() {
    // Предположим, на вход мы получаем строчку в 255 символов
    char str[255];
    fgets(str, 255, stdin); // Считываем
    changeRegister(str); // Передаём строку в функцию
    printf("%s", str);
    return 0;
}