void Allers_retours(int tab[m][n], int T[L] , int m, int n) 
{
	for (i=0 ; i<m ; i++) 
	{
		if (i%2 == 0) 
		{
			debut = 0 ;
			pas = 1 ;
			fin = n ;
		} 
		else 
		{
			debut = n-1;
			pas = -1;
			fin = -1;
		}
		while (debut != fin) 
		{	
			T[(i*m)+j] = Tab[i][j];
			printf("  %i", tableau[i][j]);
			debut += pas;
		}
	}
}