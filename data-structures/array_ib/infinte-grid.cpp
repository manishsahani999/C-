#include <bits/stdc++.h>

using namespace std;

#define max(a, b) (a > b) ? a : b

int coverPoints(vector<int> &, vector<int> &);

int main() {
    vector <int> A{0, 1, 1}, B{0, 1, 2};
    cout << coverPoints(A, B);
    return 0;
}


int coverPoints(vector<int> &A, vector<int> &B) {
    int curr_x= 0, curr_y = 0, next_x = 0, next_y = 0, total_steps = 0, temp = 0;
    for (int i = 0; i < A.size() - 1; i++) {
        temp = 0;
        curr_x = A[i]; curr_y = B[i];
        next_x = A[i+1]; next_y = B[i+1];

        // number of steps required 
        temp = max(abs(curr_x - next_x), abs(curr_y -next_y));
        
        // update the total steps
        total_steps += temp;
    }

    return total_steps;
}