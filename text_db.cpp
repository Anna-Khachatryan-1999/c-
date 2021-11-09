#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#include <pqxx/pqxx>
using namespace std;

int main(int argc, char* argv[])
{
    try {
        pqxx::connection C("dbname = Ann user = anna hostaddr = 127.0.0.1 port = 5432");
        if (C.is_open()) {
            cout << "Opened database successfully: " << C.dbname() << endl;
        } else {
            cout << "Can't open database" << endl;
            return 1;
        }
    } catch (const std::exception &e) {
        cerr << e.what() << std::endl;
        return 1;
    }
}
