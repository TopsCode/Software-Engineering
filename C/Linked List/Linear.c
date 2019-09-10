# include <stdio.h>
# include <stdlib.h>

struct node
{
  int data;
  struct node *link;
};

struct node *insert(struct node *p, int n){
  struct node *temp;
  if(p==NULL){
      p=(struct node *)malloc(sizeof(struct node));
    
      if(p==NULL) {
          printf("Error\n");
          exit(0);
      }
    
    p-> data = n;
    p-> link = p;
  }
  else {
    temp = p;
    while (temp-> link != p)
      temp = temp-> link;
    temp-> link = (struct node *)malloc(sizeof(struct node));
    
    if(temp -> link == NULL){
      printf("Error\n");
      exit(0);
      }
    temp = temp-> link;
    temp-> data = n;
    temp-> link = p;
}
return (p);
} 

void printlist ( struct node *p )
{
    struct node *temp;
    temp = p;
    printf("The data values in the list are\n");
    
    if(p!= NULL)
    {
        do
        {
            printf("%d\t",temp->data);
            temp=temp->link;
        } while (temp!= p);
     }
     else
        printf("The list is empty\n");
}

void main()
{
    int n;
    int x;
    struct node *start = NULL ;
    start = insert ( start, 1 );
    start = insert ( start, 2);
    start = insert ( start, 3 );
    start = insert ( start, 4 );
    printf("The created list is\n");
    printlist ( start );
} 

