void grid_update(const int src[5][5], int dest[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
          int sum = 0;
          if (i + 1 < 5) {
            sum += src[i + 1][j];
          }
          if (i - 1 >= 0) {
            sum += src[i - 1][j];
          }
          if (j + 1 < 5) {
            sum += src[i][j + 1];
          }
          if (j - 1 >= 0) {
            sum += src[i][j - 1];
          }
          
          if (src[i][j] > sum) {
            dest[i][j] = 2;
          } else if (src[i][j] == sum) {
            dest[i][j] = 1;
          } else {
            dest[i][j] = 0;
          }
        }
    }
}
