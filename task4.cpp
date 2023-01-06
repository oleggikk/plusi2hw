#include <iostream>
#include "main.h"

void task4Func(float *array,int sizeOfArray) {

    int count = 0;
    for (int j = 0; j < sizeOfArray - 1; j++){     //default bubble sort for the array

        for (int i = 0; i < sizeOfArray - 1; i++) {

            if (array[i] < array[i + 1]) {
                count++;
                std::swap(array[i], array[i + 1]);
            }

        }
    }
    std::cout << "The number of permutations: " << count << std:: endl;
}


void task4() {
    int sizeOfArray = 12;

    float* array = new float[sizeOfArray];

    for (int i = 0; i < sizeOfArray; i++)  // entering all the elements of the initial array
    {
        std:: cin >> array[i];
    }

    task4Func(array, sizeOfArray);

    for (int i = 0; i < sizeOfArray; i++)  //printing out all the elements of the sorted array
    {
        std:: cout << array[i] << " ";
    }
}