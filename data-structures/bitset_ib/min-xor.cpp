int findMinXor(vector<int> &A) {
    int size = A.size();
    int mi = INT_MAX, l = -1, temp;

    sort(A.begin(), A.end());

    while (++l < size - 1) {
        temp =A[l] ^ A[l + 1];
        mi = min(temp, mi);
    }

    return mi;

}
