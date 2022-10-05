class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode(0);
        ListNode* ptr3=dummy;
        
        ListNode* ptr1=l1;
        ListNode* ptr2=l2;
        
        int carry=0;
        while(ptr1!=NULL && ptr2!=NULL)
        {
            int digit=(ptr1->val+ptr2->val+carry)%10;
            carry=(ptr1->val+ptr2->val+carry)/10;
            
            ptr3->next=new ListNode(digit);
            
            ptr1=ptr1->next;
            ptr2=ptr2->next;
            ptr3=ptr3->next;
            
        }
        if(ptr1==NULL)
        {
            while(ptr2!=NULL)
            {
                int digit=(ptr2->val+carry)%10;
                carry=(ptr2->val+carry)/10;
                
                ptr3->next=new ListNode(digit);
                
                ptr2=ptr2->next;
                ptr3=ptr3->next;
            }
        }
        
        if(ptr2==NULL)
        {
            while(ptr1!=NULL)
            {
                int digit=(ptr1->val+carry)%10;
                carry=(ptr1->val+carry)/10;
                
                ptr3->next=new ListNode(digit);
                
                ptr1=ptr1->next;
                ptr3=ptr3->next;
            }
        }
        
        if(carry>0)
        {
            ptr3->next=new ListNode(carry);
        }
        
        return dummy->next;
    }
};