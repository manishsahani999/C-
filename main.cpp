#include <bits/stdc++.h>

using namespace std;

/*
| Macros
*/
#include "./macro.hpp"

/*
| Commom utils
*/
#include "./helpers/gen-vector.cpp" // generateRandomVector(size, start = null, end = null);
#include "./helpers/print.cpp"      // printVector(vector), printVectorWithPair(vector), printVectorWithKeys(vector);
#include "./helpers/math.cpp"       // gcd(int, int);

/*
| Header File for including all Problem files
*/
#include "./data-structures/array.hpp"
#include "./data-structures/bitset.hpp"
#include "./paradigms/brute-force.hpp"
#include "./paradigms/d_c.hpp"
#include "./codeshef/codeshef.hpp"

int main()
{
    fast_io;
    vi ran = generateRandomVector(10, 10, 90);
    vi custom{1, 2, 3};
    vvi mean {{5}, {4}, {3}, {1}, {3}, {1}, {4}, {2}, {5}, {3}, {3}};
    string str = "nandana";

    cout << findMedian(mean);

    cout << endl;
    return 0;
}
