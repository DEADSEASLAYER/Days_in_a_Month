#include <iostream>
#include <string> 

int main ()
{
    int month, year;

    std::cout << "Enter a month int the year (e.g. 1 for jan): ";
    std::cin >> month;
    std::cout << "Enter a year: ";
    std::cin >> year;

    int days = 0;
    std::string monthName ="";

    switch (month) 
    {
        case 1 : monthName ="January"; days = 31; break;
        case 2 : 
            monthName ="February";
            if ((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0)){
                days = 29;
            } else {
                days = 28;
            }
            break;
        case 3: monthName = "March"; days = 31; break;
        case 4: monthName = "April"; days = 30; break;
        case 5: monthName = "May" ; days = 31; break;
        case 6: monthName = "June"; days = 30; break; 
        case 7: monthName = "July"; days = 31; break;
        case 8: monthName = "August"; days = 31; break;
        case 9: monthName = "September"; days= 30; break;
        case 10: monthName = "October"; days= 31; break;
        case 11: monthName = "November"; days= 30; break;
        case 12: monthName = "december"; days= 31; break;
        default: 
            std::cout << "Invalid month entered." << std::endl;
            return 1;
    }
    std::cout << monthName << " " << year << " has " << days << " days"<< std::endl;

    return 0;
}