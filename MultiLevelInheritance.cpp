#include<iostream>
using namespace std ;

// OOP_ Person Exercise

class clsperson{
private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;

public:

    // Constructor
    clsperson(int id , string FirstName , string LastName , string email , string phone){
        _ID = id;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = email;
        _Phone = phone;
    } 
    
    // Get Properties 
    int GetID(){
        return _ID;
    }
    
    string GetFirstName(){
        return _FirstName;
    }
    
    string GetLastName(){
        return _LastName;
    }
    
    string GetFullName(){
        return _FirstName + " " + _LastName;
    }
    
    string GetEmail(){
        return _Email;
    }
      
    string GetPhone(){
        return _Phone;
    }
    
    // Set Properties 
    
    void SetFirstName(string FirstName){
        _FirstName = FirstName;
    }  
    
    void SetLastName(string LastName){
        _LastName = LastName;
    }
    
    void SetEmail(string Email){
        _Email = Email;
    }
    
    void SetPhone(string Phone){
        _Phone = Phone;
    }
    
    void PrintPersonInfo(){
        cout << "Person Info:\n";
        cout << "----------------------------------\n\n";
        cout << "First Name: " << _FirstName << endl;
        cout << "Last Name : " << _LastName << endl;
        cout << "Full Name : " << _FirstName << " " << _LastName << endl;
        cout << "ID        : " << _ID << endl;
        cout << "Email     : " << _Email << endl;
        cout << "Phone     : " << _Phone << endl;
        cout << "----------------------------------\n\n";        
    }
    
    void SendEmail(string subject , string body){
        cout << "\n\nThe Message Has Sent To Email " << "\"" << _Email << "\"" << " Successfully\n";
        cout << "Subject: " << subject << endl;
        cout << "Body   : " << body << endl;
    }
    
    void SendSMS(string message){
        cout << "\n\nThe Message Has Sent To Phone " << "\"" << _Phone << "\"" << " Successfully\n";  
        cout << message << endl; 
    }
};

class clsemployee : public clsperson{
private:
    int _Salary;
    string _Title;
    string _Department;

public:
    // The construcor
    clsemployee(int id , string FirstName , string LastName , string email , string phone , int Salary , string Title, string Department)
    : clsperson(id , FirstName , LastName , email ,phone ){
        _Salary = Salary;
        _Title = Title;
        _Department = Department;
    } 
    
    // Get Properties 
    string GetDepartment(){
        return _Department;
    }
    
    string GetTitle(){
        return _Title;
    }
    
    int GetSalary(){
        return _Salary;
    }
    
    // Set Properties 
    void SetDepartment(string Department){
        _Department = Department;
    }
    
    void SetTitle(string Title){
        _Title = Title;
    }
    
    void SetSalary(int Salary){
        _Salary = Salary;
    }
    
    void PrintPersonInfo(){
        cout << "employer Info:\n";
        cout << "----------------------------------\n\n";
        cout << "First Name: " << GetFirstName() << endl;
        cout << "Last Name : " << GetLastName() << endl;
        cout << "Full Name : " << GetFullName() << endl;
        cout << "ID        : " << GetID() << endl;
        cout << "Email     : " << GetEmail() << endl;
        cout << "Phone     : " << GetPhone() << endl;
        cout << "Title     : " << _Title << endl;
        cout << "Department: " << _Department << endl;
        cout << "Salary    : " << _Salary << endl;
        cout << "----------------------------------\n\n";        
    }

};

class clsdeveloper : public clsemployee{

private:
    string _MainProgrammingLanguage;
    
public:

    // The construcor 
    clsdeveloper(int id , string FirstName , string LastName , string email , string phone , int Salary , string Title, string Department , string MainProgrammingLanguage)
    :clsemployee(id , FirstName , LastName , email ,phone , Salary , Title , Department ){
        _MainProgrammingLanguage = MainProgrammingLanguage;
    } 
    
    // Set property 
    void SetMainProgrammingLanguage(string MainProgrammingLanguage){
        _MainProgrammingLanguage = MainProgrammingLanguage;
    }
    
    // Get property 
    string GetMainProgrammingLanguage(){
        return _MainProgrammingLanguage;
    }
    
    void PrintPersonInfo(){
        cout << "developer Info:\n";
        cout << "----------------------------------\n\n";
        cout << "First Name               : " << GetFirstName() << endl;
        cout << "Last Name                : " << GetLastName() << endl;
        cout << "Full Name                : " << GetFullName() << endl;
        cout << "ID                       : " << GetID() << endl;
        cout << "Email                    : " << GetEmail() << endl;
        cout << "Phone                    : " << GetPhone() << endl;
        cout << "Title                    : " << GetTitle() << endl;
        cout << "Department.              : " << GetDepartment() << endl;
        cout << "Salary                   : " << GetSalary() << endl;
        cout << "Main Programming Language: " << GetMainProgrammingLanguage() << endl;
        cout << "----------------------------------\n\n";        
    }
    
        

};

int main()
{
    clsdeveloper developer1(123, "Youssef" , "Zakaria" , "youssefzakaria474@gmail.com" ,"01019546512", 5000 , "Software engineer" , "Google" , "C++");
    developer1.PrintPersonInfo();
    
    developer1.SendEmail("Hi" , "How Are You?");
    
    developer1.SendSMS("How Are You?");
    
    clsemployee employer1(123, "Youssef" , "Zakaria" , "youssefzakaria474@gmail.com" ,"01019546512", 5000 , "Software engineer" , "Google" );
    employer1.PrintPersonInfo();
    
    clsperson person1(123, "Youssef" , "Zakaria" , "youssefzakaria474@gmail.com" ,"01019546512");
    person1.PrintPersonInfo();
    return 0;
}