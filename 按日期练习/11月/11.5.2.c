#include<stdio.h>
typedef struct Complex Complex;//给数据类型起别名
struct Complex {
    double real;
    double imag;
};
struct Complex add(struct Complex a,struct Complex b)
{
    struct Complex result;
    result.real=a.real+b.real;
    result.imag=a.imag+b.imag;
};

int compare_xomplex_equal(struct Complex *a,struct Complex *b);

int main()
{
struct Complex num1,num2;

}
int compare_xomplex_equal(struct Complex *a,struct Complex *b)
{
    if(a->real==b->real&&a->imag==b->imag)
    {
        return 1;       
    }
    else
    return 0;

}