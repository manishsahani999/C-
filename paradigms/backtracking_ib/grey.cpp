vector<int> grayCode(int A) {
	vi ans;
	FOR(i, 0, 1 << A) {
		ans.pb(i ^ (i >> 1));
	}
	return ans;
}