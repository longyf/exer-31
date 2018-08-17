#ifndef IS_POP_ORDER_H
#define IS_POP_ORDER_H
#include <iostream>
#include <stack>
#include <vector>

using namespace std;
    bool IsPopOrder(vector<int> &pushV, vector<int> &popV) {
        if (pushV.empty() && popV.empty()) return true;
        else if (pushV.empty()) return false;
        else if (!pushV.empty() && popV.empty()) return false;
        else if (pushV.size() != popV.size()) return false;
        else {
            decltype(pushV.size()) index1 = 0;
            decltype(popV.size()) index2 = 0;
            
            stack<int> temp;
            while (index1 != pushV.size() + 1 && index2 != popV.size()) {
				cout<<index1<<" "<<index2<<endl;
                if (temp.empty() || temp.top() != popV[index2]) {
                    temp.push(pushV[index1++]);
                }
                else {
                    temp.pop();
                    index2++;
                }
            }
            
            if (temp.empty()) return true;
            else return false;
        }
    }
#endif
