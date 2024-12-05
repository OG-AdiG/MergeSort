#include <iostream>
#include "MergeSort.h"

void PrintVector(const std::vector<int>& tab) { //<-- Funkcja wypisuj¹ca vektor

    for (int i = 0; i < tab.size(); ++i) {

        std::cout << tab[i] << " ";

    }

    std::cout << std::endl;

}

int main()

{

    std::vector<int> test1 = { 39, 44, 16, 89, 6, 12, 56 };
    std::vector<int> test2 = { 19, 87, 32, 42, 7 };


    std::cout << "Test 1 - Przed sortowaniem: ";
    PrintVector(test1);
    MergeSort::Sort(test1);
    std::cout << "Test 1 - Po sortowaniu: ";
    PrintVector(test1);
    std::cout << "Test 2 - Przed sortowaniem: ";
    PrintVector(test2);
    MergeSort::Sort(test2);
    std::cout << "Test 2 - Po sortowaniu: ";
    PrintVector(test2);

}