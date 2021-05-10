#include <iostream>
#include <vector>

std::vector<int> Static(5);

int memcheckFailDemo(std::vector<int> arrayStack, std::vector<int> arrayHeap) {
    std::vector<int> Stack(5);

    Static.at(100) = 0;
    Stack.at(100) = 0;

    for (int i = 0; i <= 5; i++)
    {
        Stack.at(i) = 0;
    }

    std::vector<int> array(5);
    array.at(100) = 0;

    arrayStack.at(100) = 0;
    arrayHeap.at(100) = 0;

    for (unsigned int i = 0; i <= arrayStack.size(); i++) {
        arrayStack.at(i) = 0;
    }
    for (unsigned int i = 0; i <= arrayStack.size(); i++) {
        arrayHeap.at(i) = 0;
    }
    
    return 0;
}

int main() {
    std::vector<int> arrayStack(5);
    std::vector<int> arrayHeap(5);
    try
    {
        memcheckFailDemo(arrayStack, arrayHeap);
    }
    catch(std::out_of_range&)
    {
        return -1;
    }

    return 0;
}
