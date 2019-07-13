bool isOdd(int tmp) {
    int c = 0;
    while (tmp != 0) { if (tmp & 1) c++; tmp = tmp >> 1;}
    return (c & 1);
}

int main() {
    int TC, Q, X, O, E, tmp, flag, n; scanf("%d", &TC);
    while (TC--) {
        uosi s; vi S; O = 0; E = 0; scanf("%d", &Q);

        while(Q--) {
            scanf("%d", &X); 
            n = S.size();
            if(s.find(X) == s.end()) {
                s.insert(X); S.pb(X);
                if(isOdd(X)) O++;
                else E++;

                FOR(i, 0, n) {
                    if (S[i] != X){
                        tmp = S[i] ^ X;
                        if (s.find(tmp) == s.end()) {
                            s.insert(tmp); S.pb(tmp);
                            if(isOdd(tmp)) O++;
                            else E++;
                        }
                    }
                }
            }

            

            printf("%d %d\n", E, O);
        }

    }
    
    return 0;
}