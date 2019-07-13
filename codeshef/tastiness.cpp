bool comp (pi a, pi b) {
    return a.fi < b.fi;
}

void tastiness()
{
    int t, m, n, x, y;
    scanf("%d", &t);
    cout << t;
    while (t--)
    {
        scanf("%d %d", &n, &m);

        vpi a(n, mp(0, 0));
        FOR(i, 0, n)
        {
            scanf("%d %d", &x, &y);
            a[i] = mp(x, y);
        }

        sort(a.begin(), a.end(), comp);

        x = n - 1;
        int ans = 0, ma = a[x].se;
        
	    while (x > -1) {
	    	if (a[x].fi != a[x - 1].fi) {
	    		ans = ma + a[x - 1].se;
	    		break;
	    	}else {
	    		x--;
	    	}
	    }
	    
	    printf("%d\n", ans);
    }
}

