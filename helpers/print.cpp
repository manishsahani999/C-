#define GET_VARIABLE_NAME(Variable) (#Variable)
#define dump(v) cout << "\nDump:: " << GET_VARIABLE_NAME(v) << " => " << v;
#define dumpin(v) cout << ", " << GET_VARIABLE_NAME(v) << " => " << v << " ";
#define message(v) cout << "\n" << v;

template <typename T> void printVector(vector <T> &);
template <typename T> void printVectorWithPair(vector <pair <T, T>> &);
template <typename T> void printVectorWithkeys(vector <T> &);
template <typename T> void printVectorWithVector(vector< vector <T>> &);

template <typename T> void printArray(T *);




template <typename T> void printVector(vector <T> & a) {
    for (auto v: a) cout << v << " ";
    printf("\n");
}

template <typename T> void printVectorWithPair(vector <pair <T, T>> & a) {
    for (int i = 0; i < a.size(); i++) cout << "[" << a[i].first << ", " << a[i].second << "] ";
    cout << "\n";
}

template <typename T> void printVectorWithkeys(vector <T> & a) {
    for (int i = 0; i < a.size(); i++) cout << "[" << i << ", " << a[i] << "] ";
    cout << "\n";
}

template <typename T> void printVectorWithVector(vector< vector <T>> & a) {
    for (int i = 0; i < a.size(); i++) {
       for (int j = 0; j < a[i].size(); j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }     
}


template <typename T> void printArray(T * a, T * b) {
    cout << "\nDump:: [ Array ] : ";
    while (a < b) {
        cout << *a << " ";
        a++;
    } 
}
