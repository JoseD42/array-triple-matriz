#include<iostream>

int main()
{
    int*** matrix3Pt
    {
        new int**[3]
        {
            new int*[3]
            {
                new int[3]{1, 2, 3},//0
                new int[3]{4, 5, 6},//1
                new int[3]{7, 8, 9}//2
            },
            new int*[3]
            {
                new int[3]{10, 11, 12},//0
                new int[3]{13, 14, 15},//1
                new int[3]{16, 17, 18}//2
            },
                new int*[3]
            {
                new int[3]{19, 20, 21},//0
                new int[3]{22, 23, 24},//1
                new int[3]{25, 26, 27}//2
            }
        }
    };

    for(int i{}; i < 3; i++)
    {
        for(int j{}; j < 3; j++)
        {
            for(int k{}; k < 3; k++)
            {
                std::cout << *(*(*(matrix3Pt+i)+j))+k << "\t";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    std::cin.get();

    return 0;
}