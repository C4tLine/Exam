#include <stdio.h>
#include <stdlib.h>

struct University {
    char* name;
    int numberOfStudents;
    int rating;
};

struct University* biggestUniversity(struct University data[], int n) {
    struct University* max = &data[0];
    for (int i = 1; i < n; i++) {
        if (data[i].numberOfStudents > max->numberOfStudents) {
            max = &data[i];
        }
    }
    return max;
}