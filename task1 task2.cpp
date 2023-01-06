#include <iostream>
#include "main.h"

// TASK 1
template <typename Type>
void swap(Type *number1, Type *number2)   // function for swapping values of two variables
{
    Type temporary_value = * number1; // creating a temporary variable to store value of the first variable
    *number1 = *number2;   // swapping values
    *number2 = temporary_value;  // assigning the value of the first variable to the second one
}


void task2()
{
    // TASK 2
    int sizeOfArray;
    std::cout<<"Enter the length of your array: "<<std::endl;
    std::cin>>sizeOfArray;

    int *arr = new int[sizeOfArray];  //allocating memory for an array
    for (int i = 0; i < sizeOfArray; i++)
    {
        arr[i] = rand()%100;   //filling an empty array with random integers
    }

    // printing out the initial array:
    std::cout<<"The initial array of integers is: "<<std::endl;
    for (int i = 0; i < sizeOfArray; i++)
    {
        std::cout<<arr[i]<<" ";
    }

    std::cout<<std::endl;

    int *pa = &arr[0];  // pointer to the first element in array
    int *pla = &arr[sizeOfArray - 1];  // pointer to the las element in array

    int temporary_value = *pa;
    *pa = *pla;
    *pla = temporary_value;

    // printing out the resulted array:
    std::cout<<"The resulted array of integers is: "<<std::endl;
    for (int i = 0; i < sizeOfArray; i++)
    {
        std::cout<<arr[i]<<" ";
    }
}

