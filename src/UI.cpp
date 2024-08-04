//
// Created by thehe on 8/3/2024.
//
#include "../include/UI.h"
#include <unistd.h>
using namespace std;

void UI::run() {
    int choice;

    do {
        displayMenu();
        std::cout << "What will do: ";
        std::cin >> choice;

        switch (choice) {

            case 1:
                createFile();
                sleep(1);
                break;
            case 2:
                editFile();
                sleep(1);
                break;
            case 3:
                deleteFile();
                sleep(1);
                break;
            case 4:
                renameFile();
                sleep(1);
                break;
            case 5:
                readFile();
                sleep(1);
                break;
            case 6:
                std::cout << "Exiting the program" << std::endl;
                break;
            default:
                std::cout << "Invalid input. Try again!" << std::endl;
        }
    } while (choice != 6);
}

void UI::displayMenu() {
    std::cout << "Choose from the following options" << std::endl
              << "1. Create a new file" << std:: endl
              << "2. Edit a file" << std::endl
              << "3. Delete a file" << std::endl
              << "4. Rename File" << std::endl
              << "5. Read File" << std::endl
              << "6. exit" << std::endl;

}

void UI::createFile() {
    std::string newFileName;
    std::cout << "Enter the name of the new file: " << std::endl;
    std::cin >> newFileName;
    File newFile (newFileName);

    FileSystem::addFile(newFile);
}

void UI::editFile() {
    std::string fileName;
    std::string appendedText;

    displayFiles();
    std::cout << "Enter a file name: ";
    std::cin >> fileName;
    cin.ignore();

    if (FileSystem::doesFileExist(fileName) == true) {
        std::cout << "Enter the text you want to append to the file:  ";
        getline(cin, appendedText);
        FileSystem::appendTextToFileByName(fileName, appendedText);

    }
    else
    {
        cout << "Invalid File Name!" << endl;

    }


}

void UI::deleteFile() {
    std::string fileName;
    displayFiles();
    std::cout << "Enter a file to delete: ";
    std::cin >> fileName;

    if (FileSystem::doesFileExist(fileName) == true) {

        FileSystem::deleteFile(fileName);
    }
    else
    {
        cout << "Invalid File Name!" << endl;

    }

}

void UI::renameFile() {
    std::string fileName;
    std::string newFileName;
    displayFiles();
    std::cout << "Enter a file to rename: ";
    std::cin >> fileName;


    if (FileSystem::doesFileExist(fileName) == true) {

        std::cout << "Enter a new name for the file: ";
        std::cin >> newFileName;
        FileSystem::renameFile(fileName, newFileName);
    }
    else
    {
        cout << "Invalid File Name!" << endl;

    }

}

void UI::readFile() {
    std::string fileName;
    displayFiles();
    std::cout << "Enter a file name: ";
    std::cin >> fileName;
    if (FileSystem::doesFileExist(fileName) == true) {
        std::cout << "-------------------------------------" << std::endl;
        std::cout << FileSystem::readFile(fileName) << std::endl;
        std::cout << "-------------------------------------" << std::endl;
    }
    else
    {
        cout << "Invalid File Name!" << endl;

    }


}

void UI::displayFiles() {
    std::cout << FileSystem::getFilesFormatted() << std::endl;
}


