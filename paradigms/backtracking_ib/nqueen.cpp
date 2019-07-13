bool place(int r, int c, int row []) {
	FOR(i, 0, c) {
		if (row[i] == r || (abs(row[i] - r) == abs(i - c))) return false;		
	}

	return true;
}

void solveNQueensHelper(int A, int c, int row[], vvs & ans) {
	if(c == A) {
		string temp = "";
		FOR(i, 0, A) temp.pb('.');

		vs t(A, temp);

		FOR(i, 0, A) {
			t[i][row[i]] = 'Q';
		}
		ans.pb(t);
		return;
	}

	FOR(i, 0, A) {
		if(place(i, c, row)) {
			row[c] = i;
			solveNQueensHelper(A, c + 1, row, ans);
		}
	}
}


vector<vector<string> > solveNQueens(int A) {
	int row[A] = {0}; vvs ans;
	solveNQueensHelper(A, 0, row, ans);
	return ans;
}
