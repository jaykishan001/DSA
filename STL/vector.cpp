#include<bits/stdc++.h>
using namespace std;

int main () {
    
    // we are intializing  a empty vector
    vector<int> v;
    
    // we are pushing value 1 in it {1} 
    //in push_back if we want to pass pair in vector we need to pass it in ({1,2}) 

    v.push_back(1);

    // it is same as  push back it dynamicly increase the size of vector and add 2 in it {1,2} it is faster then push_back in emplace back we dont need curly braces{} to pass the value we can pass it directly in () this

    v.emplace_back(2);

    // we can define vector as a pair data type

    vector< pair<int,int>> vec;

    vec.push_back({1,2});
    vec.emplace_back(1,2);
  
    //two iterate on vector we can use iterator - iterator point to the memory address 
     
    vector<int>::iterator it =v.begin();  /*v.begin it will point to the memory address it will give the memory address not the element if we want to get element at that memory address we use *(it) */
    it++; //In v we have 1,2 and v.begin point to memory address first means 1 and we are increasing the  it++ means now it point to next memory address in which 2 is present  now we printing it by giving *(it)

     cout<<*(it) << " ";


    //end point to the memory location that is right after the 2 in order to acceess the too we need to do it--;

    vector<int> ::iterator it = v.end();
    it--;
    cout<<*(it);
    
    //other way to iterate on vector using for each loop - auto automatically assign data type

    for(auto it: v) {
        cout<< it << " ";
    }

    // if we want to earse the element in an array 
    
    // {10,20, 12,23}
    v.erase(v.begin()+1); // it will delete the 20 from vector and give {10, 12,23}
    
    // v.erase(start. end) end is not included 

    v.erase(v.begin()+2, v.begin()+4);

    //if we want to insert element in an vector

    vector<int> v (2,100); //{100,100};

    v.insert(v.begin(), 300); // {300,100,100}

    vector<int> copy (2,50); //{50,50}
    v.insert(v.begin(), copy.begin(), copy.end()); //{50.50,3000,10,10 100,100}

    //{10,20} 
    cout<< v.size(); //2
    
    //{10,20}
    v.pop_back(); //{10} pop out the last element

    cout<< v.empty(); //return  is vector empty or not in boolean

    v.clear(); //erases the entire vector 
   


}