void subsetHelper(int n, vi & A, vi & used, vvi & ans) {
    ans.pb(used);

    FOR(i, n, A.size()) {
        
        used.pb(A[i]);
        
        subsetHelper(i + 1 , A, used, ans);
        used.pop_back();
    }
}

vector<vector<int>> subsets(vector<int> &A) {
    vi used; vvi ans;
    subsetHelper(0, A, used, ans);
    printVectorWithVector(ans);
    return ans;    
}

// vector<vector<int>> subsets(vector<int> &A) {
//     int n = A.size(), mask, j;
//     vvi ans(1 << n);
//     for (int i = 0; i < (1 << n); i++) {
//         mask = i; j = 0;
//         while(j < n) {
//             if (mask & (1 << j)) ans[i].pb(A[j]);
//             j++;
//         }
//     }

//     sort(ans.begin() + 1, ans.end(), sortcol);

//     printVectorWithVector(ans);
//     return ans;
// }
