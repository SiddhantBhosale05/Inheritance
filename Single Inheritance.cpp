//Name:Siddhant Kiran Bhosale
//PRN:23070123038
//Aim:Implementation of Inheritance to perform Single Inheritance

#include <iostream>
using namespace std;

class Uni {
public:
    string uni = "Symbiosis";
    void discipline() {
        cout << "Engineering" << endl;
    }
};

class Dep : public Uni {
public:
    string dept = "Electronics & Communication";
};

int main() {    
    Dep department;
    cout << department.uni << endl;
    department.discipline();
    cout << department.dept << endl;

    return 0;
}


/*Output:
Symbiosis
Engineering
Electronics & Communication*/
