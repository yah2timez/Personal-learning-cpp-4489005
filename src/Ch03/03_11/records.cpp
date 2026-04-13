// Write your implementation code here
// Constructor
#include "records.h"

//------------------------------------------
//------------------------------------------
// Student class constructor
Student::Student(int the_id_i, std::string the_name_i){
    id = the_id_i;
    name = the_name_i;
}

//------------------------------------------
// Student getters
int Student::get_id() const{  
    return id; 
}
std::string Student::get_name() const{  
    return name;
}
//------------------------------------------
//------------------------------------------
// Course constructor
Course::Course(int the_id_i, std::string the_name_i, unsigned char the_credits_i){
    id = the_id_i;
    name = the_name_i;
    credits = the_credits_i;
}
//------------------------------------------
// Course getters
int Course::get_id() const{
    return id;
}

std::string Course::get_name() const{
    return name;
}

int Course::get_credits() const{
    return credits;
}
//------------------------------------------
//------------------------------------------
// Grade constructor
Grade::Grade(int the_sid_i, int the_cid_i, char the_grd_i){
    student_id = the_sid_i;
    course_id = the_cid_i;
    grade = the_grd_i;
}
//------------------------------------------
// Grade getters
int Grade::get_student_id() const{
    return student_id;
}
int Grade::get_course_id() const{
    return course_id;
}
char Grade::get_grade() const{
    return grade;
}