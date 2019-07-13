int dupNumber(const vi &);

int dupNumber(const vi & A) {
    int size = A.size();

    vi s(size, 0);

    FOR (i, 0, size) {
        if (s[A[i]] != 0) return A[i];
        else s[A[i]] += 1;
    }

    // printVector(s);
    return -1;
}