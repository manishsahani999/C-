void exam()
{
    int T, N, ans;
    scanf("%d", &T);
    while (T--)
    {
        string s, u;
        ans = 0;
        cin >> N;
    	cin >> s;
    	cin >> u;
        fflush(stdin); 
        


        for (int i = 0; i < N - 1; i++)
        {

            if (u[i] != s[i] and u[i] != 'N')
                i++;
            else if (u[i] == s[i])
            {
                ans++;
            }
            else {}
        }

        if (u[N - 1] == s[N - 1])
            ans++;

        printf("%d\n", ans);
    }
}