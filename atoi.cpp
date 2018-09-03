int char2int(char c)
{
    if(c == '0')
        return 0;
        
    else if (c == '1')
        return 1;
        
    else if (c == '2')
        return 2;
    
    else if (c == '3')
        return 3;
        
    else if (c == '4')
        return 4;
        
    else if (c == '5')
        return 5;
        
    else if (c == '6')
        return 6;
        
    else if (c == '7')
        return 7;
        
    else if (c == '8')
        return 8;
        
    else if (c == '9')
        return 9;
}


int Solution::atoi(const string A) 
{
    
    
    string B;
    
    int start = 0;
    
    int index = 0;
    
    if(A[0] == '+')
    {
        start = start + 1;
        
    }
        
        
    int multiplier = 1;
    if(A[0] == '-')
    {
        start = start + 1;
        multiplier = -1;
    }
    
    
  //  cout<<"A[5] is "<<A[5]<<endl;
    
   // cout<<"start is "<<start<<endl;
    
    int check = 0 ; 
    
    for(int i = start; i < A.size(); i ++)
    {
        if((!isdigit(A[i]))||(A[i] == ' '))
        {
   //         cout<<"value of i is "<<i<<endl;
            check = 1;
            index = i - 1;
            break;
        }
    }
    
    if(check == 0)
    {
     //   cout<<" I AM HERE ON 73"<<endl;
        index = A.size() - 1;
    }
    
    
 //   cout<<"index is "<<index<<endl;
    
    B = A.substr(start, index+1-start);
  //  cout<<"B is "<<B<<endl;
    
    if(B.size() >= 10 && multiplier == 1)
    {
        return INT_MAX;
    }
    
     if(B.size() >= 10 && multiplier == -1)
    {
        return INT_MIN;
    }
    
    
    
    int number = 0;
    
    for(int i = B.size() - 1; i >= 0; i --)
    {
 //       cout<<"B[i] is "<<B[i]<<endl;
        int temp1 = char2int(B[i]);
  //      cout<<"temp1 is "<<temp1<<endl;
       long long int temp2 = pow(10, B.size() - 1 - i);
  //     cout<<"temp2 is "<<temp2<<endl;
        
        number = number + temp1*temp2;
        
    //    cout<<"number is "<<number<<endl;
    }
    number = multiplier*number;
    return number;
    
}

