#include <iostream>
#include<iomanip>
using namespace std;
class Circle{
    private:
    float radius;
    const float pi=3.14;
    public:
    // setter
    void setRadius(float radius){
        this->radius=radius;
    }
    void calculate(){
        float perimeter= 2*pi*this->radius;
        float area= pi*this->radius*this->radius;
        cout<<fixed<<setprecision(2);
        cout<<"Area:"<<area<<endl;
        cout<<"Perimeter:"<<perimeter<<endl;
    }
};

int main() {
    Circle c;
    c.setRadius(9.235);
    c.calculate();
    return 0;
}

