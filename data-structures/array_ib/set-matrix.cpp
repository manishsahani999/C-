void setZeroes(vvi & A) {

    bool row = false, col = false;

    FOR (i, 0, A.size()) if (A[i][0] == 0)  row = true;
    FOR (j, 0, A[0].size()) if (A[0][j] == 0) col = true;

    FOR(i, 1, A.size()) 
        FOR (j, 1, A[i].size()) {
            if(A[i][j] == 0) {
                A[0][j] = 0;
                A[i][0] = 0;
            }
        }

    FOR (i, 1, A.size()) {
        if (A[i][0] == 0)
            FOR (j, 1, A[i].size()) A[i][j] = 0;
    }

    FOR (j, 1, A[0].size()) 
        if (A[0][j] == 0) 
            FOR (i, 1, A.size()) A[i][j] = 0;

    if (row) FOR (i, 0, A.size()) A[i][0] = 0;
    if (col) FOR (j, 0, A[0].size()) A[0][j] = 0;
}