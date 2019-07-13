void combineHelper(vi & A, int B, int sum, int s, vi & t, vvi & ans){
    if (sum > B) return;
    if (sum == B) return ans.pb(t);

    FOR(i, s, A.size()) {
        t.pb(A[i]);
        if (sum + A[i] <= B) combineHelper(A, B, sum + A[i], i + 1, t, ans);
        t.pop_back();
    }   
}


vector<vector<int> > combinationSum(vector<int> &A, int B) {
    vi t; vvi ans;
    sort(A.begin(), A.end());
    combineHelper(A, B, 0, 0, t, ans);

    sort(ans.begin(), ans.end());
    ans.erase(std::unique(ans.begin(), ans.end()), ans.end());

    printVectorWithVector(ans);
    return ans;
}
