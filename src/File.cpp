//
// Created by thehe on 8/3/2024.
//

#include "../include/File.h"

File::File(std::string name)
{
    this->name = name;
    this->dateCreated = Date("2005", "July", "1", "Monday");
}


std::string File::getText() {
    return content;
}

void File::setFileName(std::string newFileName) {
    this->name = newFileName;
}

std::string File::getFileName() {
    return name;
}

void File::appendText(std::string newTextContent) {
    if (!content.empty()) {
        content += "\n" + newTextContent;
    }
    else
    {
        content += newTextContent;
    }

}

std::string File::getMetaData() {
    return "File Name: " + name + ", " + "Date Created: " + dateCreated.getDateFormatted();
}
