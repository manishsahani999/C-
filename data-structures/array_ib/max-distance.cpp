bool comp (pi a, pi b) {
    return a.fi < b.fi;
}

int maxDistance(const vi & A) {
    int size = A.size(), ans = 0, mi = INT_MAX, ma = 0;

    vpi x(size);

    FOR (i, 0, size) x[i] = mp(A[i], i);

    sort(x.begin(), x.end(), comp);

    ma = x[size-1].se;
    for(int i = size - 2; i >= 0; i--){
        ans = max(ans, ma - x[i].se);
        ma = max(ma, x[i].se);
    }

    return ans;
}