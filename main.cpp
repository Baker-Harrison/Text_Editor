#include <iostream>
#include "include/UI.h"
#include "include/FileSystem.h"
#include "include/File.h"

using namespace std;

int main() {
    File file ("text.txt");
    file.appendText("Hello World, you are really cool");
    FileSystem::addFile(file);
    FileSystem::appendTextToFileByName("text.txt", "testing this is really cool");

    std::string text = FileSystem::readFile("text.txt");
    cout << text << endl;

    return 0;
}
