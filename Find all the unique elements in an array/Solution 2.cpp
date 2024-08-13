// if there is only one unique element present

int findUnique(int *arr, int size)
{
    //Write your code here
    int x = 0;
    for(int i = 0; i < size; i++) {
        x = x ^ arr[i];
    }
    return x;
}
