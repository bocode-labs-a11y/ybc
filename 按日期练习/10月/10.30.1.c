#include <stdio.h>
#define N 5
#define MAX_LENGTH 20

int main(void) {
    int nums[N] = {10, 20, 30, 40, 50};
    char movie[MAX_LENGTH] = "Tom and Jerry";
    int matrix[3][3] = {1,2,3,4,5,6,7,8,9};

    int *p_1 = &nums[2];
    int *p_2 = &nums[0];
    printf("%ld\n", p_2 - p_1);//地址字节差/单个元素字节大小
    printf("%p\n",&matrix[0]);//取第0行整行元素
    //数组指针:可以一次性存数组里的多少东西
    int(*p)[3]=&matrix[0];//matrix的第0行，得到长度为3的一维数组,matrix[0]等价于matrix[0][0]
    p++;
    printf("%p\n",p);
    return 0;
}
int find_max_3(int mat[][3], int m, int n) {
    int result = mat[0][0];
    for (int i = 0; i < m; i++) {           //编译器将数组退化成数组指针，int(*mat)[3]
        for (int j = 0; j < n; j++) {          //退化成一维数组进行偏移操作,获得第零行第零列的系统内操作*(*(mat+0)+0)     mat[0]--&mat[0][0]
            
            if (mat[i][j] > result) {
                result = mat[i][j];           //*(*(mat+i)+j)   &mat[i][j]
            }
        }
    }
    return result;
}
