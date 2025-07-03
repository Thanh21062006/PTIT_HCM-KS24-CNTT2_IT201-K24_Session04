#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, value;

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

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i +1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    printf("Mang da sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n moi ban nhap gia tri can tim: ");
    scanf ("%d", &value);

    int start = 0, end = n-1;
    while (start <= end) {
        int mid = start + (end-start) / 2;

        if (arr[mid] == value) {
            printf("Gia tri ton tai");
            exit(0);
        } else if (arr[mid] < value) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    printf ("Gia tri khong ton tai");
    free(arr);
    return 0;
}