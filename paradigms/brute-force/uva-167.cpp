int k, sum, mx, B[8][8]; vi row(8, 0); vvi sols; 


bool place(int r, int c) {
	FOR(j, 0, c) if(row[j] == r || abs(row[j] - r) == abs(j - c)) return false;
	return true;
}


void solveNQueen(int c) {
	if(c == 8) {
		sols.pb(row);
		return;
	}

	FOR(r, 0, 8) {
		if (place(r, c)){
			row[c] = r; solveNQueen(c + 1);
		}
	}
}


void uva_167()
{
	// Pre processing
	solveNQueen(0);

	scanf("%d", &k);
	while(k--) {
		FOR(i, 0, 8) FOR(j, 0, 8) { scanf("%d", &B[i][j]); }

		mx = INT_MIN;

		FOR(i, 0, 92) { 
			sum = 0;
			FOR(j, 0, 8) {
				sum += B[j][sols[i][j]];
			}
			mx = max(mx, sum);
		} 

		printf("%5d\n", mx);

	}
	
}