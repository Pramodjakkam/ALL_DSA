// #include<iostream>
// using namespace std;
// struct node
// {
//     node *next;
//     int data;

// };
// struct node* head=new node;
// int insertatbeg(int d)
// {
//     struct node *p=new node;
//     p->data=d;
//     p->next=head;
//     head=p;


// }
// int insertatend(int d)
// {
//     struct node*p=new node;
//     p->data=d;
//     p->next=NULL;
//     struct node*q=new node;
//     q=head;
//     while(q->next!=NULL)
//     {
//         q=q->next;
//     }
//     q->next=p;
    
// }
// int insertinbetween(int d)
// {
//     struct node*p=new node;
//     p->data=d;
//     struct node*q=new node;
//     q=head;
//     while(q->data!=65)
//     {
//         q=q->next;
//     }
//     p->next=q->next;
//     q->next=p;
    
// }
// int ok()
// {
//     node *ptr=new node;
//     ptr=head;
//     while(ptr!=NULL)
//     {
//         cout<<ptr->data<<endl;
//         ptr=ptr->next;
       
//     }
// }

// int main()
// {
//     struct node *second=new node;
//     struct node *third=new node;
//     struct node *fourth=new node;
//     head->data=45;
//     head->next=second;
//     second->data=65;
//     second->next=third;
//     third->data=78;
//     third->next=fourth;
//     fourth->data=22;
//     fourth->next=NULL;
//     cout<<"Linked list before insertion"<<endl;
//     ok();
//     // cout<<"Inserting at the beginning"<<endl;
//     // insertatbeg(0);
//     // cout<<"Linked list after insertion at the Ending"<<endl;
//     // insertatend(99);
//     // ok();
//     cout<<"Insertion after 65 in  the linked list"<<endl;
//     insertinbetween(999);
//     ok();

//     return 0;
// }
#include <iostream>
 #include <vector>
 #define START_COUNT 1
 #define INCREMENT_COUNT 2
 #define END_COUNT 10


 struct listNode {
     int value;
     struct listNode *nextPtr;
 };

 typedef struct listNode ListNode;
 typedef ListNode* ListNodePtr;

 ListNodePtr createList(ListNodePtr sPtr, int val);
 void printList(ListNodePtr currentPtr);

 int main(void) {
     ListNodePtr list1Ptr;
     int counter = END_COUNT;

     list1Ptr = NULL;
     do
     {
         list1Ptr = createList(list1Ptr, START_COUNT);
         counter -= INCREMENT_COUNT;
     }while(counter>0);
     printf("List 1 is: ");
     printList(list1Ptr);

     printf("End of run.\n");

     return 0;
 }

 ListNodePtr createList(ListNodePtr sPtr, int val) {
     ListNodePtr previousPtr;
     ListNodePtr newPtr;
     newPtr = new ListNode;

     if (newPtr != NULL) {

         //Make 'newPtr' very first node
         newPtr->nextPtr =sPtr;
         newPtr->value = val;

         sPtr = newPtr;
         //(sPtr != NULL) is to check for [1] and (sPtr->nextPtr != NULL) for [2]
         while ((sPtr != NULL) && (sPtr->nextPtr != NULL) && (sPtr->value <= END_COUNT)) {
             previousPtr = sPtr; //[1]
             sPtr = sPtr->nextPtr; //[2]
             sPtr->value = previousPtr->value + INCREMENT_COUNT; //[1] and [2]
         }
     }
     else {
         printf("No memory available.\n");
     }

     //Set to the very first Node
     return newPtr;
 }

 int isEmpty(ListNodePtr sPtr) {
     return sPtr == NULL;
 }

 void printList(ListNodePtr currentPtr) {
     if (currentPtr == NULL) {
         printf("List is empty.\n\n");
     }
     else {
         while (currentPtr != NULL) {
             printf("%d ", currentPtr->value);
             currentPtr = currentPtr->nextPtr;
         }
         printf("*\n");
     }
 }