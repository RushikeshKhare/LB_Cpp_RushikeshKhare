#include<iostream>
using namespace std;

// Approach 3 : Using recurssion

void Display()
{
    static int i = 1;

    if(i <= 4)
    {
        cout<<"*"<<endl;
        i++;
        Display();      // recurssive call
    }
}

int main()
{
    Display();

    return 0;
}