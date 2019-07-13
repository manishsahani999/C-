int singleNumber(const vector<int> &A) {
    int n = A.size();

    int s = 0;

    for (int a: A) s ^= a;
    
    return s;
}

int singleNumber2(const vi & A) {

    int s = 0;

    int test = 1;
    FOR (i, 0, 32) {
        int count = 0;

        for (int a: A) {
            if ((a & test) != 0) count++;
        }
        
        if (count % 3 != 0) s |= test;

        test <<= 1; 
    }
    
    return s;
}