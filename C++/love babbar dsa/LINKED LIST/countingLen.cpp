 #include<iostream>
 using namespace std;
 class ListNode{

    public:
        int data;
        ListNode* next;
        ListNode(int data){
            cout<<" I am inside parameterized list"<<endl;
            this->data = data;
            this->next = NULL;
        }
 };
 void printLL(ListNode* head){
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
    return 0;


 }