#pragma once
#include<iostream>
#include"Student.h"
#include"Teacher.h"
#include<vector>

using namespace std;

class Course{
    private:
        vector<Student*> _students;
        Teacher* _teacher;
        string _name;
    public:
       vector< Student*> getStudents();
       void setStudents(vector<Student*>  students);
       Teacher* getTeacher();
       void setTeacher(Teacher* teacher);
       void addStudent(Student *student);
       void setName(string name);
       string getName();
       Course(){};
       Course(vector<Student*> students, Teacher * teacher, string name):_name(name),_teacher(teacher),_students(students){};

};