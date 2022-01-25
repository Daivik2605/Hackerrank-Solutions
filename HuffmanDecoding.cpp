void decode_huff(node * root, string s) {
    struct node* curr = root;
    string ans = "";
    for(int i=0; i<s.length(); i++){
        if(s[i]=='0'){
            curr = curr->left;
        }else{
            curr = curr->right;
        }
        if(curr->left==NULL && curr->right==NULL){
            ans += curr->data;
            curr = root;
        }
    }
    cout<<ans;
}
