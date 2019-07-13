/*
| Maximum contiguous 1 possible in a binary string after k rotations
*/

int maxContSubstr(string, int);

int maxContSubstr(string s, int k) {
    int size = s.length(), sum = 0;
    vi x(size, 0);

    FOR (i, 0, size) {
        if(s[i] == '1') {
            sum += 1;
            if(s[i + 1] == '0') x[i] = sum;
            if (i == size - 1) x[i] = sum;
        } 
        else sum = 0;
    }

    sum = 0;

    FOR(i, 0, k + 1) {
        make_heap(x.begin(), x.end());
        sum += x.front();
        pop_heap(x.begin(), x.end());
        x.pop_back();
    }

    return sum;
}