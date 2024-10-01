 #include<iostream>
 using namespace std;
 class ListNode{

    public:
        int data;
        ListNode* next;
        ListNode(int data){
            this->data = data;
            this->next = NULL;
        }
 };
 void printLL(ListNode* &head){
    ListNode* temp = head;
    while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
 }
 int count(ListNode* head){
    ListNode* temp = head;
    int len = 0;
    while(temp){
        len++;
        temp = temp->next;
    }
    return len;
 }
 bool InsertAtHead(ListNode* &head,int data){
    ListNode* newnode = new ListNode(data);
    if(head==NULL){
        head = newnode;
        return true;
    }
    newnode->next = head;
    head = newnode;
    return true;

 }
 bool InsertAtTail(ListNode* &head,int data){
    ListNode* newnode = new ListNode(data);
    if(head==NULL){
        head = newnode;
        return true;
    }
    ListNode* temp = head;
    while(temp->next!=NULL){//never wrtie temp!=NULL
        temp = temp->next;
    }
    temp->next = newnode;
    cout<<"yes";
    return true;
 }
 bool InsertAtAnyPos(ListNode* &head,int data, int pos){
    if(pos<=1){
        InsertAtHead(head,data);
        return true;
    }
    else if(pos>=count(head)+1){
        InsertAtTail(head,data);
        return true;
    }
        ListNode* temp = head;
        while(pos!=1){
            pos--;
            temp = temp->next;
        }
        ListNode* newnode = new ListNode(data);
        newnode->next = temp->next;
        temp->next = newnode;
        return true;
 }
 int main(){
    ListNode* head = NULL;
    ListNode* first = new ListNode(10);
    ListNode* second = new ListNode(20);
    ListNode* third = new ListNode(30);
    ListNode* fourth = new ListNode(40);
    ListNode* fifth = new ListNode(50);
    head = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    printLL(head);
    cout<<endl<<"Number of elements: "<<count(head)<<endl;
    cout<<"Inserting at head: "<<endl;
    InsertAtHead(head,60);
    printLL(head);
    cout<<endl<<"Inserting at tail: "<<endl;
    InsertAtTail(head,70);
    printLL(head);
    cout<<endl<<"Inserting at any position: "<<endl;
    InsertAtAnyPos(head,80,3);
    printLL(head);
    
    return 0;


 }