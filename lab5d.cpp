#include <iostream>
using namespace std;
#include "lab5d.h"



//beginning
int main()
{
    Home thePets(2);

    int n=thePets.getNumber();
    function_put(thePets.petsArray,n);
    areFriends(thePets.petsArray,n);
    showMatrixNameAndAge(thePets.petsArray,n);
    sortMatrixFromSmallToBig(thePets.petsArray,n);
    showMatrixNameAndAge(thePets.petsArray,n);
    return 0;
}