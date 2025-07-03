#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

    printf("Moi ban nhap so luong phan tu cho mang: ");
    scanf("%d", &n);

    int* arr = (int*) calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Bo nho khong duoc cap phat!");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int min = arr[0], minIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
    }

    printf("%d", minIndex);
    return 0;
}