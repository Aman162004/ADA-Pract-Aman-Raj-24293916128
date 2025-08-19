#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateRandomNumber(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        arr[i]=rand()%10000;
    }
}

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;   
        }
    }
    return -1; 
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    if (n<=5000)
    {
        printf("Enter the number greater than 5000");
    }

    int* arr = (int*)malloc(n*sizeof(int));
    if (arr==NULL)
    {
        printf("Memory not alloted\n");
        return -1;
    }
    srand(time(NULL));
    generateRandomNumber(arr,n);

    int key = arr[rand()%n];
    clock_t start = clock();
    for (int i = 0; i < 1000; i++)
    {
        linearSearch(arr,n,key);
    }
    clock_t end = clock();

    double time_taken = ((double)(end - start))/CLOCKS_PER_SEC/1000.0;
    printf("Time taken for linear search in %d elements: %f seconds\n", n, time_taken);

    free(arr);
    return 0;
}
