#include<stdio.h>

typedef struct tower{
    int h;
    char tow [10];

}tower;
void print_tower(struct tower t){
    int n=t.h;
    for (int i=1;i<=n;i++){
        for (int j=n;j!=(n-i);j--){
           printf("#");
        }
        printf("\n");
    }
    printf("\n");
}
void make_tow(struct tower *t,int n){
    t->h=n;
    for(int i=1;i<=n;i++){
        t->tow[i]=i;
    }
}
void print_all(struct tower a,struct tower b,struct tower c){
    print_tower(a);
    print_tower(b);
    print_tower(c);
    printf("____________________________________________________________________");
}

int main(){
    struct tower t1;
    struct tower temp;
    struct tower dest;
    make_tow(&t1,5);
    make_tow(&temp,1);
    make_tow(&dest,3);
    print_all(t1,temp,dest);

    return 0;


}
