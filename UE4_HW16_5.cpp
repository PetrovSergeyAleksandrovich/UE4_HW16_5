#include <iostream>


int main()
{
    const int size = 10;
    int array[size][size] = {};

    // Init array
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            array[i][j] = i+j;
        }
    }

    //Printing array into console
    std::cout << "Your ARRAY:\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Set the array line to sum elements
    int index = 2 % size; 

    //sum elements in the line and print result
    std::cout << "Sum of the ARRAY line " << index << "\n";

    for (int i = 0, sum = 0; i <= size; i++)
    {
        if (i == size) {std::cout << sum << std::endl; break;}
        sum += array[index][i];
    }
}
