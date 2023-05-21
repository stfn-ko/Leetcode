// @Runtime 16 ms (92.16%)
// @Memory 18 MB (84.3%)

bool isValidSudoku(vector<vector<char>>& board) {
  int r[9][9] = {0};
  int c[9][9] = {0};
  int b[3][3][9] = {0};

  for (int i = 0; i < 9; ++i) {
    for (int j = 0; j < 9; ++j) {
      if(board[i][j] != '.') {
        int n = board[i][j]-'1';
        if(r[i][n]++) return 0;
        if(c[j][n]++) return 0;
        if(b[i/3][j/3][n]++) return 0;
      }
    }
  }

  return 1;
}
