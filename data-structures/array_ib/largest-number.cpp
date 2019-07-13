string largestNumber(vi &);

bool comp(string a, string b) {
    string ab = a.append(b);

    string ba = b.append(a);

    return ab.compare(ba) > 0 ? true : false;
}

string largestNumber(vi & A) {
    string temp; 
    int sum = 0;

    int size = A.size();

    vs x;

    for (int a: A) {
        sum += a;
        temp = to_string(a);
        
        x.pb(temp); 
    }
    
    if (sum == 0) return "0";
    
    sort(x.begin(), x.end(), comp);

    temp = "";
    FOR(i, 0, size) {
        temp.append(x[i]);
    }

    
    

    return temp;
}