#include <iostream>
using namespace std;

class Car{
    public:
    string *brand_name;
    
    // constructor
    Car(string b_n){
        cout<<"running constructor"<<endl;
        brand_name= new string;
        *brand_name=b_n;
    }
    void display_brand_name(){
        cout<<"brand name is "<<*brand_name<<endl;
    }

    // destructor
    ~Car(){
        cout<<"running destructor"<<endl;
        delete brand_name;
        cout<<"freed brand name"<<endl;
    }

};
int main(){
    Car c("mustang");
    c.display_brand_name();
    return 0;
    
}