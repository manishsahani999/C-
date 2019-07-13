int mask;

void getPermutationHelper(int s, int A, vi & t, vvi & ans) {
	if(t.size() == A) {
		mask = 0;
		FOR(i, 0, A){
			if (mask & (1 << t[i])) return;
			mask |= 1 << t[i];
		}
		ans.pb(t);
		return;
	}

	FOR(i, 1, A + 1) {
		t.pb(i); 
		getPermutationHelper(i + 1, A, t, ans);
		t.pop_back();
	}

}

string getPermutation(int A, int B) {
	int k = 1; string str;
	char tmp[A];
	char ch = '1';
	FOR(i, 0, A) tmp[i] = ch++;
	
	do {k++;} while ((k <= B  ) && next_permutation(tmp, tmp + A));
	// getPermutationHelper(0, A, t, ans);
	
	FOR(i, 0, A) {
		if (tmp[i] == ':') str.pb('10');
		else if (tmp[i] == ';') str.pb('11');
		else if (tmp[i] == '<') str.pb('12');
		else str.pb(tmp[i]);
	}
	dump(str);

	return str;
}

