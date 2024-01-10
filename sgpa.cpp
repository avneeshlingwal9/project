#include <map>
#include <iostream>
using namespace std ;
map<string,int> sem1 ;
int crpt(int marks){
    if(marks>85){
        return 10 ;
    } 
    else if(marks>75 && marks <=85){
        return 9 ;
    }
    else if(marks>65 && marks <= 75){
        return 8 ;
    }
    else if(marks>55 && marks<=65){
        return 7 ;
    }
    else if(marks >45 && marks <= 55){
        return 6 ;
    }
    else if(marks >35 && marks <=45){
        return 5;
    }
    else if(marks> 25 && marks <= 35){
        return 4 ;
    }
    else {
        return 0 ;
    }

}
map<string,int> getsub(int sem){
    map<string,int> cred ;
    string s ;

    if(sem== 1){
        cred["Professional Communication"] = 2 ;
        cred["Engineering Chemistry"] = 3 ;
        cred["Engineering Mathematics-I"] = 4 ;
        cred["Basic Electronics Engineering"] = 3 ;
        cred["Fundamental of Computer and Introduction to Programming"] = 3 ;
        cred["Basic Electronics Engineering Lab"]= 1 ;
        cred["Chemistry Lab"] = 1 ;
        cred["Engineering Graphics and Design Lab"] = 2 ;
        cred["Computer Lab-I"] = 2 ;
        cred["General Proficiency"] = 1 ;
    }
    else if(sem == 2) {
        cred["Advanced Professional Communication"] = 2 ;
        cred["Engineering Physics"] = 3 ;
        cred["Engineering Mathematics-II"] = 4 ;
        cred["Basic Electrical Engineering"] = 2 ;
        cred["Basics of Civil Engineering"] = 2 ;
        cred["Programming For Problem Solving"] = 3 ;
        cred["Basic Electrical Engineering Lab"] = 1 ;
        cred["Physics Lab"] = 1 ;
        cred["Workshop and Manufacturing Practices"]= 1 ;
        cred["Computer Lab-II"] = 2 ;
        cred["General Proficiency"] = 1 ;

    }
    else if(sem == 3){
        cred["Data Structures with C"]= 4 ;
        cred["OOPS using C++"] = 3 ;
        cred["Discrete Mathematics"]= 4;
        cred["Logic Design and Computer Organization "] = 3 ;
        cred["Career Skill"] = 2 ;
        cred["OOPS with C++ Lab"] = 2 ;
        cred["Data Structures Lab"] = 1 ;
        cred["Logic Design and Computer Organization Lab"] = 1 ;
        cout << "Enter your elective : " << endl ;
        cin.ignore();
    
        getline(cin,s);
        cred[s] = 3 ;
        cin.ignore();


    }
    else{
        throw sem;
    }
    return cred ;
    }
    

double cgpacalculator(map<string,int> subs , map<string,int> credits){
    double totalcredits = 0 ; 
    double obtained = 0;
    map<string,int>::iterator i = subs.begin();
    map<string,int>::iterator it = credits.begin();
    while(i!= subs.end()){
        totalcredits+= i->second ;
        obtained+=i->second*it->second;
        i++;
        it++;
    }
    return obtained/totalcredits ;

}





class Student{
    private :
    map<string,int>::iterator it , it1 ;
    public:
    string name ;
    int sem ; 
    double sgpa ; 
    map<string,int> subs;
    map<string,int> credits ;
    Student(){
        try{
        
        cout << "Enter your name: " << endl ;
        getline(cin,name);
        cout << "Enter your sem: " << endl ;
        cin >> sem; 
        if(sem <3){
        
        subs = getsub(sem);
        it = subs.begin();
    

        while(it!= subs.end()){
            int temp ; 
            cout << "Enter your marks in " << it->first <<  endl;
            cin >> temp ;
            credits[it->first] = crpt(temp);
            ++it ; }  
         
        sgpa = cgpacalculator(subs,credits);}
        else{
            throw sem ;
        }
        

    }
    catch( int sem) {
        cout << "Invalid input" << endl; 
        exit(0);
    }}
    void displaysub(){
        it = subs.begin();
        it1 = credits.begin();
        while(it!= subs.end()){
            cout << "Credits in " << it->first << " are " << it1->second << endl ;
            ++it;
            ++it1;
        }
        cout << "Total SGPA is: " << sgpa  << endl ;
        
    }



};
int main(){
    try{
    Student s ; 
    s.displaysub();}
    catch(int sem){
        cout << "No data available"<< endl ;
    }
    

}