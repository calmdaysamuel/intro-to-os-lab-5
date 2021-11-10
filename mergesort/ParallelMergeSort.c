#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define SIZE 100

int array[SIZE];

void fillArrayWithRandomNumbers(int arr[SIZE]) {
    for(int i = 0; i<SIZE; i++) array[i] = rand()%100;
}

void printArray(int arr[SIZE]) {
    for(int i = 0; i<SIZE; i++) printf("%5d", arr[i]);
    printf("\n");
}

typedef struct StartEndIndexes {
    int start;
    int end;
} StartEndIndexes;

// Runs mergesort on the array segment described in the
// argument. Spawns two threads to mergesort each half
// of the array segment, and then merges the results.
void merge(void * target, void * sub) {
  
}

void* mergeSort(void* args) {
    StartEndIndexes * index = args;
  
    pthread_t t1;
    pthread_t t2;
  
    int middle = (sei->end - sei->start) / 2;
  
    StartEndIndexes lowerHalf;
    StartEndIndexes upperHalf;
  
    pthread_create(&t1, NULL, mergeSort, &lowerHalf);
    pthread_create(&t2, NULL, mergeSort, &upperHalf);
    return NULL;
}


int main() {
    srand(time(0));
    StartEndIndexes sei;
    sei.start = 0;
    sei.end = SIZE - 1;
    // 1. Fill array with random numbers.
    fillArrayWithRandomNumbers(array);
    
    // 2. Print the array.
    printf("Unsorted array: ");
    printArray(array);
    
    mergeSort(sei);
  
    // 3. Create a 2 threads for merge sort.
    
    // 4. Wait for mergesort to finish.
    
    // 5. Print the sorted array.
    printf("Sorted array:   ");
    printArray(array);
}
