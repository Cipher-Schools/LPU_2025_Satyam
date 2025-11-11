#include <iostream>
#include <stack>
using namespace std;

#define N 4

bool knows(int M[N][N], int a, int b) {
    return M[a][b] == 1;
}

int findCelebrity(int M[N][N]) {
    stack<int> s;
    for (int i = 0; i < N; i++)
        s.push(i);

    while (s.size() > 1) {
        int A = s.top(); s.pop();
        int B = s.top(); s.pop();

        if (knows(M, A, B))
            s.push(B);
        else
            s.push(A);
    }

    int cand = s.top();

    // Verify candidate
    for (int i = 0; i < N; i++) {
        if (i != cand && (knows(M, cand, i) || !knows(M, i, cand)))
            return -1;
    }
    return cand;
}

int main() {
    int M[N][N] = {{0, 1, 1, 0},
                   {0, 0, 1, 0},
                   {0, 0, 0, 0},
                   {0, 1, 1, 0}};

    int id = findCelebrity(M);
    (id == -1) ? cout << "No Celebrity" : cout << "Celebrity is " << id;
}
