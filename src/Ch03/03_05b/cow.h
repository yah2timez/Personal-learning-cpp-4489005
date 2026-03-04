<<<<<<< ours
<<<<<<< ours
<<<<<<< ours
// cow.h
=======
>>>>>>> theirs
=======
>>>>>>> theirs
=======
>>>>>>> theirs
#pragma once

#ifndef COW_H
#define COW_H
<<<<<<< ours
<<<<<<< ours
<<<<<<< ours
=======

>>>>>>> theirs
=======

>>>>>>> theirs
=======

>>>>>>> theirs
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
public:
    cow(std::string name_i, int age_i, cow_purpose purpose_i);
<<<<<<< ours
<<<<<<< ours
<<<<<<< ours
    
    std::string get_name() const;
    
    int get_age() const;
    
    cow_purpose get_purpose() const;
    
    void set_age(int new_age);
    
=======
    std::string get_name() const;
    int get_age() const;
    cow_purpose get_purpose() const;
    void set_age(int new_age);
>>>>>>> theirs
=======
=======
>>>>>>> theirs
    std::string get_name() const;
    int get_age() const;
    cow_purpose get_purpose() const;
    void set_age(int new_age);
<<<<<<< ours
>>>>>>> theirs
=======
>>>>>>> theirs
private:
    std::string name;
    int age;
    cow_purpose purpose;
};
<<<<<<< ours
<<<<<<< ours
<<<<<<< ours
#endif // COW_H
=======

#endif // COW_H
>>>>>>> theirs
=======

#endif // COW_H
>>>>>>> theirs
=======

#endif // COW_H
>>>>>>> theirs
