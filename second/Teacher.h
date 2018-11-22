#pragma once

#include<iostream>
using namespace std;
class Teacher{

    public:
        Teacher(){}
        Teacher(string firstName, string lastName, int age, string address, string phone,string city):_lastname(lastName),_firstname(firstName), _age(age),  _address(address), _phone(phone), _city(city){}
        ~Teacher(){}
        
        //getters
        string getFirstName() {return _firstname;}
        string getLastName() {return _lastname;}
        int getAge() {return _age;}
        string getAddress() {return _address;}
        string getPhone() {return _phone;}
        string getCity() {return _city;}
        //setters
        void setFirstName(string s) { _firstname = s;}
        void setLastName(string s) { _lastname= s;}
        void setAge(int s) { _age= s;}
        void setAddress(string s) { _address= s;}
        void setPhone(string s) { _phone= s;}
        void setCity(string s) { _city= s;}


        void GradeStudent();

    private:
        string _lastname;
        string _firstname;
        int _age;
        string _address;
        string _phone;
        string _city;
        


};