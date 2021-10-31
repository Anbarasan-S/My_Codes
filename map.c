#include<stdio.h>

int main()

{
    
int 
  input,rows,ctr=0,inctr=0,oddvalue=1,evenvalue=2,val,even_row=2,odd_row=1,column_until;
    
      printf("Enter the input number and rows: ");
    
      scanf("%d%d",&input,&rows);
    
      val=oddvalue*input;
    
      while(ctr<rows)  
      {
 
        if(ctr%2==0&&ctr!=0)
        
        {
            
          oddvalue*=3;
            
          odd_row+=3;
        
        }
        
        else if(ctr%2==1&&ctr!=1)
        
        {
            
          evenvalue*=2;
            
          even_row*=2;
        
        }
 
       
        if(ctr%2==0)
        
        {
            
          val=oddvalue*input;
            
          column_until=odd_row;
        
        }
        
        else if(ctr%2==1)
        
        {
            
          val=evenvalue*input;
            
          column_until=even_row;
            
          if(odd_row==1)
            
          {
                
            odd_row=0;
            
          }
        }
        inctr=0;
        while(inctr<column_until)      
        {
            
          printf("%d ",val);
            
          if(ctr%2==0)
            
          {
                
            val+=2;
            
          }
            
          else
            
          {
                
            val++;
            
          }
 
          inctr++;
        }
          ctr++;       
        printf("\n");    
    
      }
    
      return 0;

}