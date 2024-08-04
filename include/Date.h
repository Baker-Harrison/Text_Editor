//
// Created by thehe on 8/3/2024.
//

#ifndef TEXT_EDITOR_DATE_H
#define TEXT_EDITOR_DATE_H

#include <iostream>

class Date {

private:
    std::string year;
    std::string month;
    std::string day;
    std::string dayOfWeek;
public:
    Date() {}
    Date(std::string year, std::string month, std::string day, std::string dayOfWeek);
    std::string getDateFormatted();

};


#endif //TEXT_EDITOR_DATE_H
