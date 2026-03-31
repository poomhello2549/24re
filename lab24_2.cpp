#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

void printList(list<string> s){
	list<string>::iterator i;
	for( i = s.begin(); i != s.end(); i++){
		cout << *i << " ";
	}		
	cout << "\n";	
}

int main(){
	
	list<string> line_up;
	list<string>::iterator loc;
	
	line_up.push_back("Alice");
	line_up.push_back("Bob");
	
	loc = find(line_up.begin(),line_up.end(),"Bob");
	line_up.insert(loc,"Oscar");
	
	//Write your code hereline_up.push_back("Luffy");
	line_up.push_back("Sanji");
	line_up.push_back("Nami");
	line_up.pop_front();
	line_up.pop_front();
	list<string>::iterator current = line_up.begin();
	for(int i=0;i<2;i++) current++;
	line_up.insert(current,"Narutu");
	line_up.push_front("Prayath");
	current = line_up.begin();
	current++;
	line_up.insert(current,"Tony");
	current++;
	line_up.erase(current);
	line_up.pop_front();
	line_up.pop_front();
	line_up.pop_front();
	
	
	printList(line_up);
		
	return 0;
}
