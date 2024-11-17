#include <stdio.h>
#include <stdlib.h>

int* array(int size) {
    int *arrray_1 = (int *)malloc(size * sizeof(int));
    if (arrray_1 == NULL) {
        printf("Failed in memory allocation\n");
        return NULL;
    }
    return arrray_1;
}

void fillwithones(int *arrray_1, int size) {
    for (int i = 0; i < size; i++) {
        arrray_1[i] = 1;
    }
}

void printing(int *arrray_1, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arrray_1[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter array size:");
    scanf("%d", &size);

    int *arrray_1 = array(size);
    if (arrray_1 != NULL) {
        fillwithones(arrray_1, size);
        printing(arrray_1, size);
        free(arrray_1);
    }

    return 0;
}
