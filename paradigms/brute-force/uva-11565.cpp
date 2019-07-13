void simpleEq()
{
    int t, A, B, C, sol;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &A, &B, &C);
        sol = 0;
        FOR(i, -100, 100)
        {
            FOR(j, -100, 100)
            {
                FOR(k, -100, 100)
                {
                    if (j != i && k != i && j != k &&
                        i + j + k == A && i * j * k == B && i * i + j * j + k * k == C)
                    {
                        if (!sol)
                            printf("%d %d %d\n", i, j, k);
                        sol = 1;
                    }
                }
            }
        }
    }
}

void simpleEqFast()
{
    int t, A, B, C, sol;
    scanf("%d", &t);
    while (t--){
        scanf("%d %d %d", &A, &B, &C);
        sol = 0;
        for (int i = -22; i <= 22 && !sol; i++) { if (i * i <= C)
            for (int j = -100; j <= 100 && !sol; j++) { if (j != i && i*i + j*j <= C)
                for (int k = -100; k <= 100 && !sol; k++) {
                    if (k != i && j != k &&
                        i + j + k == A && i * j * k == B && i * i + j * j + k * k == C) {
                        printf("%d %d %d\n", i, j, k);
                        sol = 1;
                    }
                }
            }
        }

        if (!sol) printf("No solution.\n");
    }
}


/*
    lorem ipsum dolor situm and manil and moving dance andnn and minash s msnsie ms 
*/

