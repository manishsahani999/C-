/*
| stack based approach, time complexity O(n)
*/

vector <pair <int, int>> nextGreaterElement(vector <int> &);

vector <pair <int, int>> nextGreaterElement(vector <int> & a) {
    stack <pair <int, int>> s;
    vector <pair <int, int>> x(a.size(), make_pair(0, 0));

    for (int i = a.size() - 1; i >= 0; i--) {
        while (!s.empty() && s.top().first <= a[i]) s.pop();
        
        if (s.empty()) x[i] = make_pair(-1, 0);
        else x[i] = make_pair(s.top().first, s.top().second);

        s.push(make_pair(a[i], i));
    }
    
    return x;
}