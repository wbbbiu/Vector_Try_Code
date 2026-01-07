#ifndef VECTOR
#define VECTOR
typedef enum{
    VEC_OK=1,
    VEC_ERROR_NULL,
    VEC_ERROR_EMPTY ,
    VEC_ERROR_FULL , 
    VEC_ERROR_ARG ,
     VEC_ERROR_MEM 

}VecError;
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
extern const char *Error[];
typedef struct 
{
    int  *data;
    size_t size;
    size_t capacity;
}Vector;
Vector* Creat(size_t size);
int Resize(Vector* v,int new_capacity);
int Clear(Vector*v);
int Push_back(Vector *v,int x);
int Pop_back(Vector*v);
int* Back(const Vector *v);
int* at(const Vector *v,size_t i);
Vector* copy(const Vector*v);
void Destroy(Vector **v);
void Pri_Error(int t);
int Size(const Vector*v);
#endif