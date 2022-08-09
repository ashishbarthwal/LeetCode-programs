class Solution {
public:
    string reverseWords(string s) {
          int x,i,j,k,b,a=0,n=s.size();
        char temp;
        for(i=0;i<n;i++)
        {
            if(s[i]==' ')
            {
              int b=i-1;
            for(j=a,k=b;j<k;j++,k--)
            {
                temp = s[j];
                s[j]=s[k];
                s[k]=temp;
            }
            a=i+1;
            }
        }
        for(i=a,j=n-1;i<j;i++,j--)
        {
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
      return s;
    }
};