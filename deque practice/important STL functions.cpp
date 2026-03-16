#include <list> // Header

//useful functions 

deque<int> dq;

dq.push_back(10);
dq.push_front(5);

dq.pop_back();
dq.pop_front();

dq.front();
dq.back();

dq[2];        // random access

dq.size();

dq.empty();

dq.clear();

sort(dq.begin(),dq.end());
