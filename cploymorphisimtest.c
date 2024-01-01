#include <stdio.h>

int _abs(int i)
{
    if (i < 0)
    {
        return (-i);
    }
    else
    {
        return (i);
    }
}

long _abs(long i)
{
    if (i < 0)
    {
        return (-i);
    }
    else
    {
        return (i);
    }
}

float _abs(float i)
{
    if (i < 0)
    {
        return (-i);
    }
    else
    {
        return (i);
    }
}
int main()
{
    int i = -89;
    long l = -1000000000;
    float f = -2.5;

    printf("%d\n%ld\n%f\n", _abs(i), _abs(l), _abs(f));
    return (0);
}