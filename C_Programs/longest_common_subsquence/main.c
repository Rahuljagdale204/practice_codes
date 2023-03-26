
#include <stdio.h>
#include <string.h>

int i, j, m, n, LCS[20][20];
char b[20][20];

void longest_CS(char S1[20],char S2[20] ) {
  m = strlen(S1);
  n = strlen(S2);

  for (i = 0; i <= m; i++)
    LCS[i][0] = 0;
  for (i = 0; i <= n; i++)
    LCS[0][i] = 0;

  for (i = 1; i <= m; i++)
    for (j = 1; j <= n; j++) {
      if (S1[i - 1] == S2[j - 1]) {
        LCS[i][j] = LCS[i - 1][j - 1] + 1;
      } else if (LCS[i - 1][j] >= LCS[i][j - 1]) {
        LCS[i][j] = LCS[i - 1][j];
      } else {
        LCS[i][j] = LCS[i][j - 1];
      }
    }

  int index = LCS[m][n];
  char longest_CS[index + 1];
  longest_CS[index] = '\0';

  int i = m, j = n;
  while (i > 0 && j > 0) {
    if (S1[i - 1] == S2[j - 1]) {
      longest_CS[index - 1] = S1[i - 1];
      i--;
      j--;
      index--;
    }

    else if (LCS[i - 1][j] > LCS[i][j - 1])
      i--;
    else
      j--;
  }

  printf("LCS: %s", longest_CS);
}

int main() {
    char S1[20], S2[20];
    printf("Enter the 1st string: - \n");
    scanf("%s",&S1);
    printf("Enter the 2st string: - \n");
    scanf("%s",&S2);
  longest_CS(S1,S2);
  printf("\n");
  getch();
}
