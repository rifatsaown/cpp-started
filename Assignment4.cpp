#include<iostream>
using namespace std;
int main(){
    struct {
        int feet;
        float inch;
        int sumFeet;
        float sumInch;
    } first, second, sum;

    cout<<"Enter 1st distance: \n";
    cout<<"Enter feet: ";
    cin>>first.feet;
    cout<<"Enter inch: ";
    cin>>first.inch;

    cout<<"\nEnter 2nd distance: \n";
    cout<<"Enter feet: ";
    cin>>second.feet;
    cout<<"Enter inch: ";
    cin>>second.inch;

    sum.sumFeet= first.feet + second.feet;
    sum.sumInch=first.inch + second.inch;
    cout<<"\n";

    cout<<"Sum of distance = "<<sum.sumFeet <<"' -"<<sum.sumInch <<'"'<<endl;
}