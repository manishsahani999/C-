// Binary Search in rotated array

int BinarySearchInRotatedArray(const vi &, int, int, int);

int BinarySearchInRotatedArray(const vi & A, int low, int high, int ele) {
    if (low > high) return -1;
    int mid = (low + high )/2;
    
    if (A[mid] == ele) return mid;

    if (A[mid] >= A[low] && A[mid] >= A[high]) // left side to mid is not rotated
        if (ele <= A[mid] && ele >= A[low]) return BinarySearchInRotatedArray(A, low, mid, ele);
        else return BinarySearchInRotatedArray(A, mid + 1, high, ele);
    else // left side to mid is rotated
        if (ele >= A[mid] && ele <= A[high]) return BinarySearchInRotatedArray(A, mid + 1, high, ele);
        else return BinarySearchInRotatedArray(A, low, mid , ele);

}