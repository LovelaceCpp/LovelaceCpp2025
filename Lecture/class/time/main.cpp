// in structures everything is public
#include <iostream>
// enumatation makes sure all the fuctions have the same default values
enum class Month
{
    jan = 1,feb,mar,apr,may,jun,
    jul, aug,sep, oct, nov,dec
};

static int DEFAULT_DD = 1;
static Month DEFAULT_MM = Month::mar;
static int DEFAULT_YY = 1999;

class Date
{
public:
    // custom constructor
    Date() {}
    Date(const int dd, const int mm, const int yy)
        : d{dd}, m{mm}, y{yy} {}

    std::string getDate() const
    {
        return std::to_string(d) + "." + std::to_string(static_cast<int>(m)) + "." + std::to_string(y);
    }

private:
    int d = DEFAULT_DD, y = DEFAULT_YY;
    Month m = DEFAULT_MM;
};

int main()
{
    Date a; // no arg construnctor
    std::cout << a.getDate() << std::endl;
    // Date d{1, DEFAULT_MM, 1977}; // ???
    // std::cout << d.getDate() << std::endl;
}