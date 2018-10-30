//Program to Determining a Prime Number or Not
#include <iostream>
using namespace std;

int main()
{
    int number,i,flag=1;
    cout<<"Enter Number = ";
    cin>>number;
    for (i=2;i<number/2;i++)
    {
        if (number%i==0) 
        {
            flag=0;
        }
    }
    if(flag)
        cout<<"PRIME";
    else
        cout<<"NOT PRIME";
        
    return 0;
}
