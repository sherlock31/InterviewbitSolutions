int Solution::isPalindrome(string A) 
{
    
 bool check = true;
 
 int front_pointer = 0;
 int rear_pointer = A.size() - 1;

 while(front_pointer<=rear_pointer)
 { 
     if(front_pointer == rear_pointer)
     {
         check = false;
     }
     
     while((!isalnum(A[front_pointer])) && (front_pointer<(A.size())))
     {
         front_pointer = front_pointer + 1;
     }
     
     while((!isalnum(A[rear_pointer]))&&(rear_pointer >= 0))
     {
         rear_pointer = rear_pointer - 1;
     }
    
    if(front_pointer == rear_pointer)
    {
        return 1;
    }
     
    if(tolower(A[front_pointer]) != tolower(A[rear_pointer]))
        return 0;
     
     rear_pointer = rear_pointer - 1;
     front_pointer = front_pointer + 1;
     
 }
 
 return 1;
 
 
 
}

