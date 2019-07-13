void rearrange(vi &);
void rearrangeArr(vi &);
void reverseArr(vi &);

void rearrange(vi & A) {
    int size = A.size(), temp = 0;
    for (int i = 0; i < size;) {
        if (A[i] >= 0 && A[i] != i) {
            temp = A[A[i]];
            A[A[i]] = A[i];
            A[i] = temp; 
        }
        else i++;
    }
    
}

void rearrangeArr(vi & A) {
    int size = A.size();
    vi B = A;
    FOR(i, 0, size)  A[i] = -1;
    FOR(i, 0, size) if (B[i] != -1) A[B[i]] = B[i];
}

void reverseArr(vi & A) {
    int r = A.size() - 1, l = 0, temp = 0;
    while (l < r) {
        temp = A[l]; 
        A[l] = A[r];
        A[r] = temp;
        l++; r--;
    }
}