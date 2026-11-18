//低地址在下面，从下往上来
#include<stdio.h>
#define N 5
void find_max(int *p,int n);
int main()
{  int *p_arr[3];//指针数组,数组的每一个元素变成了一个指针，二维数组本质上传递的是指针数组
    int nums[N]={10,40,34,24,65};
    find_max(nums,N);
    return 0;

}
void find_max(int *arr,int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {if((*(arr+i))>max){max=*(arr+i);}
        
    }
    printf("max:%d",max);

}
int find_max_3(int mat[][3],int m,int n)//二维数组作为函数参数

{
    int result=mat[0][0];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]>result){
                result=mat[i][j];
            }
        }
    }
}
//传入自定义函数的数组，实际上传入的就是一个内存地址、
//对数组中的第i个元素进行修改：*(arr+i)=100
//数组作为函数形参的等价转换
//nt arr[], int n → 编译器自动转为 int *arr, int n
//形参 arr 本质就是指针变量，保存数组首元素地址（基地址）。
//下标写法 和 指针写法完全等价

//arr+i：基地址 + 偏移，不是直接地址+i字节，自动乘以元素类型长度（int 就是4字节）。
//数组传参传递的是首地址，不会拷贝整个数组
//函数里修改 arr[i] / *(arr+i)，是直接操作主函数中原数组nums对应的内存，外面原始数组的值会被改变。
//区分两个东西（高频易错）
//arr（指针本身）：是函数内局部变量，存地址；修改 arr = xxx，只改变这个局部指针，不影响外面数组。函数结束，这个指针变量销毁。
//*(arr+i)：访问指针指向的内存（原数组），修改这里，主函数的nums跟着变。