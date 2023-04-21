#include <bits/stdc++.h>

using namespace std; 
set<int> st;
// 2 features of set that differentitaes from a vector
// 1.automatically sorts the numbers for you 
// 2.there cannot be duplicates
st.insert(3) // 3
st.insert(4) // 3,4
st.insert(10) // 3,4,10
st.insert(5) // 3,4,5,10
st.insert(5) // 3,4,5,10
st.insert(5) // 3,4,5,10
st.insert(5) // 3,4,5,10
st.insert(5) // 3,4,5,10
st.insert(5) // 3,4,5,10


// automatically helps you sort the numbers
// keeps duplicates
priority_queue<int> pq;
pq.push()

sort(vector.begin(),vector.end())
vector.push(x);
sort(vector.begin(),vector.end())

deque.push_front()
deque.push_back()

// key value pair
// con of this is that it comes at a higher time complexity than a normal vector
map<int, int> mm;
mm[-1]=100;


int main () {
    vector<int> g = {1,2,3};
    for (auto a : g) cout << a << " ";
    g.push_back(4);
    cout << g[1];
    g.resize(10);
    g.erase(v.begin() + 1);
    
    vector<int> v;
	v.push_back(2); // [2]
	v.push_back(3); // [2, 3]
	v.push_back(7); // [2, 3, 7]
	v.push_back(5); // [2, 3, 7, 5]
	v[1] = 4; // sets element at index 1 to 4 -> [2, 4, 7, 5]
	v.erase(v.begin() + 1); // removes element at index 1 -> [2, 7, 5]
	// this remove method is O(n); to be avoided
	v.push_back(8); // [2, 7, 5, 8]
	v.erase(v.end()-1); // [2, 7, 5]
	// here, we remove the element from the end of the list; this is O(1).
	v.push_back(4); // [2, 7, 5, 4]
	v.push_back(4); // [2, 7, 5, 4, 4]
	v.push_back(9); // [2, 7, 5, 4, 4, 9]
	cout << v[2]; // 5
	v.erase(v.begin(), v.begin()+3); // [4, 4, 9]
	// this erases the first three elements; O(n)
    
    //substrings
    string str = "I love potatoes my boi";
    string str2 = str.substr(0, 15); // "I love potatoes"
    size_t pos = str.find("my");
    string str3 = str.substr(pos);
    
    //pairs
    pair<string, int> p = {Taka, 119}; //initialise pair
    cout << p.first << " " << p.second << endl; //print pair
    p.first = "You can reasign pairs after declaration"; // reasign pairs
    cout << p.first << " " << p.second << endl;
    
    //tuples
    tuple<string, int, string> t{"Taka", 119, "test"}; //initialise tuple with elements already known
    cout << get<1>(t); // print elements from tuple
    
    int a = 1, b = 2, c = 3;
    tuples<int, int, int> t2 = tie(a, b, c); //initialise tuple with variables as elements
    cout << get<0>(t2) << " " << get<1>(t2) << " " << get<2>(t2) << "\n";
    get<0>(t2) = 5; //reasign elements in tuple
    cout << get<0>(t2) << " " << get<1>(t2) << " " << get<2>(t2) << "\n";
    int d, e, f;
    tie(d, e, f) = t2;
    cout << d << " " << e << " " << f << "\n";
    
   
}

for (int element : v) {
	cout << element << " "; //prints the values in the vector
}























