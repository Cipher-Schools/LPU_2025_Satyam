#include <iostream>
using namespace std;

void toh(int n, char source_rod, char target_rod, char helper_rod){
    if(n==0) return;
    toh(n-1, source_rod, helper_rod, target_rod);
    cout<<"move disk "<<n<<" from "<<source_rod<<" to "<<target_rod<<endl;
    toh(n-1, helper_rod, target_rod, source_rod);
}

int main(){
    toh(3, 'A', 'C','B');
}