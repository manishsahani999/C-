bool checkBalance(string t) {
	stack <int> s;

	for(char c: t) {
		if (c == '(') s.push(c);
		else {
			if (s.empty()) return false;
			if (s.top() == '(') s.pop(); 
		}
	}

	return s.empty();
}

void generateParenthesisHelper(int A, string t, vs & ans) {
	if(t[0] == ')') return;
	if (t.length() == 2*A) {
		if (checkBalance(t)) ans.pb(t);
		return;
	} 

	t.pb('(');
	generateParenthesisHelper(A, t, ans);
	t.pop_back();
	t.pb(')');
	generateParenthesisHelper(A, t, ans);
	t.pop_back();
}


vector<string> generateParenthesis(int A) {
	string t; vs ans;
	generateParenthesisHelper(A, t, ans);
	return ans;
}
