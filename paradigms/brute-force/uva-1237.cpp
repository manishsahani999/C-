void uva_1237() {
    int TC, D, Q, P, L, H, f, j; scanf("%d", &TC);
    string M;
    vector <pair <string, pi>> d(10001);
    while (TC--) {
        scanf("%d", &D);
        FOR(i, 0, D) {
            cin >> M >> L >> H;
            d[i] = mp(M, mp(L, H));
        }
        scanf("%d", &Q);
        while (Q--) {
            scanf("%d", &P);
            f = 0; j = 0;
            M = ""; L = 0; H = 0;
            while (f < 2 && j < D) {
                if (d[j].se.fi <= P && d[j].se.se >= P) {
                    f++; M = d[j].fi; L = d[j].se.fi; H =d[j].se.se;
                }
                j++;
            } 

            if (f == 1) printf("%s\n", M.c_str());
            else printf("UNDETERMINED\n");
        }

        if (TC) printf("\n");
        
    } 
}