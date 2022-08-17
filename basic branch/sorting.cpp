#include <iostream>
#include <cstdlib>

int main()
{
    int array [10];
    srand(time(0));
    for (int i = 0; i < 10; i ++)//Zapolneniye massiva
    {
        array [i] = rand() % 100 + 1;
    }

    for (int i = 0; i < 10; i ++)//Vivod nachalnogo massiva
    {
        std::cout << array [i] << " ";
    }

    int choice = 0;
    do
    {
        std::cout << std::endl << "The programm knows only 2 sorting methods. " << std::endl;
        std::cout << "Please, choose sorting method. " << std::endl;
        std::cout << "To choose sorting method you need to enter one from the numbers: 1 or 2." << std::endl;
        std::cout << "To choose selection sortting method, please, enter number 1." << std::endl;
        std::cout << "To choose cocktail-sortting method, please, enter number 2." << std::endl;
        std::cout << "Your choice is ";
        std::cin >> choice;
        if (choice == 1 || choice == 2)
            break;
    }
    while (choice != 1 || choice != 2);
    switch (choice)
    {
        case 1: //Sortirovka viborom
        {
            for (int i = 0; i < 10; i ++)
            {
                int min = 100;
                int counter;
                for (int j = i + 1; j < 10; j ++)
                {
                    if (min > array [j])
                    {
                        min = array [j];
                        counter = j;
                    }
                }
                if (i < 9 && min < array [i])
                {
                    //std::cout << "array [" << i + 1 << "] = " << array [i] << " <-> " << "array [" << counter + 1 << "] = " << min << std::endl;
                    array [counter] = array [i];
                    array [i] = min;
                }
            }
            break;
        }
        case 2: //Sheyker-sortirovka
        {
            int tmp = 0, low = 9, high = 0;
            while (high < low)
            {
                for (int i = high; i < low; i ++)
                {
                    if (array[i] > array [i+1])
                    {
                        tmp = array [i];
                        array [i] = array [i+1];
                        array [i+1] = tmp;
                    }
                }
                low --;
                for (int i = low; i > high; i --)
                {
                    if (array [i] < array [i-1])
                    {
                        tmp = array [i];
                        array [i] = array [i-1];
                        array [i-1] = tmp;
                    }
                }
                high ++;
            }
            break;
        }
    }
    for (int i = 0; i < 10; i ++)
        std::cout << array [i] << " ";
    std::cout << std::endl;
    return 0;
}