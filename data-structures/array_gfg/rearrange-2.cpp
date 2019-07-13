void rearrangeWC(vi &);
void altPosNeg(vi & A);

/*
| Given an array of n elements. 
| Our task is to write a program to rearrange the array such that 
| elements at even positions are greater than all elements before it 
| and elements at odd positions are less than all elements before it.
*/
void rearrangeWC(vi & A) {
    int size = A.size();
    vi B = A;
    sort(B.begin(), B.end());
    int l = (size - 1)/ 2, r = l + 1;

    FOR(i, 0, size) {
        if (i % 2 == 0) A[i] = B[l--];
        else A[i] = B[r++];
    }   
}

/*
| Rearrange array in alternating positive & negative items with O(1) extra space
*/
void findNextPos(vi & A, int *j) {
    int size = A.size();
    while (*j < size) {
        if (A[*j] >= 0) break;
        *j = *j + 1;
    }
}

void findNextNeg(vi & A, int *k) {
    int size = A.size();
    while (*k < size) {
        if (A[*k] < 0) break;

        *k = *k + 1;
    }
}


void altPosNeg(vi & A) {
    int size = A.size(), j = size, i = -1, temp = 0, k = 0;

    // shift all the values to 
    while (i < j) {
        while (A[--j] < 0);
        while (A[++i] > 0);

        if (i < j) swap(A[i], A[j]); 
    }

    // if array has all the neg or pos elems
    if (i == 0 || i == size) return;

    // swaping 
    while (k < size && i < size) {
        swap(A[k], A[i]);
        i += 1;
        k += 2;
    }
    


}