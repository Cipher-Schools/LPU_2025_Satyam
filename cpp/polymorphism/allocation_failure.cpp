#include<iostream>
using namespace std;
// without try catch
void allocate_memory_1(){
    int *p= new int[1000000000];

}

// with try catch
void allocate_memory_2(){
    try{
        int *p= new int[1000000000];
    }
    catch (bad_alloc& e) {
    cout << "Memory allocation failed\n";
}
}

