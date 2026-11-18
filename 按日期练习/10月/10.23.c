#include <stdio.h>
// 常量宏
#define N 100

double function_1(int n);

int main(void) {
    // 只读变量 const 
    // const double pi = 3.1415;
    double t[N];            // 正整数
    // 8 Byte * 7 
    // 首元素赋值 （下标/编号/索引）    长度为n的数组，合法下标0～n-1
    t[0] = 3.14;
    t[1] = 2.1;
    t[6] = 3.6;
    printf("%f %f %f\n", t[0], t[1], t[6]);//c语言不检查数组下标越界，非法数值为随机数

    int salary[N] = {1, 2, 3};
    // salary[0] = 1;
    // salary[1] = 2;
    // salary[3] = 0;
//二维数组一维可以忽略，二维不可忽略


    int n;
    double pi;
    pi = 3.14;
    char gender;


    scanf("%d", &n);
    double result = function_1(n);
    printf("%f\n", result);
    return 0;
}

double function_1(int n) {
    if (n == 1) {
        return 1;           // 1.0
    }
    return n * function_1(n - 1);
}
int N;
    scanf("%d", &N);
    int nums[N];
    // 存储 N 个整数
    for (int i = 0; i < N; i++) {
        scanf("%d", &nums[i]);
    }

    printf("nums首元素的内存地址: %p\n", &nums[0]);
    printf("nums的内存地址: %p\n", nums);

    int result = find_max(nums, N);         // 首元素的内存地址   nums  --  &nums[0]
    //只要找到首元素，就能找到整个数组
    printf("MAX: %d\n", result);
    
    reverse(nums, N);
    for (int i = 0; i < N; i++) {
        printf("%d ", nums[i]);
    }
    putchar('\n');
    return 0;
}

// int find_max(int *arr, int n)
int find_max(int *arr, int n) {            // 内存地址 等价于arr[0]
    int t = arr[0];    // 临时的擂台,取出这个地址中存储的变量值，即arr[0]
    for (int i = 1; i < n; i++) {
        if (arr[i] > t) {
            t = arr[i];
        }
    }
    return t;
}

void reverse(int arr[], int n) {
    int i, j;
    i = 0;
    j = n - 1;
    while (i <= j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    } 
}