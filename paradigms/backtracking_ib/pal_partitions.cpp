bool palCheck(string s, int l, int r) {
    while(l < r) if(s[l++] != s[r--]) return false;
    return true;
}

void partitionHelper(string A, int s, int n, vs & t, vvs & ans) {
    if (s >= n) return ans.pb(t);

    FOR(i, s, n) {
        if (palCheck(A, s, i)) {
            t.pb(A.substr(s, i - s + 1));
            partitionHelper(A, i + 1, n, t, ans);
            t.pop_back();
        }
    }
}


vector<vector<string> > partition(string A) {
    vvs ans; vs t;
    partitionHelper(A, 0, A.length(), t, ans);
    printVectorWithVector(ans);
    return ans;
}