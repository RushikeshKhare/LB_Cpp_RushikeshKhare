#include<iostream>
using namespace std;


int Addition(int iNo)
{
    int i = 1;
    int iSum = 0;

    while(i <= iNo)
    {
        iSum = iSum + i;
        i++; 
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : "<<endl;
    cin>>iValue;

    iRet = Addition(iValue);

    cout<<"Addition is "<<iRet<<endl;

    return 0;
}