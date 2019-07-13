#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[] = { 756898537, -1973594324, -2038664370, -184803526, 1424268980 };
    int size = sizeof(arr)/sizeof(arr[0]);

    vector <int> subarray, temp;
    long long int sum = INT_MIN, temp_sum = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            temp.push_back(arr[i]);
            temp_sum += arr[i];
        }
        if (arr[i] < 0) {
            if (temp_sum > sum) {
                sum = temp_sum;
                subarray.resize(0);
                for (auto v: temp)
                    subarray.push_back(v);
            }
            temp_sum = 0;
            temp.resize(0);
        }
    }

    if (temp_sum > sum ) {
        sum = temp_sum;
        subarray.resize(0);
        for (auto v: temp)
            subarray.push_back(v);
    }
    for (auto i: subarray)
        cout << i << " ";

        cout << "\n";
    return 0;
}