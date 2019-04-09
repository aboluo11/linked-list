#include <iostream>
#include <assert.h>

#include "List.h"

int main() {
    List list = List();

    int sz = 100000;

    for(int i=0; i<sz; i++){
        list.push(i);
    }

    assert(list.peek() == sz-1);
//    for(int i=sz-1; i>=0; i--){
//        assert(list.pop() == i);
//    }

    return 0;
}