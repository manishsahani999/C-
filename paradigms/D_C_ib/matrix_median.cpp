int upperBound(vi & A, int num) {
    int l = 0, r = A.size(), mid; 

    while(l < r) {
        mid = (l + r)/2;
        if (A[mid] == num) return mid;
        else if(A[mid] < num) { l = mid + 1; }
        else {
            r = mid;
        }
    }
}

int findMedian(vector<vector<int> > &A) {
    int n = A.size(), m = A[0].size(), cr = 0, nr = 1, cl = 0, temp, prev,f1, f2;
    // printVectorWithVector(A); nl;
    prev = 0; 

    FOR(i, 0, n*m/2 + 1) {
        // extract the next biggest number
        temp = 0; 
        FOR(j, 0, n) {
            int k = m-1; 
            while(A[j][k] == 0 && k > 0) k--;
            if (temp < A[j][k]) {
                f1 = j; f2 = k;
                temp = A[j][k];
            }
        }

        A[f1][f2] = 0;
        prev = temp;
    }

    return prev;
}