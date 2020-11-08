#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10
struct student {
    char id[9];
    char name[40];
    int marking;
} st[SIZE];

void swap(student* A, student* B) {
    student buffer = *A;
    *A = *B;
    *B = buffer;
}
int main() {
    int i, i_max, count = 1;
    float average = 0, sum = 0;
    printf(" * Student Data *\n");
    for (i = 0; i < SIZE; i++) {
        printf("Enter data (ID Name Score): ");
        scanf("%s %s %d", st[i].id, st[i].name, &st[i].marking);
    }
    printf("Sorted by score : \n");
    for (int i = 0; i < SIZE*SIZE; i++) {
        for (int j = 0; j < SIZE-1; j++) {
            if (st[j].marking < st[j + 1].marking) {
                swap(&st[j], &st[j + 1]);
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("Id : %s, Name : %s , Score : %d\n", st[i].id, st[i].name, st[i].marking);
    }
    return 0;
}