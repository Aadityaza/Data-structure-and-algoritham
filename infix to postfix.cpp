#include<iostream>
using namespace std;
#define size  10//size of stack

typedef struct stack{
    int top=-1;
    int arr[size];
}stack;

void push(stack *s,int a){

    s->top++;
    s->arr[s->top]=a;
}

char pop(stack* s){
    s->top--;
    return s->arr[s->top+1];

}
void disp(struct stack* s){
     while((s->top)>-1){
        cout<<(char)pop(s);
    }
    if((s->top)<-1){
        cout<<"stack is empty cannot accpess";
    }
}
int main(){
    int arr[size];
    int expr[]={'(','A','+','B',')'};
    stack op;
    stack post;

    for(int i=0;i!=5;i++){
        if(expr[i]=='('){
        push(&op,expr[i]);
    }
     if(expr[i]=='*'||expr[i]=='+'||expr[i]=='-'||expr[i]=='/'){
        push(&op,expr[i]);
    }
    char temp;
     if(expr[i]==')'){
        while((temp=pop(&op))!='('){
            push(&post,temp);
        }
    }
    if(expr[i] < 91 && expr[i]>64){
        push(&post,expr[i]);
    }
    }


    disp(&post);
    cout<<endl;


}
