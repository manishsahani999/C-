int mask;

void permsHelper(int s, vi & A, vi & t, vvi & ans){
	
	if(t.size() == A.size()) {
		mask = 0;
		FOR(i, 0, A.size()){
			if (mask & (1 << t[i])) return;
			mask |= 1 << t[i];
		}
		ans.pb(t);
		return;
	}

	FOR(i, 0, A.size()) {
		t.pb(A[i]); 
		permsHelper(i + 1, A, t, ans );
		t.pop_back();
	}

}

vector<vector<int> > permute(vector<int> &A) {
	vi t; vvi ans;
	permsHelper(0, A, t, ans);
	printVectorWithVector(ans);
	return ans;
}

