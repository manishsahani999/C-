// global
int row[8], TC, a, b, lc;

bool place(int r, int c) {
    FOR(prev, 0, c) {
        if (row[prev] == r || (abs(row[prev] - r) == abs(prev - c))) return false;
    }

    return true;
}

void backtrack(int c) {
    if (c == 8 && row[b] == a) {
        printf("%2d      %d", ++lc, row[0] + 1);
        FOR(i, 1, 8) printf(" %d", row[i] + 1);
        printf("\n");
    }
    FOR(r, 0, 8) {
        if(place(r, c)) {
            row[c] = r;
            backtrack(c + 1);
        }
    }
}

void queen() {
    scanf("%d", &TC); 
    while(TC--) {
        scanf("%d %d", &a, &b); a--; b--;      
        memset(row, 0, sizeof row); lc = 0;
        printf("SOLN       COLUMN\n #      1 2 3 4 5 6 7 8\n\n");
        backtrack(0);
        if (TC) nl;
    }
} 