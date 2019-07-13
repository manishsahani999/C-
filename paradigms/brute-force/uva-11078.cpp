void uva_11078 {
    int TC, n, a[100001], mx, mx_diff, ans; scanf("%d", &TC);
    while (TC--) {
        scanf("%d", &n);
        memset(a, 0, sizeof a);
        FOR (i, 0, n) { scanf("%d", &a[i]); }
        mx = INT_MIN; mx_diff = INT_MIN;
        FOR(i, 0, n - 1) {
            mx = max(mx, a[i]);        
            if(mx - a[i + 1] > mx_diff)
                mx_diff = mx - a[i + 1];
        }
        printf("%d\n", mx_diff);
    }
}

/*


 */