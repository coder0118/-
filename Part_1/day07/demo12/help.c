static _show(int a, int b, int c)
{
    printf("%d + %d = %d\n", a, b, c);
}

void twoNumAdd(int a, int b)
{
    _show(a, b, a + b);
}