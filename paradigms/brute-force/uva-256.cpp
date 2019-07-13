void squaresSlow() {
    int n, i, lim, f, s, pr;
    while (scanf("%d", &n) != EOF && n) {
        lim = pow(10, n);
        
        f = 0; s = 0;
        for (i = 0; i < lim; i++) {
            f =  i % (int)pow(10, (int)n/2);
            s =  i / (int)pow(10, (int)n/2);

            pr = (f + s)*(f + s);

            if (i == pr) printf("%.*d\n",n, i);
        }

    }
}

void squares() {
    int n, 
}