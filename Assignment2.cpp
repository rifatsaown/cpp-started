#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i, num,oddSum=0,evenSum=0;
    cout<<"Enter the Number : ";
    cin>>num;
    for(i=1; i<=num; i++){
        if(i%2==0)
            evenSum=evenSum+i;
        else
            oddSum=oddSum+i;
    }
    cout<<"Sum of all odd numbers are : "<< oddSum;
    cout<<"\nSum of all even numbers are : "<<evenSum;
    getch();
}