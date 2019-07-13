int findPivot(vi &);
int findPivotHelper(vi &, int, int);

int findPivotHelper(vi & A, int low, int high) {

    // if (high < low) return -1;
    if (A[low] < A[high]) return - 1;

    if (A[low] > A[low + 1] ) return low;

    int mid = low + (high - low) / 2;   

    if (A[mid] > A[low]) findPivotHelper(A, mid, high);
    else findPivotHelper(A, low, mid);
}

int findPivot(vi & A) {
    return findPivotHelper(A, 0, A.size() - 1);
}