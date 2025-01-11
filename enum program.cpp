#include <iostream>

enum Month {
    January = 1, February, March, April, May, June,
    July, August, September, October, November, December
};

struct Date {
    Month month;
    int day;
};

// Function to det+ermine the number of days in a given month
int daysInMonth(Month month) {
    switch (month) {
        case February:
            return 28;
        case April:
        case June:
        case September:
        case November:
            return 30;
        default:
            return 31;
    }
}

// Function to calculate the next day
Date nextDay(const Date& date) {
    Date nextDate = date;
    
    if (nextDate.day < daysInMonth(nextDate.month)) {
        nextDate.day++;
    } else {
        nextDate.day = 1;
        if (nextDate.month == December) {
            nextDate.month = January;
        } else {
            nextDate.month = static_cast<Month>(nextDate.month + 1);
        }
    }
    
    return nextDate;
}

// Function to print the date
void printDate(const Date& date) {
    std::string monthName;
    
    switch (date.month) {
        case January:
            monthName = "January";
            break;
        case February:
            monthName = "February";
            break;
        case March:
            monthName = "March";
            break;
        case April:
            monthName = "April";
            break;
        case May:
            monthName = "May";
            break;
        case June:
            monthName = "June";
            break;
        case July:
            monthName = "July";
            break;
        case August:
            monthName = "August";
            break;
        case September:
            monthName = "September";
            break;
        case October:
            monthName = "October";
            break;
        case November:
            monthName = "November";
            break;
        case December:
            monthName = "December";
            break;
    }
    
    std::cout << monthName << " " << date.day << std::endl;
}

int main() {
    Date date = {December, 12};
    printDate(date);
    
    Date nextDate = nextDay(date);
    printDate(nextDate);
    
    return 0;
}
