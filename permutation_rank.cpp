
int factorial(int i)
{
    int fact = 1;
    if(i == 1 )
        return 1;
    
    else if(i == 2)
    {
        return 2;
        
    }
    
    else return (i*factorial(i-1));
}

int binarySearch(vector<int> v, int l, int r, int x)
{
    int mid = (l + r)/2;
    
    if(v[mid] == x)
    {
        return mid;
    }
    
    else if(v[mid] > x)
    {
        return(binarySearch(v, l, mid, x ));
    }
    
    else
    {
        return(binarySearch(v, mid, r, x));
    }
    
    
}

int charToInt(char ch)
{
    int temp = int(ch) - 96;
    return temp;
}


int Solution::findRank(string A)
{
    vector<int>compute(A.size());
    
    for(int i = 0; i < A.size(); i ++)
    {
        compute[i] = charToInt(A[i]);
    }
    
    vector<int> temp;
    temp = compute;
    
    int first_element = temp[0];
    
    sort(compute.begin(),compute.end());
    
    int index_of_first_element = binarySearch(compute, 0, compute.size() - 1, first_element);
    
    int no_of_elements_before_our_term = index_of_first_element + 1;
    
    int answer = 0;
    
    answer = ((no_of_elements_before_our_term%1000003)*(factorial(A.size()))%1000003)%1000003;
    
    
    for(int i = 1; i <  A.size(); i ++)
    {
        int index = binarySearch(compute, 0, compute.size() - 1, temp[i] );
        int no_of_elems = index + 1;
        answer = ((answer%1000003) + ((no_of_elems%1000003)*(factorial(A.size() - 1))%1000003))%1000003;
    }
    
    return answer;
}

