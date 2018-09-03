void merge(vector<int> arr, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    /* create temp arrays */
    vector<int> L(n1); 
    vector<int> R(n2);
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(vector<int> arr, int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
 
        merge(arr, l, m, r);
    }
}

void Solution::nextPermutation(vector<int> &A) 
{
    int n = A.size();
if(A.size() > 2)
{
    int index1 = 0;
    int index2 = 0;

    bool check = false;
    
    for(int i = A.size()-2; i > 0; i--)
    {
        if(A[i] < A[i+1])
        {   check = true;
            index1 = i;           
            break;
        }
    }
    
  //   cout<<"check is "<<check<<endl;
  //   cout<<"index1 is "<<index1<<endl;
    
    for(int i = A.size()-1; i > index1; i--)
    {
        if(A[i] > A[index1])
        {
            index2 = i;
            break;
        }
    } 
    
    // cout<<"index2 is "<<index2<<endl;
    
    int temp = A[index1];
    
    A[index1] = A[index2];
    
    A[index2] = temp;

    //reverse elements from index1 + 1 to end
    int start = index1 + 1;
    int end = A.size() - 1;
    
    while(start <= end)
    {
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
        
        start = start + 1;
        end = end - 1;
    }
   
    
    if(!check)
    {
        mergeSort(A, 0, A.size() - 1);
    }
    
}   
   
else if(A.size() == 2)
{
    int temp = A[0];
    A[0] = A[1];
    A[1] = temp;
}
   
}

