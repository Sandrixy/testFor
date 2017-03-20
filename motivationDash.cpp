#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;	//for brevity

int main() {
	vector<int> v = {0,1,2,3,4,5,6,7,8,9};
	
	for(auto i= size_t{0}; i < v.size(); ++i) //classical indexed for loop
	    cout<< ++v[i] <<" - ";
	cout<<'\n';
	
	std::for_each( v.begin(), v.end(), [](int& x) //STL for_each with a lambda
	    {
	        cout<< ++x <<" - ";
	    } );
	cout<<'\n';
	
	for( auto& x : v ) // range based for
	    cout<< ++x <<" - ";
	cout<<'\n';
    
    cout<<endl;
    return 0;
}
