#include <stdio.h>

void ShowVector(int *vector, int size){
    int i;
     for(i = 0; i < 5; i++){
        printf("%d\t", vector[i]);
    }
    printf("\n");
}

void InsertionSort(int *vector, int size){
    int j, key, i;
    for(j = 1; j <5; j++){
        key = vector[j];
        i = j - 1;
        while (i >= 0 && vector[i] > key)
        {
            vector[i + 1] = vector[i];
            i = i - 1;
        }
        vector[i + 1] = key;
    }
}


int main(){
    int vector[] = {5,4,3,1,2}, j, i, key, l;

    int sizeOfVector = sizeof(vector)/sizeof(vector[i]);
    
    printf("---------------UNSORTED ARRAY---------------\n");
    ShowVector(vector, sizeOfVector);

    InsertionSort(vector, sizeOfVector);

    printf("---------------SORTED VECTOR----------------\n");
    ShowVector(vector, sizeOfVector);
    return 0;
}