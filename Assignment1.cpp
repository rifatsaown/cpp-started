#include<iostream>

using namespace std;
int main()
{
   float bs,hr,ma,pb,salary;
   cout << "Enter Your Monthly Basic Salary: ";
   cin >>bs;
   if(bs<=15000)
   {
       salary = bs+bs*0.4+bs*0.2+bs*0.1;
   }
   if(bs>15000 && bs<=25000)
   {
       salary = bs+bs*0.5+bs*0.25+bs*0.15;
   }
   if(bs>25000 && bs<=35000)
   {
       salary = bs+bs*0.6+bs*0.3+bs*0.2;
   }
   if(bs>35000)
   {
       salary = bs+bs*0.6+bs*0.35+bs*0.25;
   }
   cout<<"Monthly Salary Will Be: " <<salary;
  return 0;
}