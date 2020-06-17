#include <stdio.h>
#include<stdlib.h>
struct Node{
   
     int data;
   
     struct Node *next;
     
   struct Node*prev;

};


void push(struct Node**head,int d){
 
   
struct Node* new=(struct Node*)malloc(sizeof(struct Node));

    new->data=d;

    if(*head==NULL)

    {
     
   new->next=NULL;
 
       new->prev=NULL;
 
       *head=new;
  
  }
  
  else{

        struct Node* temp=*head;

        while(temp!=NULL)
   
     {
    
   
     if(new->data>temp->data)
   
     {
     
       temp=temp->next;

            if(temp->next==NULL)

            {
          
      new->next=NULL;

                new->prev=temp;
  
              temp->next=new;

                return;
 
           }
 
       }
  
      else{

            if(temp==*head)

            {
   
             new->next=*head;
 
               new->prev=NULL;

                temp->prev=new;
   
             *head=new;
   
         }
       
     new->next=temp;
 
           temp->prev->next=new;

            new->prev=temp->prev;

            temp->prev=new;

            
            
        
}
        
        
  
      } 
  
    }

}


void median(struct Node* head,int arr[],int c)

{
   int i=1,a,b,q;
   q=c;
    if(c%2==0)
   
 {
      
  c=c/2;

        while(i!=c)
 
       head=head->next;

        a=head->data;

        b=head->next->data;
q--;
        arr[q]=a+b/2;

        
  
  }

    else{

        c=c+1;
        
c=c/2;

        while(i!=c)
     
   head=head->next;
       q--;
       arr[q]=head->data;

    }
 
   

}



int main()
 {

	

int n,x,i;

scanf("%d",&n);
int arr[n];
struct Node *head=NULL;

for(i=1;i<=n;i++)

{

scanf("%d",&x);

push(&head,x);

median(head,arr,i);

}
for(i=0;i<n;i++)
{
    printf("%d",arr[i]);
}



	return 0;

}