#include<iostream>
using namespace std;
class Queue{
    public:
    int value;
    class Queue* next;
    Queue* newQueue1;
    Queue(int);
    void Insert(int);
    void Pop(class Queue**);
    void display();
    bool is_Empty();
    ~Queue();
};
Queue::~Queue(){
    delete newQueue1;
}
Queue::Queue(int root){
    this->value = root;
    this->next = NULL;
}
void Queue::Insert(int val){
    Queue* This = this;
    newQueue1 = new Queue(val);
    while(This){
        if(!This->next){
            This->next = newQueue1;
            return;
        }
        This = This->next;
    }
    delete newQueue1;
}
void Queue::Pop(Queue ** This){
    Queue* Next = *This,
    *NNext =Next->next;
    *This = NNext;
    NNext = NULL;
    Next = NULL;
}
void Queue::display(){
    Queue* This = this;
    while(This){
        cout<<This->value<<" ";
        This = This->next;
    }
    cout<<endl;
}
bool Queue::is_Empty(){
    if(this) return false;
    else return true;
}
int main(){
    Queue* newQueue = new Queue(1);
    newQueue->Insert(2);
    newQueue->Insert(3);
    newQueue->Insert(4);
    newQueue->Insert(5);
    newQueue->Insert(6);
    newQueue->display();
    newQueue->Pop(&newQueue);
    newQueue->display();
    newQueue->Pop(&newQueue);
    newQueue->display();
    newQueue->Pop(&newQueue);
    newQueue->display();
    newQueue->Insert(2);
    newQueue->Pop(&newQueue);
    newQueue->display();
    newQueue->Insert(3);
    newQueue->Pop(&newQueue);
    newQueue->Pop(&newQueue);
    newQueue->Pop(&newQueue);
    newQueue->Insert(17);
    newQueue->display();
    while(!newQueue->is_Empty()){
        newQueue->Pop(&newQueue);
        newQueue->display();
    }
    delete newQueue;
return 0;
}
