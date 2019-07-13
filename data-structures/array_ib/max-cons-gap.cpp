int maxConsGap(const vi & A) {
    int size = A.size(), ans = INT_MIN;

    vi B = A;

    if (size == 1) return 0;

    sort(B.begin(), B.end());

    FOR (i, 0, size - 1) ans = max(ans, abs(B[i] - B[i+1]));

    return ans;
}