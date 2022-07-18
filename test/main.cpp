#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    /*
    for(int a=1;a<=5;a++){
        for(int j=1;j<=a;j++){
            cout<<j;
        }
        cout<<endl;
    }

    for(int a=1;a<=5;a++){
        for(int j=1;j<=5;j++){
            cout<<j;
        }
        cout<<endl;
    }*/

/*
    for(int a=1;a<=5;a++){
        for(int j=5;j>=a;j--){
            cout<<j;
        }
        cout<<endl;

        for(int j=5;j>=a;j--){
            cout<<j;
        }
        cout<<endl;
    }
    */

    for(int a=1;a<=5;a++){
        for(int k=1;k<=5;k++){
            cout<<setfill('*')<<setw(a);
        }
        cout<<endl;
    }
    return 0;
}
