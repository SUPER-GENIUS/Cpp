int com(int n,int r)
{
    int t=1;
    for(int i=1;i<=r;i++)
    {
        t=(t*(n-i+1))/i;
    }
    return t;
}