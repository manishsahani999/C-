bool check(ll n) {
    int mask = 0;
    while (n != 0) {
        if (mask & (1 << n % 10)) return false;
        mask |= (1 << n % 10); n /= 10;
    }
    return true;
}

void uva_471() {
    ll TC, N, tmp = 0, lim = 9876543210; scanf("%lld\n", &TC);

    while(TC--) {
        scanf("%lld\n", &N);
        for(ll i = 1; N*i <= lim; i++){
            tmp++;
            if (check(i) && check(N * i)) printf("%lld / %lld = %lld\n", N*i, i, N);
        }
        if (TC) nl; N = 0;
    }

    return 0;
}


