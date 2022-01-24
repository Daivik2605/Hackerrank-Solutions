bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* turtle = head;
    SinglyLinkedListNode* hare = head;
    while(hare!=NULL && hare->next!=NULL){
        turtle = turtle->next;
        hare = hare->next->next;
        if(turtle==hare){
            return true;
        }
    } 
    return false;
}
