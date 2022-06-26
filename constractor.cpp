#include<iostream>
using namespace std;
class Student{
    string name;
    int age;
    string address;
public:
    Student();
    Student(string a,int b);
    Student(string a,int b,string c);
    void display();
};
Student::Student(){
    name="unknown";
    age=0;
    address="not available";
}
Student::Student(string a,int b){
    name=a;
    age=b;
    address="not available";
}
Student::Student(string a,int b,string c){
    name=a;
    age=b;
    address=c;
}
void Student::display(){
    cout<<"Name = "<<name<<endl;
    cout<<"Age = "<<age<<endl;
    cout<<"Address = "<<address<<endl<<endl<<endl;
}

int main(){
    Student s[10], st1,st2("Rifat",20);
    st1.display();
    st2.display();
    int age;
    string name , address;

    for (int i=0;i<10;i++){
        cout<<"Name : ";
        cin>>name;
        cout<<"Age : ";
        cin>>age;
        cout<<"Address : ";
        cin>>address;
        cout<<endl;

        s[i]=Student(name,age,address);
        s[i].display();

    }

    return 0;
}