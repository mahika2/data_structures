#include<stdio.h>
#include<stdlib.h>
struct Node
{
        int data;
        struct Node* next;
};
struct Node* insert_at_beg(struct Node *head,int new_val)
{
        struct Node *node=(struct Node*)malloc(sizeof(struct Node));
        node->data=new_val;
        node->next=head;
        head=node;
//      printf("%d",head->data);
      return node;
}
void print(struct Node* n)
{
        while(n!=NULL){
                printf("%d",n->data);
                n=n->next;
        }
}
int main(int argc,char *argv[])
{
        int i;
        struct Node* head=NULL;
        for(i=1;i<argc;i++)
        {
                int val=atoi(argv[i]);
                head=insert_at_beg(head,val);
                //printf("%d",head->data);
        }
                print(head);

}
    
