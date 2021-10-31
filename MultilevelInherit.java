
import java.util.Scanner;

 class Student{
    private String name,rollno;
    Scanner sc=new Scanner(System.in);
    Student()
    {
        System.out.println("Enter the name of the Student: ");
        name=sc.next();
        System.out.println("Enter the roll number of the Student: ");
        rollno=sc.next();
    }
    public String displayStudent()
    {
        return name;
    }
}
class Marks extends Student{
int mark1,mark2,mark3;
   Marks()
   {
       System.out.println("Enter the mark1: ");
       mark1=sc.nextInt();
       System.out.println("Enter the mark2: ");
       mark2=sc.nextInt();
       System.out.println("Enter the mark3: ");
       mark3=sc.nextInt();
   }
}
 class Calculate extends Marks{
    int totalmark=0;
    public void Calc()
    {
       totalmark+=mark1+mark2+mark3;
       System.out.println("The total mark of the Student "+displayStudent()+" is "+totalmark);
    }
} 
public class MultilevelInherit {
    public static void main(String args[])
    {
        Calculate c=new Calculate();
        c.Calc();
    }
}
