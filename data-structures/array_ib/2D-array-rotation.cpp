void rotate(vector<vector<int> > &);
void rotateFast(vector<vi> &);

void rotate(vector<vector<int> > &A) {
    map <pi, int> memo;

    for (int i = 0; i < A.size(); i++)
        for(int j = 0; j < A[i].size(); j++) {
            memo.insert(make_pair(make_pair(i, j), A[i][j]));
            if (memo[make_pair(A.size() - 1 - j, i)]) {
                A[i][j] = memo[make_pair(A.size() - 1 - j, i)];
                memo.erase(make_pair(A.size() - 1 - j, i));
            }
            else
                A[i][j] = A[A.size() - 1 - j][i]; 

            cout << memo.size() << " ";
        }
}

void rotateFast(vector<vi> &mat) {
    int N = mat.size();

    for (int x = 0; x < N / 2; x++) { 
        for (int y = x; y < N-x-1; y++) { 
            int temp = mat[x][y]; 

            mat[x][y] = mat[N-1-y][x]; 
            mat[N-1-y][x] = mat[N-1-x][N-1-y];
            mat[N-1-x][N-1-y] = mat[y][N-1-x]; 
            mat[y][N-1-x] = temp; 
        } 
    } 
}