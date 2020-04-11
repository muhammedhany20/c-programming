void rotate(char matrix[10][10])
{
  char p[10][10];
  for (int i=0; i < 10; i++) {
    for (int j=0; j < 10; j++) {
      p[i][j] = matrix[i][j];
    }
  }
  for (int i=0;i<10;i++)
    {
      for (int j=0;j<10;j++)
		{
		  matrix[i][j]=p[9-j][i];
		}
    }
}
