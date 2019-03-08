#include<iostream>
#include<stdio.h>
    using namespace std;
    /* Link list Node */
    struct Node
    {
        int data;
        struct Node* next;
    };
    int intersectPoint(struct Node* head1, struct Node* head2);
    void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
    {
        struct Node* new_node = new Node;
        new_node->data  = new_data;
        new_node->next = NULL;
        if (*head_ref == NULL)
            *head_ref = new_node;
        else
            (*tail_ref)->next = new_node;
        *tail_ref = new_node;
    }




    /* Driver program to test above function*/
    int main()
    {
        int T,i,n1, n2, n3,l,k;
        cin>>T;
        while(T--)
        {
            cin>>n1>>n2>>n3;
            struct Node *head1 = NULL,  *tail1 = NULL;
            for(i=1; i<=n1; i++)
            {
                cin>>l;
                append(&head1, &tail1, l);
            }
            struct Node *head2 = NULL,  *tail2 = NULL;
            for(i=1; i<=n2; i++)
            {
                cin>>l;
                append(&head2, &tail2, l);
            }
            struct Node *head3 = NULL,  *tail3 = NULL;
            for(i=1; i<=n3; i++)
            {
                cin>>l;
                append(&head3, &tail3, l);
            }
            if (tail1 != NULL)
                tail1->next = head3;
            if (tail2 != NULL)
                tail2->next = head3;
            cout << intersectPoint(head1, head2) << endl;
        }
        return 0;
    }

int getSizeOfList(Node * head){
    int size =0;
    while(head)
    {
        head = head->next;
        size +=1;
    }
    
    return size;
}
Node * moveListByN(Node * head, int N)
{
    for(int i = 0; i<N ;i++)
    {
        head = head->next;
    }
    
    return head;
}
int intersectPoint(Node* head1, Node* head2)
{
    int size1 = getSizeOfList(head1);
    int size2 = getSizeOfList(head2);
    
    int N = abs(size1 - size2);
    if(size1 > size2)
        head1 = moveListByN(head1,N);
    else
        head2 = moveListByN(head2,N);
    
    while(head1 && head2)
    {
        if (head1->data == head2->data)
            break;
        else{
            head1 = head1->next;
            head2 = head2->next;
        }
        
    }
    return head1->data;
}