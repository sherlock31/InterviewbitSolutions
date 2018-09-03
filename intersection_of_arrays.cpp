vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) 
{
    int pointerA = 0;
    int pointerB = 0;
    
    bool check = false;
    
    vector<int> ans;
    
    while(pointerA <A.size() && pointerB < B.size())
    {
        if((pointerA >= A.size() - 1) && (pointerB >= B.size() - 1))
        {
            check = true;
        }
        
        
        if(A[pointerA] == B[pointerB])
        {
            ans.push_back(A[pointerA]);
            pointerA = pointerA + 1;
            pointerB = pointerB + 1;
        }
        
        else if(A[pointerA] < B[pointerB])
        {
            if(pointerA <= A.size() - 1)
                pointerA = pointerA + 1;
        }
        
        else if(A[pointerA] > B[pointerB])
        {   
            if(pointerB <= B.size() - 1)
                pointerB = pointerB + 1;
        }
        
    }
    
    return ans;

}

