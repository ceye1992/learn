//�˺��������n�����Ǻ���

void calculaterTriangularNumber (int n)
{
    int i, triangularNumber = 0;

    for(i = 1; i < n; ++i)
        triangularNumber += i;

    printf("Triangular number %i is %i.\n", n, triangularNumber);
}

int main (void)
{
    calculaterTriangularNumber(10);
    calculaterTriangularNumber(20);
    calculaterTriangularNumber(50);

    return 0;
}
