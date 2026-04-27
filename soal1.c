#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void median(int arr[], int n) {
    printf("MEDIAN ");
    if (n % 2 == 1) {
        printf("%d\n", arr[n/2]);
    } else {
        int a = arr[n/2 - 1];
        int b = arr[n/2];
        float m = (a + b) / 2.0;

        if ((a + b) % 2 == 0)
            printf("%.0f\n", m);
        else
            printf("%.2f\n", m);
    }
}

int main() {
    int *arr;
    int size = 0, capacity = 2;

    arr = (int*) malloc(capacity * sizeof(int));

    int x;
    while (scanf("%d", &x) && x != -1) {
        if (size == capacity) {
            capacity *= 2;
            arr = (int*) realloc(arr, capacity * sizeof(int));
        }
        arr[size++] = x;
    }

    sort(arr, size);

    printf("COUNT %d\n", size);

    printf("SORTED ");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(" ");
    }
    printf("\n");

    median(arr, size);

    free(arr);
    return 0;
}

    








    








