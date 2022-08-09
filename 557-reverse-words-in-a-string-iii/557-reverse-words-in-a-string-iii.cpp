class Solution {
public:
    string reverseWords(string s) {
          int i,a=0,b,m=s.size()-1;
        char temp;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                 b=i-1;
                 while(a<b)
                 {
                     char temp=s[b];
                     s[b]=s[a];
                     s[a]=temp;
                     b--;
                     a++;
                 }
              a=i+1;
            }
        }
        while(a<m)
        {
            char temp=s[a];
            s[a]=s[m];
            s[m]=temp;
            a++;
            m--;
        }
      return s;
    }
};