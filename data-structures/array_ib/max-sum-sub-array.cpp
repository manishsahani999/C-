/*
| Kadane's algorithm
*/

int maxSubArray(const vector<int> &);

int maxSubArray(const vector<int> &A) {
    lli sum = 0, ans = INT_MIN;

    for (int i = 0; i < A.size(); i++) {
        sum += A[i];
        ans = max(ans, sum);
        if (sum < 0) sum = 0;
    }
        
    return ans;
}   