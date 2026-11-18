#include <stdio.h>

struct Fraction {
    long long num, den;
};

struct Complex {
    struct Fraction real, imag;
};

long long gcd(long long a, long long b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    if (b == 0) return a;
    return gcd(b, a % b);
}

// 约分：分母保证为正，负号放分子
struct Fraction reduce(struct Fraction f) {
    long long g = gcd(f.num, f.den);
    f.num = f.num / g;
    f.den = f.den / g;
    if (f.den < 0) {
        f.num = -f.num;
        f.den = -f.den;
    }
    return f;
}

// 题目要求：分数加法 addF
struct Fraction addF(struct Fraction a, struct Fraction b) {
    struct Fraction res;
    res.num = a.num * b.den + b.num * a.den;
    res.den = a.den * b.den;
    return reduce(res);
}

// 题目要求：复数加法 addC
struct Complex addC(struct Complex a, struct Complex b) {
    struct Complex res;
    res.real = addF(a.real, b.real);
    res.imag = addF(a.imag, b.imag);
    return res;
}

// 打印分数（实部）
void printFrac(struct Fraction f) {
    if (f.den == 1) {
        printf("%lld", f.num);
    } else {
        printf("%lld/%lld", f.num, f.den);
    }
}

// 打印虚部，末尾带i
void printImag(struct Fraction f) {
    if (f.den == 1) {
        printf("%lld", f.num);
    } else {
        printf("%lld/%lld", f.num, f.den);
    }
    printf("i");
}

int main() {
    long long an, ad, bn, bd, cn, cd, dn, dd;
    scanf("%lld%lld%lld%lld%lld%lld%lld%lld",
          &an, &ad, &bn, &bd, &cn, &cd, &dn, &dd);

    struct Complex A, B, sum;
    A.real.num = an; A.real.den = ad;
    A.imag.num = cn; A.imag.den = cd;
    B.real.num = bn; B.real.den = bd;
    B.imag.num = dn; B.imag.den = dd;

    A.real = reduce(A.real);
    A.imag = reduce(A.imag);
    B.real = reduce(B.real);
    B.imag = reduce(B.imag);

    sum = addC(A, B);

    printFrac(sum.real);
    printf(" ");
    printImag(sum.imag);
    return 0;
}
