pi pairInArr(vi &, int);
pi pairInArrHashing(vi &, int);

// using sorting
pi pairInArr(vi & A, int sum) {
    pi ans;
    int l = 0; int r = A.size() - 1;
    sort(A.begin(), A.end());
    while (l < r) 
        if (A[l] + A[r] == sum) return ans = mp(A[l], A[r]);
        else if (A[l] + A[r] < sum) l++;
        else r--;
    
    return ans = mp(-1, -1);
}

// using Hasing 
pi pairInArrHashing(vi & A, int sum) {
    pi ans;
    uosi s;
    for (int i = 0; i < A.size() -1; i++) {
        int temp = sum - A[i];
        if (s.find(temp) != s.end())
            return ans = mp(temp, A[i]);
        s.insert(A[i]);
    }

    return ans = mp(-1, -1);
}