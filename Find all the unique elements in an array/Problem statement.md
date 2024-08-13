<h1>Find all the unique elements in an array</h1>
<p>The user inputs the <code>size</code> of an array <code>arr</code> and then inputs every element of the array</p>
<p>Find all the unique elements in the array</p>


<!-- if there is only one unique element present -->
int findUnique(int *arr, int size)
{
    //Write your code here
    int x = 0;
    for(int i = 0; i < size; i++) {
        x = x ^ arr[i];
    }
    return x;
}
