#include <iostream>
#include<iomanip>

using namespace std;

void printNumber(int *numberptr){
    cout<<*numberptr<<endl;
}

void printLetter(char *letterptr){
    cout<<*letterptr<<endl;
}

int main()
{
    int a=5;
    printNumber(&a);

    string b='A';
    printLetter(&b);


    return 0;
}
