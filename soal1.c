#include <stdio.h>
#include <stdlib.h>

void median (int arr[], int n){
    if (n%2==1){
        printf("MEDIAN %d\n", arr[n/2]);}
    else { 
        int a=arr[n/2-1];
        int b=arr[n/2];
        float m=(a+b)/2.0;
        printf("MEDIAN %.2f\n", m);

    }

}

void urut (int arr[], int n){
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr [j]=arr[j+1];
                arr [j+1]=temp;
            }


        }
    }
}

int main (){
    
    int size=0; 
    int capacity=2;
    int *arr=(int*)malloc(capacity*sizeof(int));

    int x;
    while (scanf("%d", &x) && x!=-1) {
        if (size == capacity) {
            capacity *= 2;
            arr = (int*) realloc(arr, capacity * sizeof(int));
        }
        arr[size++] = x;
    }

   printf("SORTED ");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);}
   

    urut (arr, size);
    printf ("COUNT %d", size);
    median (arr, size); 
    free (arr);
    return 0;
}




    







#include <stdio.h>
#include <stdlib.h>

void median (int arr[], int n){
    if (n%2==1){
        printf("MEDIAN %d\n", arr[n/2]);}
    else { 
        int a=arr[n/2-1];
        int b=arr[n/2];
        float m=(a+b)/2.0;
        printf("MEDIAN %.2f\n", m);

    }

}

void urut (int arr[], int n){
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr [j]=arr[j+1];
                arr [j+1]=temp;
            }


        }
    }
}

int main (){
    
    int size=0; 
    int capacity=2;
    int *arr=(int*)malloc(capacity*sizeof(int));

    int x;
    while (scanf("%d", &x) && x!=-1) {
        if (size == capacity) {
            capacity *= 2;
            arr = (int*) realloc(arr, capacity * sizeof(int));
        }
        arr[size++] = x;
    }

   printf("SORTED ");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);}
    printf("\n");

    urut (arr, size);
    printf ("COUNT %d", size);
    median (arr, size); 
    free (arr);
    return 0;
}




    







