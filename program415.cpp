#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(int no)
        {
            iSize = no;
            Arr = new T [iSize];
        }

        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept()
        {
            int i = 0;

            cout<<"Enter the elements : \n";

            for(i = 0; i< iSize; i++)
            {
                cin>>Arr[i];
            }
        }
       
        void Display()
        {
            int i = 0;

            cout<<"Elements of the array are : \n";

            for(i = 0; i< iSize; i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }

        T Addition()
        {
            int i = 0;
            T Sum = 0;

            for(i = 0 ; i < iSize; i++)
            {
                Sum = Sum + Arr[i];
            }
            return Sum;
        }
};

int main()
{
    ArrayX <float>aobj(5);

    aobj.Accept();
    aobj.Display();

    cout<<"Addition is : "<<aobj.Addition()<<"\n";
    
    return 0;
}