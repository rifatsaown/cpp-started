#include<iostream>
using namespace std;
int isTriangle(int sum){
    if(sum==180){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
	int a,b,c ,sum ,n;
	cout<<"enter three angle of a triangle"<<endl;
	cin>>a>>b>>c;
	sum=a+b+c;
	n=isTriangle(sum);
	if(n==1)
	{
	cout<<"the triangle is valid"<<endl;
    }
    else
    {
    cout<<"the triangle is not valid"<<endl;
    }
}
