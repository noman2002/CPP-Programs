vector<int> Solution::subUnsort(vector<int> &A) {
    int n = A.size();
    int max = A[0];
    int min = A[n-1];
    int fd = -1;
    int ld = -1;
    
    for(int i=1; i<n; i++)
    {
        if(A[i]>=max)
        {
            max = A[i];
        }
        else if(A[i]<max)
        {
            ld = i;
        }
    }
    for(int i=n-2; i>=0; i--)
    {
        if(A[i]<=min)
        {
            min = A[i];
        }
        else if(A[i]>min)
        {
            fd = i;
        }
    }
    vector<int> ans;
    if(ld == -1 && fd == -1)
    {
        ans.push_back(-1);
    }
    else
    {
        ans.push_back(fd);
        ans.push_back(ld);
    }
    return ans;
}
