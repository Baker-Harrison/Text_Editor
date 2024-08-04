//
// Created by thehe on 8/3/2024.
//

#include "../include/Date.h"

Date::Date(std::string year, std::string month, std::string day, std::string dayOfWeek) {
    this->year = year;
    this->month = month;
    this->day = day;
    this->dayOfWeek = dayOfWeek;
}

std::string Date::getDateFormatted() {
    return dayOfWeek + " " + month + " " + day + ", " + year;
}
