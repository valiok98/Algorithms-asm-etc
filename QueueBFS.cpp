#include "QueueBFS.h"
#include <iostream>
using namespace std;
QueueBFS::QueueBFS(int root)
{
    this->value = root;
    this->next = NULL;
}

QueueBFS::~QueueBFS()
{
    //dtor
    delete newQueueBFS1;
}

bool QueueBFS::is_Empty(){
    if(this) return false;
        else return true;
}
void QueueBFS::Insert(int val){
    QueueBFS* This = this;
    newQueueBFS1 = new QueueBFS(val);
    while(This){
        if(!This->next){
            This->next = newQueueBFS1;
            return;
        }
        This = This->next;
    }
    delete newQueueBFS1;
}
void QueueBFS::Pop(QueueBFS ** This){
    QueueBFS* Next = *This,
    *NNext =Next->next;
    *This = NNext;
    NNext = NULL;
    Next = NULL;
}
void QueueBFS::display(){
    QueueBFS* This = this;
    while(This){
        cout<<This->value<<" ";
        This = This->next;
    }
    cout<<endl;
}

