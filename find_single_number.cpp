int Solution::singleNumber(const vector<int> &A) 
{
    int prod = A[0];
    for(int i = 1; i < A.size(); i++)
    {
        prod = prod^A[i];
    }
    
    return prod;
}

