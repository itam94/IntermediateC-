#include<iostream>
#include"Student.h"
#include"Teacher.h"
#include"Course.h"

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    
    Teacher *teacher1 = new Teacher("Rynold","Evans",34,"Newstreet 34","34575322","Roynalds");
    Student * student1 = new Student("Rynold","Evans",34,"Newstreet 34","34575322","Roynalds");
    Student * student2 = new Student("Rynold","Evans",34,"Newstreet 34","34575322","Roynalds");
    Student * student3 = new Student("Rynold","Evans",34,"Newstreet 34","34575322","Roynalds");
    Course course;

    course.addStudent(student1);
    course.addStudent(student2);
    course.addStudent(student3);
    course.setName("Intermediate C++");
    course.setTeacher(teacher1);

    Student st;
    cout<< st.getAge()<<endl;

    teacher1->GradeStudent();
    cout<<endl<<course.getName()<<endl;

    return 0;
}
