vector <int> plusOne(vector<int> &);

vector <int> plusOne(vector<int> & A) {
    bool carry = true, overflow = false;
    vi x(A.size(), 0), ans;

    for (int i = A.size() - 1; i >= 0; i--) {
        if (carry == true) {
            if (A[i] + 1 > 9) {
                x[i] = 0;
                carry = true;
            }
            else { 
                x[i] = A[i] + 1;
                carry = false;
            }
        } 
        else {
            x[i] = A[i];
        }
    }

    if (carry) overflow = true;

    if (overflow) {
        x.push_back(0);
        x[0] = 1;
    }

    int i = 0;
    while (i < x.size() && x[i] < 1) i++;

    for (int j = i ; j < x.size(); j++) ans.push_back(x[j]);
    
    return ans;
}

