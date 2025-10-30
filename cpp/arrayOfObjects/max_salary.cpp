#include <iostream>
using namespace std;

class Employee{
    // salary in LPA
    int salary;
    int empId;
    public:
    // setter
    void setData(){
        cout<<"enter empId and salary"<<endl;
        cin>>empId>>salary;
    }
    // getter
    int getSalary(){
        return salary;
    }
    int getEmpId(){
        return empId;
    }
    
};
int main(){
    Employee e[5];
    
    for(int i=0;i<5;i++) e[i].setData();

    Employee empl_with_max_salary=e[0];
    for(int i=1;i<5;i++){
        if(e[i].getSalary()>empl_with_max_salary.getSalary())
        empl_with_max_salary= e[i];
    }

    cout<<"emp id is "<<empl_with_max_salary.getEmpId()<<endl;
    cout<<"salary is "<<empl_with_max_salary.getSalary()<<endl;
    
    return 0;
    
}