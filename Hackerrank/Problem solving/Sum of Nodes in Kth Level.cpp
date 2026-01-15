#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    
    Node(int val){
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

void constructTree(Node*& head, string s){
    s.erase(s.begin());
    s.pop_back();
    
    if(s.size() == 0) return;
    
    int digit = 0;
    int i;
    for(i = 0; i < s.size(); i++){
        if(s[i] == '(') break;
        
        digit *= 10;
        digit += (s[i] - '0');
    }
    
    head = new Node(digit);
    
    string leftSide, rightSide;
    stack<char> chStack;
    
    int j;
    for(j = i; j < s.size(); j++){
        leftSide += s[j];
        if(s[j] == '(')
            chStack.push(s[j]);
        if(s[j] == ')')
            chStack.pop();
        if(chStack.empty())
            break;    
    }
    
    for(int k = j + 1; k < s.size(); k++){
        rightSide += s[k];
        if(s[k] == '(')
            chStack.push(s[k]);
        if(s[k] == ')')
            chStack.pop();
        if(chStack.empty())
            break;
    }
    
    constructTree(head->left, leftSide);
    constructTree(head->right, rightSide);
    
}

int getAns(Node*& head, int k, int level){
    if(head == nullptr) return 0;
    
    if(level == k)
        return head->val;
    
    return getAns(head->left, k, level + 1) + getAns(head->right, k, level + 1);
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int k;
    string s;
    cin >> k >> s;
    
    Node* root;
    
    constructTree(root, s);
    cout << getAns(root, k, 0) << endl;
    
    return 0;
}
