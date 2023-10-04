#include <iostream>
#include <string>

using namespace std;

class User
{
public:
    int userId;
    string username;
    string email;
    string password;

    void registerUser()
    {
        cout << "Registering User..." << endl;
    }
};

int main()
{
    User user;
    user.userId = 1;
    user.username = "johndoe";
    user.email = "jd@gmail.com";
    user.password = "mys3cur3p@assword";

    user.registerUser();

    return 0;
}