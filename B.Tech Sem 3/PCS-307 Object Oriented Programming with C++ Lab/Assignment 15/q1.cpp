#include <iostream>
#include <cctype>


class Employee {
private:
    std::string name, designation;
    int id, dept_id;

public:
    bool setName(std::string);
    bool setDepartmentID(int);
    bool setID(int id) {this->id = id; return true;}
    bool setDesignation(std::string);
    std::string getName() {return name;}
    int getID() {return id;}
    std::string getDesignation() {return designation;}
    int getDeptartmentID() {return dept_id;}
} ;

bool Employee::setName(std::string name) {
    try {
        for (size_t i = 0; i < name.length(); i++)
            if (islower(name[i])) {
                throw "EXCEPTION: String not uppercase.";
            } else {
                this->name = name;
            }
            return true;
    } catch(char const* e) {
        std::cerr << e;
                return false;
    } 
}

bool Employee::setDepartmentID(int id) {
    try {
        if (id > 5 || id < 1) {
            throw "EXCEPTION: Department ID not between 1 and 5.";
        } else {
            this->dept_id = id;
        }
        return true;
    } catch(char const* e) {
        std::cerr << e;
                return false;
    } 
}

bool Employee::setDesignation(std::string d) {
    try {
        for (size_t i = 0; i < d.length(); i++)
            d[i] = tolower(d[i]);

        
        if (!(!d.compare("manager") || !d.compare("clerk")|| !d.compare("peon"))) {
            throw "EXCEPTION: Designation not valid.";
        } else {
            this->dept_id = id;
        }
        return true;
    } catch(char const* e) {
        std::cerr << e;
                return false;
    } 
}



int main(int argc, char const *argv[]) {
    Employee e;
    std::string name, designation;
    int id, dept_id;

    std::cout << "\n:::::::::: INPUT EMPLOYEE DETAILS :::::::::::\n" << std::endl;
    do  {
        std::cout << "\nINPUT :: Name\n(LOWERCASE)\n > ";
        getline(std::cin,name);
    } while(!e.setName(name));

    do  {
        std::cout << "\nINPUT :: Department ID\n(1 to 5)\n > ";
        std::cin >> dept_id;
    } while(!e.setDepartmentID(dept_id));

    do  {
        std::cout << "\nINPUT :: Designation\n(Manager | Clerk | Peon)\n > ";
        std::cin >> designation;
    } while(!e.setDesignation(designation));

    do  {
        std::cout << "\nINPUT :: ID > \n(Integer)\n > ";
        std::cin >> dept_id;
    } while(!e.setID(dept_id));

    std::cout << "\n:::::::::: SAVING EMPLOYEE DETAILS ::::::::::\n" << std::endl;

    std::cout << "\n:::::::::: SAVED EMPLOYEE DETAILS ::::::::::\n" << std::endl;

    std::cout << "EMPLOYEE DETAILS" << std::endl;
    std::cout << "Name: " << e.getName() << std::endl;
    std::cout << "Department ID: " << e.getDeptartmentID() << std::endl;
    std::cout << "Designation: " << e.getDesignation() << std::endl;
    std::cout << "ID: " << e.getID() << std::endl;

    std::cout << std::endl << "\n::::::::::::::::::::::::::::::::::::::::::::\n" << std::endl;
    
    return 0;

}
