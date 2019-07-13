vi waveArray(vi &);

vi waveArray(vi & A) {
    int size = A.size();

    sort(A.begin(), A.end());

    for (int i = 0; i < size;) {
        if (i + 1 < size) {
            int temp = A[i];
            A[i] = A[i + 1];
            A[i + 1] = temp;
        }
        i += 2;
    }

    return A;
}
