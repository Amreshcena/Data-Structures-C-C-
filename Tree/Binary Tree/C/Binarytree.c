#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

struct Node *root=NULL;
void Treecreate()
{
 struct Node *p,*t;
 int x;
 struct Queue q;
 create(&q,100);
 
 printf("Enter root value ");
 scanf("%d",&x);
 root=(struct Node *)malloc(sizeof(struct Node));
 root->data=x;
 root->lchild=root->rchild=NULL;
 enqueue(&q,root);
 
 while(!isEmpty(q))
 {
 p=dequeue(&q);
 printf("Enter left child of %d ",p->data);
 scanf("%d",&x);
 if(x!=-1)
 {
 t=(struct Node *)malloc(sizeof(struct Node));
 t->data=x;
 t->lchild=t->rchild=NULL;
 p->lchild=t;
 enqueue(&q,t);
 }
 printf("Enter right child of %d ",p->data);
 scanf("%d",&x);
 if(x!=-1)
 {
 t=(struct Node *)malloc(sizeof(struct Node));
 t->data=x;
 t->lchild=t->rchild=NULL;
 p->rchild=t;
 enqueue(&q,t);
 }
 }
}
void Preorder(struct Node *p)
{
 if(p)
 {
 printf("%d ",p->data);
 Preorder(p->lchild);
 Preorder(p->rchild);
 }
}
void Inorder(struct Node *p)
{
 if(p)
 {
 Inorder(p->lchild);
 printf("%d ",p->data);
 Inorder(p->rchild);
 }
}
void Postorder(struct Node *p)
{
 if(p)
 {
 Postorder(p->lchild);
 Postorder(p->rchild);
 printf("%d ",p->data);
 }
}
int main()
{
 Treecreate();
  printf("\nPreOrder ");
 Preorder(root);
  printf("\nInOrder ");
 Inorder(root);
 printf("\nPostOrder ");
 Postorder(root);
 
 return 0;
  }


//OUTPUT::
  /*
Enter root value 10
Enter left child of 10 20
Enter right child of 10 30
Enter left child of 20 -1
Enter right child of 20 -1
Enter left child of 30 -1
Enter right child of 30 -1

PreOrder 10 20 30 
InOrder 20 10 30 
PostOrder 20 30 10

*/
