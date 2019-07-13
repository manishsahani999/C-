pi pairInRotatedArray(vi &, int);
pi pairInRotatedArrayHashing(vi &, int);

pi pairInRotatedArray(vi & A, int sum) {
    int pivot = findPivot(A), size = A.size();
    int low = pivot + 1, high = pivot; pi ans;
    while (low - pivot + 1 < size - pivot + high)
        if (A[low] + A[high] == sum) return ans = mp(A[low], A[high]);
        else if (A[low] + A[high] < sum) low = (low + 1) % size;
        else 
            if (high == 0) high = size - 1;
            else high--;

    return ans = mp(-1, -1);
            
}

pi pairInRotatedArrayHashing(vi & A, int sum) {
    pi ans;
    uosi s;
    for (int i = 0; i < A.size() -1; i++) {
        int temp = sum - A[i];
        if (s.find(temp) != s.end())
            return ans = mp(temp, A[i]);
        s.insert(A[i]);
    }

    return ans = mp(-1, -1);
}
