void uva_11001() {
    int vt, vo;

    while (scanf("%d %d", &vt, &vo), (vt || vo)) {       
        double mx = 0.0, tmp, v;
        int ans = 0;
        char s1[100], s2[100];

        for (int i = 1; i <= vt; i++) {
            v = (double) vt/i;
            if (v - vo > 0) {
                tmp = 0.3*sqrt(v - vo) * i;
            }
            else break;
            // i did this, 
            // if (mx == tmp) { ans = 0; break; }
            if(fabs(mx - tmp) <= 1e-10) { ans = 0; break; } 
            else if(tmp > mx) {ans = i, mx = tmp;}
            else break;
        }

        printf("%d\n", ans);
        
    }
}