bool run(int n) {
    int mask = 0, temp = n, size = 0, a[10] = { 0 }, k = 0, j = 0;

    while (temp != 0) {
        if (mask & 1 << (temp % 10)) return false;
        mask |= 1 << (temp % 10); temp /= 10; size++; 
    }

    temp = n; FORD(i, size - 1, -1) { a[i] = temp % 10; temp /= 10; }
    
    mask = 0;

    while (k < size) {
        if (mask & (1 << j)) { return false; }
        mask |= 1 << j;
        j += a[j]; j = j % size; k++;
    }
    if (mask == ((1 << size) - 1) && !j) return true;

    return false;
}

void uva_347() {
    int R, TC = 0; vi x(9999999, 0);

    for (int i = 9876543; i > -1; i--){
        if (run(i)) x[i] = i;
        else x[i] = x[i + 1];
    }

    while (scanf("%d", &R), R) {
        printf("Case %d: %d\n", ++TC, x[R]);
    }
}