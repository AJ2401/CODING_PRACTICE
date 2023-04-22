  int i=0;
        int n=nums.length;
        while(i<n && nums[i]>target)
        {
            i++;
        }
        if(i>=n)
        {
            i++;
        }
        return(i);