#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct node{
    int data;
    struct node* ptr;

}node;
node*start=NULL;

void add()
{
    struct node* p=NULL;
	p=new(node);
	cout<<"Enter data:";
	int d;
	cin>>d;
	p->data=d;;
	p->ptr=start;
	start=p;

}

void dispSll(node* p){
    cout<<p->data<<endl;
    if(p->ptr!=NULL){
        dispSll(p->ptr);
    }
}

int main()
{
    	char c;
again:
   add();
   cout<<"Do you want to enter again?  :";
   cin>>c;
   cout<<endl;
		if(c=='y'){
			goto again;
		}
	dispSll(start);
	return 0;
}
