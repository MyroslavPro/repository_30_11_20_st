#include <iostream>
using namespace std;
#include "lab5d.h"



//beginning
int main()
{
    Home a(2);

    int n=a.getNumber();
    function_put(a.Pet_Array,n);
    areFriends(a.Pet_Array,n);
    ShowMatrix_Name_and_Age(a.Pet_Array,n);
    SortMatrix(a.Pet_Array,n);
    ShowMatrix_Name_and_Age(a.Pet_Array,n);
    return 0;
}