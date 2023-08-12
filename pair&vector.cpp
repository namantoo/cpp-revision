// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

using namespace std;

void explainPair(){
    pair<int, int> p = {1,3};
    
    cout<<p.first<<" "<<p.second<<endl;
    
    pair<int, pair<int,int>> q = {1,{4,5}};
    
    cout<<q.first<<" "<<q.second.first<<endl;
    
    pair<int, int> arr[] = { {1,2} , {4,5}, {6,7}};
    
    cout<<arr[1].second<<" should be 5"<<endl;
}
int main() {
    // Write C++ code here
    cout << "Hello world!"<<endl;
    explainPair()
    return 0;
}

 