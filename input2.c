int fat(int a, int b, int c)
{
    a = 1;
    b = 20;
    c = b + a * 2;

    while (b < 10)
    {
        c = b + 1;
    }

    c = 60;

    return c;
}
float teste(int a)
{
    int b;
    a = 1;
    b = 3;

    if (a == b)
    {
        a = 2;
    }
    else
    {
        a = 3;
    }

    a = 77;
    return a;
}
int chamaFuncao(int b)
{
    int a;
    a = 100;
    teste(a);
    print(a);
    return a;
}
{
    fat(5, 9, 8);
}