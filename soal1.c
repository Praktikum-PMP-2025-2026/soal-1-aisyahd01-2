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
    int *arr=malloc(capacity * sizeof(int));
    int size = 0; int input; int capacity=2;


   scanf(" %d", &input);
    while (input!=-1){
        arr = realloc(arr, capacity * sizeof(int));
        arr[size-1] = input;
        
        scanf(" %d", &input);
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

    








    








