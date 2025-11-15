#include <iostream>
#include <stack>
#include <vector>
using namespace std;
#define n 4;

bool knows(vector<vector<int>> M, int a, int b){
    return M[a][b]==1;
}

int find_celebrity(vector<vector<int>>M){
    stack<int> st;
    for(int i=0;i<4;i++) st.push(i);

    while(st.size()>1){
        int top1;
        int top2;
        top1=st.top();
        st.pop();
        top2=st.top();
        st.pop();
         if(knows(M, top1, top2)) st.push(top2);
         else st.push(top1);
    }
    int cand=st.top();
    for(int i=0;i<4;i++){
        if(i!=cand && (knows(M, cand, i) || !knows(M, i, cand)))
        return -1;
        
    }
    return cand;
}


int main() {

    vector<vector<int>> M = {{1, 1, 1, 0},
                   {0, 1, 1, 0},
                   {0, 0, 1, 0},
                   {0, 1, 1, 1}};

    cout<<"celebrity is "<<find_celebrity(M);
    return 0;

    
}
