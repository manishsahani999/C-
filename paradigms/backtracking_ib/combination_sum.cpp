void combineHelper(vi & A, int B, int sum, int s, vi & t, vvi & ans) {
    if (sum > B) {return;}
    if (sum == B) { nl; return ans.pb(t);}

    FOR(i, s, A.size()) {
        t.pb(A[i]);
        if (sum + A[i] <= B) combineHelper(A, B, sum + A[i], i, t, ans);
        t.pop_back();
    }
}

vector<vector<int> > combinationSum(vector<int> &A, int B) {
    vi t; vvi ans;
    sort(A.begin(), A.end());

    vector<int>::iterator ip;
    ip = std::unique(A.begin(), A.end());
    A.resize(std::distance(A.begin(), ip));

    combineHelper(A, B, 0, 0, t, ans);

    printVectorWithVector(ans);
    return ans;
}