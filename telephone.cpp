#include<iostream>
using namespace std;
string printDigit(long int num)
{
   long int copy=num,power=1;
   string prototype,str;
   while(copy)
   {
    power*=10;
    copy/=10;
   }
   copy=num;
   power/=10;
   while(power)
   {

       switch((copy/power)%10)
       {
        case 0:
           str="Zero";
        break;
       case 1:
           str="One";
        break;
        case 2:
           str="Two";
        break;
        case 3:
           str="Tree";
        break;
        case 4:
           str="Four";
        break;
        case 5:
            str="Five";
        break;
        case 6:
           str="Six";
        break;
        case 7:
           str="Seven";
        break;
        case 8:
           str="Eight";
        break;
        case 9:
           str="Nine";
        break;
       }
       str.append(" ");
       prototype.append(str);
       power/=10;
   }
return prototype;
}
int main()
{
    long int num;
    cin>>num;
    string value=printDigit(num);
    cout<<value;
    return 0;
}
