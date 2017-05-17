void Allers_retours(int tab[10][10], int T[100] , int n, int m)
{
    int i, j=0, init, pas, fin ;
	for (i=0 ; i<n ; i++)
	{
		if (i%2 == 0)
		{
			init = 0 ;
			pas = 1 ;
			fin = m ;
		}
		else
		{
			init = m-1;
			pas = -1;
			fin = -1;
		}
		while (init != fin)
		{
		    T[j++] = tab[i][init];
			init = init + pas;
		}
	}
}
void main()
{
    int i;
    int tab[10][10] = {{2, 2,4}, {4, 5,98}, {8, 6,32},{94, 25,398}};
    int T[100];
    Allers_retours(tab, T, 4,3);
    for (i =0; i<12; i++)
    {
        printf("\t %d" , T[i]);
    }

}
