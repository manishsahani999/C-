/*
| Rotates the array through d, O(n), by using juggling algorithm
*/

void rotate(vi &, int);
void reverse(vi &, int, int);
void rotateReverse(vi &, int);

// Juggling Algorithm
void rotate(vi & A, int d) {
    int k = gcd(A.size(), d);

    for (int i = 0; i < k; i++) {
        int temp = A[i], j = 0;
        while (1) {
            if (j + k < A.size()) {
                A[i + j] = A[i + j + k];
                j += k;
            }
            else {
                A[i + j] = temp;
                break;
            }
        }
    }
}

// Reverse function for reversing array
void reverse(vi & A, int start, int end) {
    while (start < end) { 
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
        start++; end--;
    }
    
}

// ReversalAlgorithm
void rotateReverse(vi & A, int d) {
    reverse(A, 0, d - 1);
    reverse(A, d, A.size() - 1);
    reverse(A, 0, A.size() - 1);
}