/*
learning to use c++ standard template library(stl)
1. vectors
2. Sets
3. Maps
4. Pairs
5. Iterators
*/

// to compile the code in c++11 -> g++ --std=c++11 -o object_file c++_stl.cpp
// to run the object file       -> ./object_file

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

//comparator function
bool comaparator_func(int x, int y){
	//sort in descending order
	return x>y;
}
void vector_applications(){
	// vectors: A typical vector implementation consists, internally, of a pointer 
	// to a dynamically allocated array, and possibly data members holding the capacity
	// and size of the vector. 
	// insertion: O(1) [amortized run time acheived via "Table Doubling"]

	// vector operations
	vector<int> x;// = { 11,2,33,22,101,55 };
	//anathor way to insert elements	
	x.push_back(11);
	x.push_back(53);
	x.push_back(1);
	x.push_back(3);
	x.push_back(10);
	x.push_back(78);
	
	// sort array using stl(merge sort i.e. O(NlogN))
	sort(x.begin(),x.end());
	// binary search for an element in the sorted array(O(logN))
	int item = 22;
	bool present = binary_search(x.begin(), x.end(), item); // true (as item found)

	x.push_back(100);
	x.push_back(100);
	x.push_back(100);
	x.push_back(100);	
	x.push_back(132);

	// Iterator: a pointer-like object that can be incremented with ++, dereferenced with *,
	// and compared against another iterator with !=.
	vector<int>::iterator it1 = lower_bound(x.begin(), x.end(),100); // >=
	vector<int>::iterator it2 = upper_bound(x.begin(), x.end(),100); // >
	
	cout<< *it1 <<" "<< *it2 <<endl; // it1 points to the first 100 and it2 points to first element greater than 100
	cout<<it2-it1<<endl;

	// sorting using a comaparator function
	sort(x.begin(), x.end(), comaparator_func);

	// using an iterator to print a vector
	vector<int>:: iterator it3;
	for(it3 = x.begin();it3<x.end();it3++){
		cout<<*it3<<" ";
	}
	cout<<endl;

	// printing the vector in a new c++ way
	for(int n:x){ 
		// here we cannot alter the contents of the vector by incrementing or decre. the val. of n
		cout<<n<<" ";
	}
	cout<<endl;
	for(int &n:x){ 
		// here we can alter the contents of the vector by incrementing or decre. the val. of n, 
		// as we are passing by reference
		n++;
		cout<<n<<" ";
	}		
}

void working_with_Sets(){

	// sets (underlying data sturcture -> balanced binary search trees like red-black trees or AVL trees)
	// insertion: O(logN)
	// search   : O(logN)
	// deletion : O(logN)

	set<int> S;
	S.insert(10);
	S.insert(45);
	S.insert(1);
	S.insert(-2);

	for(int x: S)
		cout<<x<<" ";
	cout<<endl;

	// using the "auto" keyword
	/*
	The auto keyword specifies that the type of the variable that is being declared will be automatically
	deducted from its initializer. In case of functions, if their return type is auto then that will be 
	evaluated by return type expression at runtime.
	eg. auto x = 4;
	*/
	auto it = S.find(1);// iterator pointing to 1
	if(it==S.end())
		cout<<"searched item not present"<<endl;
	else{
		cout<<"found"<<endl;
		cout<<*it<<endl; // dereferencing iterator
	}

	// as S is already sorted so it itself has a method named upper_bound() and lower_bound()
	auto it2 = S.lower_bound(42);
	auto it3 = S.lower_bound(100);// returns iterator that points to S.end() as upper bound of 100 not found
	cout<<"lower bound of 42 in set S "<<*it2<<endl;

	// remove element from set
	S.erase(1);
	for(int x: S)
		cout<<x<<" ";
	cout<<endl;
}

void using_maps(){
	// Map: data structure used is red-black trees
	// insertion: O(logN) eg. m[key] = value
	// search   : O(logN) eg. m.find(key)
	// deletion : O(logN) eg. m.erase(key)

	map<char,int> count;// mapping from char to int
	set<string> s;
	string x = "Pranoy";
	// counting the frequency of each char in x
	for(char c: x){
		count[c]+=1;
	}
	cout<<"string:\t"<<"Pranoy"<<endl;
	cout<<"char\tfrequency"<<endl;	
	for(char c: x){
		cout<<c<<"\t"<<count[c]<<endl;
	}

	map<int,int> m;// mapping from int to int
	// map[key] = value
	m[1] = 10;
	m[2] = 200;	
	m[3] = 1000;
	// find an element
	auto key = 1;
	auto it = m.find(1);
	if(it==m.end())
		cout<<"searched key not present"<<endl;
	else{
		cout<<"key found"<<endl;
		cout<<it->first<<endl; // accesing the key
		cout<<it->second<<endl; // accesing the value
	}	

	// printing the entire map
	cout<<"map"<<endl;
	cout<<"key\t"<<"value"<<endl;
	for(it = m.begin();it!=m.end();it++){
		cout<<it->first<<"\t"<<it->second<<endl;
	}
	// lower bound and upper bound for map m key = 2 
    cout << "m.lower_bound(2) : "<< "\tKEY = "; 
    cout << m.lower_bound(2)->first << '\t'; 
    cout << "\tELEMENT = "<< m.lower_bound(2)->second << endl; 
    cout << "m.upper_bound(2) : "<< "\tKEY = "; 
    cout << m.upper_bound(2)->first << '\t'; 
    cout << "\tELEMENT = "<< m.upper_bound(2)->second << endl; 
}
int main(){
	// vector_applications()
	// working_with_Sets()
	using_maps();
	return 0;
}
