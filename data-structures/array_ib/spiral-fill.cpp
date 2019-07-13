vector<vector<int> > generateMatrix(int A) {
    int end_u = 0, end_r = A , end_d = A, end_l = -1, count = 0, 
        i = 0, j = 0;

    bool move_right = true, move_down = false, move_left = false, move_up = false;
    
    vector <vector <int>> x(A);
    FOR(m, 0, A) x[m] = vector <int> (A, 0);

    while (++count <= A*A) {
        // printf("\nfilling x[%d][%d] = %d", i, j, count);
        if (move_right) {
            // printf(" | moving right");
            end_u = i;
            x[i][j] = count;
            j++;
            if (j == end_r - 1) {
                move_down = true;
                move_right = false;
            }
        }
        else if (move_down) {
            // printf(" | moving down");
            end_r = j;
            x[i][j] = count;
            i++;
            if (i == end_d - 1) {
                move_left = true;
                move_down = false;
            }
        }
        else if (move_left) {
            // printf(" | moving left");
            end_d = i;
            x[i][j] = count;
            j--;
            if (j == end_l + 1) {
                move_up = true;
                move_left =false;
            }
        }
        else {
            // printf(" | moving up");
            end_l = j;
            x[i][j] = count;
            i--;
            if (i == end_u + 1) {
                move_right = true;
                move_up = false;
            }
        }
    }

    printVectorWithVector(x);

    return x;
}