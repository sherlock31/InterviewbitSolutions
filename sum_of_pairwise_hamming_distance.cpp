
int countSetBit(int n)
{
    int count = 0;
    
    while(n)
    {
        n = n & (n-1);
        count = count + 1;
    }
    
    return count;
}



int hammingDistanceCalculate(int x, int y)
{
    int z = x^y;
    int distance = countSetBit(z);
   
    return distance;   
}

int Solution::hammingDistance(const vector<int> &A) 
{
    int answer = 0;

    for(int i = 0; i < 32; i ++)
    {
        int count = 0;
        for(int j = 0; j < A.size(); j ++)
        {
            if(A[j] & (1 << (i - 1)))
            {
                count = count + 1;
            }
        }
        
        answer = (answer%1000000007 + ((count)*(A.size() - count)*2)%1000000007)%1000000007;
    }
    
    
    
    
    return answer;
    
}

