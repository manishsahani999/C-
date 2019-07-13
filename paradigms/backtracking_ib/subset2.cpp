void subsetsHelper(vi & A, int n, vi & t, vvi & ans) {
    ans.pb(t);

    FOR(i, n, A.size()) {
        t.pb(A[i]);
        subsetsHelper(A, i + 1, t, ans);
        t.pop_back();
    }
}

vector<vector<int> > subsetsWithDup(vector<int> &A) {
    vi t; vvi ans;
    sort(ALL(A));

    subsetsHelper(A, 0, t, ans);

    sort(ALL(ans));
    ans.erase(std::unique(ALL(ans)), ans.end());

    return ans;
}
