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
int fat2(int n2)
{
    int f, T;
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
    a = f(5);
    b = f(4) + 1;
}