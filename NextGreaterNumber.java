import java.util.Scanner;
import java.util.*;
public class NextGreaterNumber {
    public static void swap(char s[],int i,int in)
    {
        char temp=s[i];
        s[i]=s[in];
        s[in]=temp;
    }
  public static void main(String args[])
  {
      Scanner sc=new Scanner(System.in);
      char s[]=sc.next().toCharArray();
      int n=s.length;
      int i;
      for(i=n-1;i>0;i--)
      {
          if(s[i]>s[i-1])
          {
              break;
          }
      }
      if(i==0)
      {
          System.out.println("Not possible");
      }
      int max=s[i-1];
      int index=i-1;
      for(int j=i;j<s.length;j++)
      {
          char c=s[j];
          if(c>max&&s[index]>c)
          {
              index=j;
          }
      }
      swap(s,i,index);
      Arrays.sort(s,i,n);
      System.out.println(s);
  }  
}
