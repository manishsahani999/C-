int repeatedNby3(const vi & A) {
    int size = A.size();

    cout << size;

    int c_1 = 0, c_2 = 0;
    int first = INT_MAX, sec = INT_MAX;

    for (int in: A) {
        if (first == in) c_1++;
        else if (sec == in) c_2++;
        else if (c_1 == 0) {first = in; c_1 = 1;}
        else if (c_2 == 0) {sec = in; c_2 =1;}
        else { c_1--; c_2--;}
    }

    c_1 = 0; c_2 = 0;

    // check the candidates
    FOR (i, 0, size) {
        if (A[i] == first) c_1++;
        if (A[i] == sec) c_2++;
    }

    if (c_1 > size / 3) return first;
    if (c_2 > size / 3) return sec;

    return -1;
}