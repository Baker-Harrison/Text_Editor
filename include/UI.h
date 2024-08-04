//
// Created by thehe on 8/3/2024.
//

#ifndef TEXT_EDITOR_UI_H
#define TEXT_EDITOR_UI_H

#include <iostream>
#include "FileSystem.h"


class UI
{
public:
    void run();
    void displayMenu();


    void createFile();
    void editFile();
    void deleteFile();
    void renameFile();
    void displayFiles();
    void readFile();
};

#endif //TEXT_EDITOR_UI_H
