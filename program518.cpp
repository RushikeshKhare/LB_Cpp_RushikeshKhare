
#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int Value);
        ~ArrayX();
        void Accept();
        void Display();
};

ArrayX::ArrayX(int Value)
{
    this->iSize = Value;
    this->Arr = new int[iSize];
}

ArrayX::~ArrayX()
{
    delete []Arr;
}

void ArrayX::Accept()
{

int i = 0;

cout<<"Enter the Elements : \n";
for(i = 0; i < iSize; i++)
{
    cin>>Arr[i];
}
}

void ArrayX::Display()
{
int i = 0;

cout<<"Entered elements are : \n";
for(i = 0; i < iSize; i++)
{
    cout<<Arr[i]<<"\n";
}
}

int main()
{
    int iLength = 0;

    cout<<"Enter the number of Elements : \n";
    cin>>iLength;

    ArrayX *aobj = new ArrayX(iLength);

    aobj->Accept();
    aobj->Display();

    delete aobj;

    return 0;
}