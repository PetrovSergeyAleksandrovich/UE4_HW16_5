#include <iostream>


int main()
{
    const int size = 2;
    int array[size][size] = { {1,2}, {4,5} };

    //std::cout << array[0];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

     

}
