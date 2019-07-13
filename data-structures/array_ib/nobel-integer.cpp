int nobelInt(vi &);

int nobelInt(vi & A) {
    int size = A.size(), i = size - 1;

    sort(A.begin(), A.end());

    if (A[size - 1] == 0) return 1;

    while (i >= 0 && A[i] > 0) {
        if (A[i] == A[i + 1]) i--;
        else if (size - 1 - i == A[i]) {
            return 1;
        }
        else i--;
    }

    return -1;

}