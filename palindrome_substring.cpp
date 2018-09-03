string Solution::longestPalindrome(string A) 
{
    int n = A.size();
    vector<vector<bool>> dp(n, vector<bool>(n));
    
    int maxlength = true;
    
  //  memset(dp, false, n*n*sizeof(int));
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            dp[i][j] = false;
        }
    }
    
    
    for(int i = 0; i < n; i++)
    {
         dp[i][i] = true;
    }
    int start = 0;
    for (int i = 0; i < n-1; ++i)
    {
        if (A[i] == A[i+1])
        {
            dp[i][i+1] = true;
            start = i;
            maxlength = 2;
        }
    }
    
    for(int length = 3; length <= n; length++)
    {
        for(int index = 0; index <= n - length; index++)
        {
            int end_index = index + length - 1;
            
            if((dp[index + 1][end_index - 1]) && (A[index] == A[end_index]))
            {
                dp[index][end_index] = true;
                
                if(length > maxlength)
                {
                    maxlength = length;
                    start = index;
                }
            }
        }
    }
    
    string temp = A.substr(start, maxlength);
    
    return temp;
    
    
    
}

