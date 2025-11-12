#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextGreater(vector<int>& arr) {
    int n = arr.size();
    vector<int> res(n);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= arr[i])
            st.pop();
        if (!st.empty()) res[i] = st.top();
        else res[i]=-1;
        st.push(arr[i]);
    }
    return res;
}

int main() {
    vector<int> arr = {4, 5, 2, 10, 8};
    vector<int> ans = nextGreater(arr);

    for (int i = 0; i < ans.size(); i++)
        cout<<ans[i]<<" ";
        cout<<endl;
}
