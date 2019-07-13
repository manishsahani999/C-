int maxArr(vi &);
int maxArrCs(vi &);
/*
| based on the property of Abs
*/
int maxArr(vi &A) {
    int max_abs = INT_MIN;
    int max_sum = INT_MIN, max_dif = INT_MIN, min_sum = INT_MAX, min_dif = INT_MAX;

    for (int i = 0; i < A.size(); i++) {
        max_sum = max(max_sum, A[i] + i);
        min_sum = min(min_sum, A[i] + i);
        max_dif = max(max_dif, A[i] - i);
        min_dif = min(min_dif, A[i] - i);
    }

    max_abs = max((max_sum - min_sum), (max_dif - min_dif));

    return max_abs;
}

/*
| Complete Search algo
*/
int maxArrCS(vi &A) {
    int max_diff = INT_MIN, temp_diff = 0;

    for (int i = 0; i < A.size(); i++)
        for (int j = 0; j < A.size(); j++)
        {
            temp_diff = abs(A[i] - A[j]) + abs(i - j);
            max_diff = max(max_diff, temp_diff);
        }

    return max_diff;
}