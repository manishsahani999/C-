int maxSumInRotatedArr(vi &);
int maxSumInRotatedSortedArr(vi &);

int maxSumInRotatedSortedArr(vi & A) {
    int pivot = findPivot(A), size = A.size(), sum = 0;

    for (int i = size - 1; i >= 0; i--) {
        sum += A[pivot]*i;
        if (pivot == 0) pivot = size - 1;
        else pivot--;
    }
    
    return sum;
}

int maxSumInRotatedArr(vi & A) {
    int size = A.size(), r_prev = 0, s_prev = 0, r_temp = 0, r_max = INT_MIN;

    for (int i = 0; i < size; i++) {
        r_prev += i*A[i];
        s_prev += A[i];
    }

    r_max = r_prev;

    for(int i = 1; i < size; i++) {
        r_prev = r_prev + s_prev - (size) * A[size - i];
        r_max = max(r_max, r_prev);
    }

    return r_max;
} 
