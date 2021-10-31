import java.util.*;

class LongestCommonSubstring{
    static String longestSubstr(String s1,String s2)
    {
        int m=s1.length();
        int n=s2.length();
        int[][] dp=new int[m+1][n+1];
        int max_len=0,row=0,col=0;
        for(int i=0;i<=s1.length();i++)
        {
            for(int j=0;j<=s2.length();j++)
            {
                if(i==0||j==0)
                dp[i][j]=0;
                else if(s1.charAt(i-1)==s2.charAt(j-1))
                {
                    dp[i][j]=1+dp[i-1][j-1];
                    if(max_len<dp[i][j])
                    {
                        max_len=dp[i][j];
                        row=i;
                        col=j;
                    }
                }
                else
                {
                    dp[i][j]=0;
                }
            }
        }
        String x="";
        while(dp[row][col]!=0)
        {
          x=s1.charAt(row-1)+x;
          row--;
          col--;            
        }
        System.out.println(x);
        return "hello";
    }
    public static void main(String args[])
    {
        String s1,s2;
        Scanner sc=new Scanner(System.in);
        s1=sc.next();
        s2=sc.next();
        System.out.println(longestSubstr(s1,s2));
    }
}