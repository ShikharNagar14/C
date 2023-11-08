int max2_eff(int arr[], int n)
{
    int largest = 0;
    int res = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {

            res = largest;
            largest = i;
        }

        else if(arr[i] < arr[largest])
        {
            if (res == -1 || arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return arr[res];
}

int main()
{
    int arr[10] = {2, 4, 3};
    int n = 3;
    // display(arr,n);
    printf("%d", max2_eff(arr, n));
}
