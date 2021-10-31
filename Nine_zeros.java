import java.util.LinkedList;
import java.util.Scanner;
import java.util.List;
public class Nine_zeros{
   
    static List<String> vec=new LinkedList<String>();
   
    static void generateComb()
    {
        vec.add("9");
        int temp=0;
      for(int i=0;i<10000;i++)
      {
       vec.add(vec.get(temp)+"0");
       vec.add(vec.get(temp)+"9");
       temp++;
      }
    }
    public static void main(String args[])
    {
        int n;
        Scanner sc=new Scanner(System.in);
        generateComb();
        n=sc.nextInt();
        for(int i=0;i<vec.size();i++)
        {
            if(Integer.parseInt(vec.get(i))%n==0)
            {
                System.out.println(vec.get(i));
                break;
            }
            // System.out.println(vec.get(i));
        }
    }
}
