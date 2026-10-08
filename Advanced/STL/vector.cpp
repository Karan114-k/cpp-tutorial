#include <iostream>
#include <vector>
using namespace std;
int main(){
    // cout<<"I'm going to learn Vectors."<<endl;
    vector<int> vec;
    vec.push_back(2);
    vec.push_back(7);
    vec.push_back(6);
    vec.push_back(8);
    
    vec.emplace_back(9);
    vec.pop_back();
    for(int val:vec){
        cout<<val<<" ";
    }

    cout<<endl;
    cout<<"Value at index: " <<vec[3]<< " or " << vec.at(3)<<endl;
    cout << "is vector empty ? " << vec.empty() << endl;     // To check a vector have elements or not?
    vec.erase(vec.begin() + 1, vec.begin() + 3);    // To remove more elements from vector 
    vec.insert(vec.begin() + 1, 9);                 // To add an element at specific position
    cout<<"First Entry is " <<vec.front()<<endl;    
    cout<<"Last Entry is " <<vec.back()<<endl;
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;

    // vector with initilize values
    vector<int> arr = {1,2,3,8,9};
    for(int val:arr){
        cout<<val<<" ";
    }
}
