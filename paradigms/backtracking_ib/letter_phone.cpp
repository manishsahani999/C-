void letterHelper(vs & ans, string t, int s, vs inp, int pos) {
    if (t.length() ==  s) {
        ans.pb(t);
        return;
    }
    FOR(i, 0, inp[pos].length()) {
        string tmp = inp[pos];
        t.pb(tmp[i]);
        letterHelper(ans, t, s, inp, pos + 1);
        t.pop_back();
    }
}


vector<string> letterCombinations(string A) {
    vs map {"000", "111", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vs inp, ans; string t;
    for(char c: A) inp.pb(map[c - '0']);

    letterHelper(ans, t, A.length(), inp, 0);
    sort(ALL(ans));
    ans.erase(std::unique(ALL(ans)), ans.end());

    return ans; 
}
