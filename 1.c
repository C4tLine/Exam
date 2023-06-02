#include <stdio.h>

struct Coord {
    int x;
    int y;
};

int canGet(struct Coord start, struct Coord finish) {
    if (start.x == finish.x || start.y == finish.y) { // Совпадение с осями x или y
        return 1; // Может
    } else {
        return 0; // Не может
    }
}

int main() {
    struct Coord start, finish;
    scanf("%d %d", &start.x, &start.y);
    scanf("%d %d", &finish.x, &finish.y);
    printf("%d", canGet(start, finish)); // Вывод
    return 0;
}