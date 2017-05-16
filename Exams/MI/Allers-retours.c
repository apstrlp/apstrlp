void Allers_retours(int tab[3][2], int T[6] , int m, int n)
{
    int i, j, debut, pas, fin ;
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
//j=0;
		//	T[(i*m)+j] = tab[i][j];
			printf("  %i", tab[i][debut]);
			debut += pas;
			//j++;
		}
	}
}
void main()
{
    int tab[3][2] = {2, 2, 4, 5, 8, 6};
    int T[6];
    Allers_retours(tab, T, 3,2);
}
