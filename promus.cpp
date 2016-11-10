//Program to Determining a Prime Number or Not
#include <iostream>
using namespace std;

int main()
{
    int number,i, value;
    cout<<"Enter Number = ";
    cin>>number;
    value=0;
    for (i=1;i<=number;i++){
        if (number%i==0) //Condition to find number who while it modulo with i the value is 0 (zero)
        value = value +i;
        }
        //Conditions to determining prime number or not
        if(value==(number+1)){
            cout<<"PRIMES";
        }
        else{
            cout<<"NOT PRIMES";
        }
    return 0;
}
