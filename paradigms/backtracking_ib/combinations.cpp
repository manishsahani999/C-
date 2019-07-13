
void combineHelper(int A, int B, int n, vi & t, vvi & ans){
    if (t.size() == B) {
        ans.pb(t);
        return;
    }

    FOR(i, n, A + 1) {
        t.pb(i);
        combineHelper(A, B, i + 1, t, ans);
        t.pop_back();
    }
}

vector<vector<int> > combine(int A, int B) {
    vi t; vvi ans;
    combineHelper(A, B, 1, t, ans);
    printVectorWithVector(ans);
    return ans;
}