void brotherArif() {
    int lim = 10001;
    int ra[lim], ca[lim];
    int R, C, N, r, c, ans, count = 1;
    while(scanf(" %d %d %d", &R, &C, &N) ) {
            if (R == 0 && C == 0 && N == 0) break;

        memset(ra, 0, sizeof ra);
        memset(ca, 0, sizeof ca);

        FOR(i, 0, N) {
            scanf("%d %d", &r, &c);
            ra[r] = 1;
            ca[c] = 1;
        }

        scanf("%d %d", &r, &c);

        ans = 0;

        if (ra[r] == 0 && ca[c] == 0) ans = 1;
        
        // check top
        if (r-1 > 0 && (ra[r - 1] == 0 && ca[c] == 0)) ans = 1;

        // check left
        if (c - 1 > 0 && (ra[r] == 0 && ca[c - 1] == 0)) ans = 1;
        
        // check right
        if (c + 1 < lim - 1 && (ra[r] == 0 && ca[c+1] == 0)) ans = 1;

        // check bottom
        if (r + 1 < lim - 1 && (ra[r + 1] == 0 && ca[c] == 0)) ans = 1;

        if (ans == 1) {
             printf("Case %d: Escaped again! More 2D grid problems!\n", count);
        } else {
            printf("Case %d: Party time! Let’s find a restaurant!\n", count);
        }

        count++;

    }
}

/*

#define yes "Escaped again! More 2D grid problems!"
#define no "Party time! Let's find a restaurant!"
using namespace std;
int r, c, n, tc;
int x, y, i;
bool R[10001], C[10001], found;
int main(){
	while( scanf( "%d %d %d", &r, &c, &n )==3 && (r||c||n) ){
		memset( R, 0, sizeof R );
		memset( C, 0, sizeof C );
		while(n--){
			scanf( "%d %d", &x, &y );
			R[x] = true;
			C[y] = true;
		}
		scanf( "%d %d", &x, &y );
		printf( "Case %d: ", ++tc );
		if( (!R[x]&&!C[y])||(x>0&&!R[x-1]&&!C[y])||(x<r-1&&!R[x+1]&&!C[y])||(y>0&&!R[x]&&!C[y-1])||(y<c-1&&!R[x]&&!C[y+1]) ) puts(yes);
		else puts(no);
	}
}

 */