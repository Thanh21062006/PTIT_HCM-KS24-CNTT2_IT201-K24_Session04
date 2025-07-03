#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

    printf("Moi ban nhap so luong phan tu cho mang: ");
    scanf("%d", &n);

    int* arr = (int*) calloc(n, sizeof(int));

    if ( arr == NULL) {
        printf("Bo nho khong duoc cap phat!");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int valueSearch;

    printf("Moi ban nhap gia tri can tim kiem: ");
    scanf("%d", &valueSearch);

    for (int i = 0; i < n; i++) {
        if (arr[i] == valueSearch) {
            printf("chi so dau tien cua gia tri can tim la: %d", i);
            return 0;
        }
    }

    printf("Khong tim thay phan tu!");
    free(arr);
    return 0;
}