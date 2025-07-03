#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, value;

    printf ("Moi ban nhap so luong phan tu cho mang: ");
    scanf("%d", &n);

    int* arr = (int*) calloc(n, sizeof(int));
    if (arr == NULL) {
        printf ("Bo nho khong duoc cap phat!");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf ("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Moi ban nhap gia tri can tim kiem trong mang: ");
    scanf("%d", &value);

    int indexValue = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            indexValue = i;
        }
    }

    if (indexValue != -1) {
        printf("%d", indexValue);
    } else {
        printf("Khong tim thay phan tu");
    }
    free(arr);
    return 0;
}