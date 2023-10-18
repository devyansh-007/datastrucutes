//Check if a link list is palindrome or not
bool isPalindrome(ListNode* head) {
        ListNode* temp=new ListNode(head->val);
        ListNode* temp2=head->next;
        ListNode* orgh=temp;
        while(temp2!=NULL){
            temp->next=new ListNode(temp2->val);
            temp2=temp2->next;
            temp=temp->next;
        }
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            ListNode* nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        ListNode* newHead=prev;
        cout<<endl;
        while(temp!=NULL){
            cout<<temp->val;
            temp=temp->next;
        }
        cout<<endl;
        while(orgh!=NULL){
            
            if(orgh->val!=newHead->val){
                return false;
            }
            orgh =orgh->next;
            newHead =newHead->next;
        }
        return true;
    }