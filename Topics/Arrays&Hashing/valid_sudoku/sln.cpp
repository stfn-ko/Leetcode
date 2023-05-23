// @Runtime 16 ms (92.16%)
// @Memory 18 MB (84.3%)

bool isValidSudoku(vector<vector<char>>& board) {
  int r[9][9] = {0};
  int c[9][9] = {0};
  int b[3][3][9] = {0};

  for (int i = 0; i < 9; ++i) {
    for (int j = 0; j < 9; ++j) {
        int w = board[i][j]-0b110000;
        if (w < 0) break;
        if(r[i][w]++) return 0;
        if(c[j][w]++) return 0;
        if(b[i/3][j/3][w]++) return 0;
      }
    }
  }

  return 1;
}
