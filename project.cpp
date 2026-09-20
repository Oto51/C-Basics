#include <bits/stdc++.h>
using namespace std;

int main(){

  map<string, int> users;

  int n; cin >> n; 
  cout << '\n';

  for(int i = 0; i < n; i++){
      string name; 
      int age; 
      cin >> name >> age; 

      users[name] = age; 
  }

	cout << '\n'; 
    int operations; 
    cout << "Please enter number of operations: ";
    cin >> operations; 
    cout << '\n'; 

    while(operations--){
      cout << "Which actions do you want to do?" << '\n'; 
      string action; 
      cin >> action; 

      if(action == "add"){
        cout << "How many times should this action be performed?" << '\n'; 
      	int add; cin >> add; 
        	
          while(add--){
          	cout << '\n'; 
          	string addName; 
          	int addAge;
          	cin >> addName >> addAge;

            users[addName] = addAge; 
		  }
			cout << '\n';
      }
        else if(action == "delete"){
        	cout << "How many times should this action be performed?" << '\n'; 
        	int del; cin >> del; 
        	
            while(del--){
            	cout << '\n'; 
            	string delName;
            	cin >> delName; 

            	users.erase(delName);
			}
			cout << '\n';
        }
        else if(action == "search"){
        	cout << "How many times should this action be performed?" << '\n'; 
        	int search; cin >> search; 
        	
            while(search--){
            	string sName;
            	cin >> sName;
	
	    		if(users.find(sName) != users.end()){
	                cout << '\n' << users.find(sName)->first << ' ' << users.find(sName)->second << '\n';
            	}
            		cout << '\n';
			}
			cout << '\n';
        }
        else if(action == "update"){
        	cout << "How many times should this action be performed?" << '\n'; 
        	int update; cin >> update; 
        	
            while(update--){
            	cout << '\n'; 
            	string uName;
        	    int uAge; 
    	        cin >> uName >> uAge; 
		
            	users[uName] = uAge; 
			}
			cout << '\n';
        }
        else{
            cout << "Error! please try again and enter only: add, delete, search or update" << '\n'; 
        }
    }

  cout << '\n'; 
	
	int mx = INT_MIN, mn = INT_MAX, cnt = 0, sumAges = 0;

    for(const auto& user : users){
  	  if(mx < user.second){
    		mx = user.second;
  		}
		    if(mn > user.second){
	  		mn = user.second; 
  		}

        cout << user.first << ' ' << user.second << '\n'; 
        cnt++; 
        sumAges += user.second; 
    }
	
  	cout << '\n' << "Number of users: " << cnt << '\n'; 
  	cout << "Max age: " << mx << '\n'; 
  	cout << "Min age: " << mn << '\n'; 
  	cout << "Average age: " << (double)sumAges / cnt << '\n';
    cout << '\n'; 

    return 0;
}




