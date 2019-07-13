vi maxUnsortedArr(vi & A) {
    int size = A.size(), l = 0, r = size - 1;
    vi ans;
    while (l < size - 1 && A[l] <= A[l + 1]) l++;
    while (r > 0 && A[r] >= A[r - 1]) r--;

    if (l == size - 1) return ans = { -1 };

    int mn = A[l + 1], mx = A[l + 1];
    FOR (i, l, r + 1) {
        mx = max(mx, A[i]);
        mn = min(mn, A[i]);
    }

    int x = 0, y = size - 1;
    while (A[x] < mn && x <= l) x++;
    while (A[y] < mx && y >= r) r--; 

    return ans = { x, y};
    
}

// correct ans

#define vi vector <int>

vector<int> subUnsort(vector<int> &A) {
    
    vector<int> ans;
    int n = A.size();
    int i = 0, j = n-1;
    while(i< n - 1 and A[i] <= A[i + 1]){
        i++;
    }
    while(j > 0 and A[j] >= A[j - 1]){
        j--;
    }
    if(i == n - 1){ // if array is already sorted, output -1
        ans.push_back(-1);
        return ans;
    }
    int mn = A[i + 1], mx = A[i + 1];
    for(int k = i; k <= j; k++){
        mx = max(mx, A[k]);
        mn = min(mn, A[k]);
    }
    int l = 0, r = n - 1;
    while(A[l] <= mn and l <= i){
           l++;
    }
    while(A[r] >= mx and r >= j){
        r--;
    }
    ans.push_back(l);
    ans.push_back(r);
    return ans;
}
