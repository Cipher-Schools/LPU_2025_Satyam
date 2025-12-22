#include<iostream>
#include<vector>
using namespace std;

int main(){
    int V=5;
    vector<vector<int>> adj(5);
    adj.push_back({1,2});
    adj.push_back({0,4});
    adj.push_back({0,3});
    adj.push_back({2,4});
    adj.push_back({1,3});
}