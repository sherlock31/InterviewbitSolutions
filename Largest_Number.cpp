
int compare(int A, int B)
{
    
    string Astr = to_string(A);
    string Bstr = to_string(B);
    
    string string_AB = Astr.append(Bstr);
    string string_BA = Bstr.append(Astr);
    
    return string_AB.compare(string_BA) > 0 ? 1: 0;
    
}

string Solution::largestNumber(const vector<int> &A) 
{
    vector<int> temp;
    temp = A;
    string ans;
    
    sort(temp.begin(),temp.end(),compare);
    
    bool zero_check = true;
    
    for(int i = 0; i < A.size(); i++)
    {
        if(temp[i] != 0)
            zero_check = false;
            
        ans.append(to_string(temp[i]));
    }
    
    if(zero_check)
        ans = "0";
  
    
    return ans;
    
}

