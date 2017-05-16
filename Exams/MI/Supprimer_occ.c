void main()
{
    char *S = "TotoLoulou";
    while (*S!='\0')
    {
        S++;
       strcpy(S, strchr(S, 'o'));

    }
    printf("S = %s", S);
}
