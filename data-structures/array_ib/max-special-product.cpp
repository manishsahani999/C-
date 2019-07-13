int maxSpecialProduct(vector<int> &);
int maxSpecialProductFast(vector <int> &);

int maxSpecialProduct(vector<int> &A) {
    long long int max_product = INT_MIN;
    int l = 0, r = 0;

    if (A.size() == 1) return 0;

    for (int i = 1; i < A.size()-1; i++) {
        l = i-1, r = i +1;
        // left special value not found move further left
        while (A[l] <= A[i] && l >= 0) l--;
        // Right special value not found move further right
        while (A[r] <= A[i] && r < A.size()) r++;
        if (r == A.size()) r = 0;
        max_product = max(max_product, l*r); 
        cout << l << " " << r <<" " << max_product << endl;
               
    }


    return max_product % 1000000007;
}

int maxSpecialProductFast(vector <int> &A) {
    long long int max_product = INT_MIN, temp_product = 0;
    vector <pair <int, int>> pge = prevGreaterElement(A), nge = nextGreaterElement(A);

    for (int i = 0; i < A.size(); i++) {
        if (nge[i].first == -1 || pge[i].first == -1) temp_product = 0;
        else temp_product = nge[i].second*pge[i].second;
        
        max_product = max(max_product, temp_product);
        
    }

    return max_product % 1000000007;
    
}