#include <stdio.h>
#include <string.h>

#define MAX 5

typedef struct {
    int id;
    char name[50];
    int age;
} Student;

int main(void) {
    Student students[MAX];

    printf ("Nhap thong tin cho %d sinh vien:\n", MAX);

    for (int i = 0; i < MAX; i++) {
        printf("Sinh vien %d:\n", i+1);

        students[i].id = i+1;

        printf("Name: ");
        fgets(students[i].name,50,stdin);
        students[i].name[strcspn(students[i].name, "\n")] = "\0";

        printf("Age: ");
        scanf("%d", &students[i].age);
        getchar();
    }

    int checkId;
    printf("Moi ban nhap id sinh vien can tim: ");
    scanf("%d", &checkId);

    if (checkId > 0 && checkId <= MAX) {
        printf ("{id: %d, name: %s, age: %d}", students[checkId-1].id, students[checkId-1].name, students[checkId-1].age);
    } else {
        printf("Sinh vien khong ton tai");
    }
    return 0;
}