#include <iostream>
using namespace std;

class Student{
    int marks;
    int age;

    public:
    void getData(){
        cout<<"enter marks and age"<<endl;
        cin>>marks>>age;
    }
    void printData(){
        cout<<"marks "<<marks<<" age "<<age<<endl;
    }
};
int main(){
    Student s[5];
    
    for(int i=0;i<5;i++) s[i].getData();
    for(int i=0;i<5;i++) s[i].printData();
    
    return 0;
    
}