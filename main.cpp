#include <iostream>
#include "main.h"

void printArray(int arr[], int size_of_array)
{
    for (int i = 0; i < size_of_array; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void printMatrix(int **matrix, int rows, int strings)
{
    for (int i = 0; i < strings; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            std::cout << matrix[j][i] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    
    task2();
    task3();
    task4();
    task5();
    task6();
    task7();
    task8();
    task9();
    task10();
    task11();
    task12();
    task13();
    task14();
    task15();

    return 0;
}
