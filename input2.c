int fat(int n1)
{
    int f;
    int n;
    int y;
    f = 0;

    while (n > 0)
    {
        f = f * n;
        n = n - 1;
    }

    return f;
}
{
    int a, b;
    fat(5, 9, 8);
}