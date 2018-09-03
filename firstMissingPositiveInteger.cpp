int Solution::firstMissingPositive(vector<int> &A) 
{
    sort(A.begin(), A.end());
    int firstPosIndex = -1;
    for(int i = 0; i < A.size(); i++)
    {
        if(A[i] > 0)
        {
            firstPosIndex = i;
            break;
        }
    }
    
    if(firstPosIndex == -1)
    {
        return 1;
    }
    
    if(A[firstPosIndex] != 1)
    {
        return 1;
    }

    int expectedValue = 1;
    
    for(int i = firstPosIndex; i < A.size(); i++)
    {
        if(A[i] != expectedValue)
        {
            return expectedValue;
        }
        
        expectedValue = expectedValue + 1;
        
    }
    
    
}

