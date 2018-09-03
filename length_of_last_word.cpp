int Solution::lengthOfLastWord(const string A) 
{
    int count = 0 ;
    int start = 0;
    
    
    if(isalpha(A[A.size() - 1]))
    {
   //     cout<<"line 9 "<<endl;
        start = A.size() - 1;
    }
    
    int check = 0;
    for(int i = A.size() - 1; i >= 0; i--)
    {
        if(isalpha(A[i]))
        {
            start = i;
            check = 1;
    //        cout<<"i when loop breaks is "<<i<<endl;
            break;
        }
        
        //start = start + 1;
    }
    
    if(check == 0)
    {
        return 0;
    }
    
 //   cout<<"check is "<<check<<endl;
 //   cout<<"start is "<<start<<endl;
    
    
    for(int i = start; i >= 0; i --)
    {
        
        if(A[i] == ' ')
        {
            break;
        }
        count = count + 1;
    }
 
 return count;   
}

