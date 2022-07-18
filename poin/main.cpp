#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    int a=5;
    int *ptr=&a;
    cout << *ptr << endl;
    *ptr=10;
    cout<<*ptr;
    return 0;
}
