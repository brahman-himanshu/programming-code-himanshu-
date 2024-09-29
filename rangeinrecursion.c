#include <stdio.h>
void printEvenNumbers(int start, int end) {
    if (start > end)
        return;
    if (start % 2 == 0)
        printf("%d ", start);
    printEvenNumbers(start + 1, end);
}
void printOddNumbers(int start, int end) {
    if (start > end)
        return;
    if (start % 2 != 0)
        printf("%d ", start);
    printOddNumbers(start + 1, end);
}

int main() {
    int range;
    printf("Input the range to print starting from 1: ");
    scanf("%d", &range);
    printf("All even numbers from 1 to %d are: ", range);
    printEvenNumbers(1, range);
    printf("\n");
    printf("All odd numbers from 1 to %d are: ", range);
    printOddNumbers(1, range);
    printf("\n");

    return 0;
}