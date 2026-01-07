#include"Vector.h"
#include<assert.h>
void test_create(){
    printf("Test create-------\n");
    Vector *v=Creat(0);
    assert(v==NULL);
    v=Creat(2);
    assert(v!=NULL);
    assert(Size(v)==2);
    assert(v->capacity==2);
    assert(v->data[0]==0&&v->data[1]==0);
    Destroy(&v);
    assert(v==NULL);
}
void test_push_pop(){
    printf("Test push_pop-------\n");
    Vector *v=Creat(2);
    assert(v!=NULL);
    Push_back(v,5);
    assert(*(Back(v))==5);
    assert(Size(v)==3);
    Push_back(v,10);
    assert(*(Back(v))==10);
    assert(v->data[2]==5&&v->data[3]==10);
    assert(Size(v)==4);
    Pop_back(v);
    assert(*(Back(v))==5);
    assert(Size(v)==3);
    Pop_back(v);
    assert(*(Back(v))==0);
    assert(Size(v)==2);
    Destroy(&v);
    assert(v==NULL);
}
void test_resize_clear(){
    printf("Test resize_clear-------\n");
    Vector* v=Creat(2);
    assert(Size(v)==2);
    Resize(v,10);
    assert(Size(v)==10);
    v->data[8]=10;
    assert(v->data[8]==10);
    Clear(v);
    assert(v->data==NULL);
    assert(v->size==0&&v->capacity==0);
    Destroy(&v);

}
int main(){
    test_create();
    test_push_pop();
    test_resize_clear();
}