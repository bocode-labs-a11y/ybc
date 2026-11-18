int bubbleSort(int arr[], int n)
{
    int cnt = 0;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                cnt++;
            }
        }
    }
    return cnt;
}