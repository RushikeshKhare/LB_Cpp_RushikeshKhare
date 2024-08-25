#include<iostream>
#include<string.h>
using namespace std;

bool strcmpX(char *first, char *second)
{
    bool bFlag = false;

    while((*first != '\0') && (*second != '\0'))
    {
        if(*first != *second)
        {
            break;
        }
        first++;
        second++;
    }
}

int main()
{
    char Arr[30];
    char Brr[30];
    bool bRet = false;

    cout<<"Enter the first string :"<<endl;
    cin.getline(Arr, 30);

    cout<<"Enter the second string :"<<endl;
    cin.getline(Brr, 30);

    bRet = strcmpX(Arr, Brr);

    if(bRet == true)
    {
        cout<<"String are identical"<<endl;
    }
    else
    {
        cout<<"Strings are different"<<endl;
    }

    return 0;
}