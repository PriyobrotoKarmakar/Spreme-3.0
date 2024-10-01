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
 int main(){
    ListNode* head = NULL;
    ListNode* first = new ListNode(10);
    ListNode* second = new ListNode(20);
    ListNode* third = new ListNode(30);
    ListNode* fourth = new ListNode(40);
    ListNode* fifth = new ListNode(50);
    first->next = second;
    head = first;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    printLL(head);
    return 0;


 }