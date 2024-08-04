//
// Created by thehe on 8/3/2024.
//

#ifndef TEXT_EDITOR_FILE_H
#define TEXT_EDITOR_FILE_H



#include <iostream>
#include "Date.h"

class File {
private:
    std::string name;
    std::string content;
    Date dateCreated;
public:
    File() = default;
    File(std::string name);
    std::string getText();
    void setFileName(std::string newFileName);
    std::string getFileName();
    void appendText(std::string newTextContent);
    std::string getMetaData();




};


#endif //TEXT_EDITOR_FILE_H
