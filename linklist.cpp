include <iostream>

using namespace std;
class link_list;
class node{
    public:
    int data;
    node* next;
    node(){
     
    }
    
    
};
class link_list{
    public:
    node* head;
    link_list(int x){
        head=new node;
        head->data=x;
        head->next=NULL;
        
    }
    void add_front(int x){
        node* temp=head;
        head=new node;
        head->next=temp;
        head->data =x;
        
    }
    void print(){
        node *node_ptr=head;
        while (node_ptr!=NULL){
            cout<<node_ptr->data<<endl;
            node_ptr=node_ptr->next;
        }
    }
};


int main()
{
   link_list L(10);
   L.add_front(9);
   L.print();
}
