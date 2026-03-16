//header

#include <list>


//useful functions

list<int> l;

l.push_back(10);
l.push_front(5);

l.pop_back();
l.pop_front();

l.front();
l.back();

l.insert(it, 20);  //it means iterator

l.erase(it);

l.size();

l.reverse();

l.sort();

l.clear();
