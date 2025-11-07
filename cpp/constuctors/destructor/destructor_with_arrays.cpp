#include<iostream>
using namespace std;

class Student{
    int *last_5_sem_cgpa;
    public:
    // constructor
    Student(int *l5sc){
        last_5_sem_cgpa = new int[5];
        for(int i=0;i<5;i++){
            last_5_sem_cgpa[i]=l5sc[i];
        }
    }

    // destructor
    // no overloading possible
    ~Student(){
        delete [] last_5_sem_cgpa;
        cout<<"destructor called"<<endl;
    }
    void show_cgpa(){
        cout<<"last 5 sem cpga are"<<endl;
        for(int i=0;i<5;i++) cout<<last_5_sem_cgpa[i]<<" ";
        cout<<endl;
    }

};

int main(){
    int arr[5]={9,9,8,9,7};
    Student s(arr);
    s.show_cgpa();
    
    cout<<"function ends"<<endl;
}