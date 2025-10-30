#include <iostream>
using namespace std;


int main(){
    string name = "abcdefgh";
    // cout<<name.find("def");
    string substring= "xyz";
    if(name.find(substring)==string::npos) cout<<"not present"<<endl;
    else cout<<"present";

    return 0;
    
}