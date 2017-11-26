#include <iostream>

using namespace std;

class Arraylist{
private :
    const int INIT_SIZE = 10;
    int* array;
    int allocatedSize;
    int currentSize;

    void fillNewArray(int* newArray){
        for (int i = 0; i < currentSize; i++) {
            newArray[i] = array[i];
        }
    }
    void addToNotFullArray(int n){
        array [currentSize] = n;
        currentSize++;
    }
    void addToFullArray(int n){
        int* newArray = new int[allocatedSize *2];
        allocatedSize*=2;
        fillNewArray(newArray);
        delete array;
        array = newArray;
        addToNotFullArray(n);
}

public:
    Arraylist(){
        array = new int [INIT_SIZE];
        currentSize = 0;
        allocatedSize = INIT_SIZE;
    }
    void add (int n){
        if (currentSize < allocatedSize){
            addToNotFullArray(n);
        }
        else{
            addToFullArray(n);
        }

    }
    void trimToSize(){
       int *newArray = new int (currentSize);
       for(int i = 0; i < currentSize; i++){
            newArray[i] = array[i];
       }
       delete array;
       int* array = newArray;
       allocatedSize = currentSize;
    }

    void remove (int index){
        if (currentSize == 0) {
           cout<<"Not found element form delete";
           return;
        }
        if (index == currentSize) {
            currentSize--;
            return;
        }
        currentSize--;
        for (int i=index-1; i<currentSize; i++) {
            array[i] = array[i+1];
        }
    }
    void add(int n, int index){
        if (index <= currentSize){
            if(currentSize +1 == allocatedSize){
                int* newArray = new int[allocatedSize *2];
                allocatedSize*=2;
                fillNewArray(newArray);
                delete array;
                array = newArray;
        }
        for (int i = currentSize; i > index; i--){
            array[i] = array[i-1];
        }
        array[index] = n;
        currentSize++;
     }
        if (index > currentSize){
            cout<<"Index not current"<<endl;
        }
    }

    int get(int index) {
        if (index >= currentSize){
            cout<<"Index of bound"<<endl;
            return -1;
        }
        return array[index];
    }

    void print(){
        for (int i = 0; i < currentSize; i++){
            cout<<array[i]<<"  ";
        }
        cout<<endl;
    }
};
int main(){

    Arraylist* list = new Arraylist;
    for (int i = 0;i < 12; i++){
        list-> add(i);
    }
    list->print();
    list->remove(4);
    list->print();
    list->add(110,11);
    list->print();
}
