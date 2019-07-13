/*
| Exercise 2.2.1 
| given S an unsorted array, solve in linear time 
*/

// 1) Determine if S contains one or more paris of duplicates integers.
vi findDuplicates(vi &); // O(n)/O(1)

// Find a and b, such that a + b = v;
vi findPair(vi & S, int); // O(nlgn)/O(1) can also be done in O(n)/O(n) by hashing

// Length of longest increasing contiguos subarray
int lenLongestSubarray(vi &);


/*
| Exercise 2.2.1
| Bits Tricks.
*/

// Calculate Modulo. S % N, N is a power of 2
int modulo(int, int);

// Check S is a Power of 2
bool checkNum(int); 

// turn Last set bit off
int resetLastSetBit(int);

// set last zero
int setLastZero(int);

// set Last consecutive ones 
int setLastOnes(int);

vi findDuplicates(vi & S) {
    int n = S.size(); vi ans;

    FOR (i, 0, n) S[S[i] % n] += n;

    FOR(i, 0, n) if (S[i] / n > 1) ans.pb(i);

    return ans;
}

vi findPair(vi & S, int v) {
    int n = S.size(), l = 0, r = n - 1; vi ans;

    sort(S.begin(), S.end());

    while (l < r) 
        if (S[l] + S[r] == v) return ans = {S[l], S[r]};
        else if (S[l] + S[r] < v) l++;
        else r--;
    
    return ans = {-1, -1};
}

int lenLongestSubarray(vi & S) {
    int n = S.size(), sum = 1, ans = 0;

    FOR(i, 1, n) {
        if (S[i] > S[i - 1]) {
            sum++; ans = max(ans, sum);
        }
        else sum = 1;
    }

    return ans;
}

int modulo(int S, int N) { return (S & (N- 1)); }

bool checkNum(int S) { return (S & (S - 1)) == 0; } 

int resetLastSetBit(int S) { return (S & (S - 1) ); }

int setLastZero(int S) { return (S | (S + 1)); }

int setLastOnes(int S) { return ((S + (S & (~(S) + 1))) & ((S + (S & (~(S) + 1))) - 1)); }