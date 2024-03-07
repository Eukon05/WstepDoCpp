#include <iostream>
using std::cout, std::endl;

class List{
    class Element{
        public:
        int value;
        Element* next = nullptr;
    };

    Element* start = nullptr;

    public:
    void add(int x){
        Element * el = new Element;
        el->value = x;

        if(start == nullptr){
            start = el;
        }
        else {
            Element* end = start;
            while(end -> next != nullptr)
                end = end -> next;

            end->next = el;
        }
    }

    void print(){
        Element* end = start;
        while(end != nullptr){
            cout << end->value << " ";
            end = end -> next;
        }
    }

    Element* get(int index){
        int i = 0;

        Element* end = start;
        while(end != nullptr && i < index){
            end = end -> next;
            i++;
        }

        if(i != index)
            return nullptr;
        else
            return end;
    }

    bool remove(int index){
        if(index == 0){
            Element* el = start;
            start = el -> next;

            delete el;
            return true;
        }

        int i = 0;

        Element* prev = start;
        while(prev != nullptr && i < index - 1){
            prev = prev -> next;
            i++;
        }

        if(i + 1 != index)
            return false;
        
        Element* rem = prev -> next;
        prev -> next = rem -> next;

        delete rem;
        return true;
    }
};

int main(){
    List l;
    l.add(1);
    l.add(2);
    l.add(5);
    l.add(30);
    l.add(90);
    l.add(45);

    l.print();
    cout << endl;
    cout << l.get(2)->value;

    cout <<endl;
    l.remove(1);
    l.print();

    cout <<endl;
    l.remove(0);
    l.print();

    cout <<endl;
    l.remove(2);
    l.print();
}