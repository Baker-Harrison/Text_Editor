#include <iostream>
#include "include/UI.h"
#include "include/FileSystem.h"
#include "include/File.h"



using namespace std;

void testUI();

int main() {

    UI mainUI;
    mainUI.run();

    return 0;
}

void testUI()
{
    UI ui;

    File file ("text.txt");
    file.appendText("Hello World, you are really cool");
    FileSystem::addFile(file);
    FileSystem::appendTextToFileByName("text.txt", "testing this is really cool");

    //std::string text = FileSystem::readFile("text.txt");
    //cout << text << endl;

    File file2 ("names.txt");
    FileSystem::addFile(file2);

    FileSystem::appendTextToFileByName("names.txt", "Name: John SR");
    //string text2 = FileSystem::readFile("names.txt");
    //cout << text2 << endl;

    ui.readFile();
    ui.deleteFile();
    ui.readFile();
}
