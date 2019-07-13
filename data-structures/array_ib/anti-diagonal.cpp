void reverse(vi & A, int start, int end) {
    while (start < end) { 
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
        start++; end--;
    }
    
}

vvi diagonal(vvi &A) {
    int size = A.size(), i = 0, j = 0, pos = 0, m = size, z = 0;
    vvi x(2*size - 1);

    FOR (k, 0, 2*size - 1) {
        if (k < size) {
            i = k; j = 0;
            x[pos] = vi (k + 1, 0);  
            FOR(l, 0, k + 1) {
                x[pos][l] = A[i--][j++];
            }
        } else {
            z = 0;
            j = k - (size - 1); i = size - 1;
            x[pos] = vi (--m, 0);  
            while (j < size && i > -1) {
                x[pos][z++] = A[i--][j++];
            }
        }
        reverse(x[pos], 0, x[pos].size() -1);
        pos++;
    }
    
    printVectorWithVector(x);
    return x;
}