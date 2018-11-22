#include "Course.h"

vector< Student*> Course::getStudents(){
  return _students;
}

void Course::setStudents(vector<Student*>   students){
           
  _students = students;
}

void Course::setName(string name){
   _name = name;
}

void Course::addStudent(Student* student){
    _students.push_back(student);
}

string Course::getName(){
    return _name;
}

Teacher* Course::getTeacher(){
    return _teacher;
}
void Course::setTeacher(Teacher* teacher){
    _teacher = teacher;
}