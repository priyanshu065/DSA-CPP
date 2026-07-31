#include<iostream>
#include<vector>
using namespace  std;

class hello{
private:

string name = "aditya";
string city = "jaipur";
int age = 18;
int mobile = 123456789;
int per = 81;

public:
void admin() {
    cout<<"admin block   "<<endl;
    cout<<"student name    "<<name<<endl;
    cout<<"student city  "<<city<<endl;
    cout<<"student mobilee  "<<mobile<<endl;
    cout<<"student per   "<<per<<endl;
    cout<<"student age   "<<age<<endl;
}
void principal() {
    cout<<"pricipal block   "<<endl;
    cout<<"student name     "<<name<<endl;
    cout<<"student city     "<<city<<endl;
    cout<<"student mobilee  "<<mobile<<endl;
    cout<<"student per      "<<per<<endl;
    
}
void hod() {
    cout<<"hod block         "<<endl;
    cout<<"student name      "<<name<<endl;
    
    cout<<"student mobilee   "<<mobile<<endl;
    cout<<"student per       "<<per<<endl;
   
}
void mentor() {
    cout<<"mentor block"<<endl;
    cout<<"student name"<<name<<endl;
    
    cout<<"student mobilee"<<mobile<<endl;
    
   
}

};

int main () {
    hello s1;

    string dep;

    cout<<"enter the department"<<endl;
    cin>>dep;

    if (dep == "admin") {
        s1.admin();
    }
    else if (dep == "principal") {
        s1.principal();
    }
    else if (dep == "hod") {
        s1.hod();
    }
    else if (dep == "mentor") {
        s1.mentor();
    }
    return 0;

}
