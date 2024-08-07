//
// Created by thehe on 8/3/2024.
//

#include "../include/FileSystem.h"

std::vector<File> FileSystem::files = {};




void FileSystem::addFile(File &file) {
    files.push_back(file);
}

void FileSystem::deleteFile(std::string deletedFileName) {
    int index = findFileIndexByName(deletedFileName);
    files.erase(files.begin()+index);
}

void FileSystem::renameFile(std::string origingalFileName, std::string newFileName) {
    files[findFileIndexByName(origingalFileName)].setFileName(newFileName);
}

int FileSystem::findFileIndexByName(std::string fileName) {
    int index = 0;
    for (File file : files)
    {
        if (file.getFileName() == fileName)
        {
            break;
        }

        index++;

    }

    return index;
}



std::string FileSystem::getFilesFormatted() {

    std::string formattedFileList = "";

    int counter = 1;
    for (File file : files)
    {
        formattedFileList += file.getMetaData() + "\n";
    }

    return formattedFileList;
}


std::string FileSystem::readFile(std::string fileName) {
    return files[findFileIndexByName(fileName)].getText();
}

void FileSystem::appendTextToFileByName(std::string fileName, std::string text) {
    files[findFileIndexByName(fileName)].appendText(text);
}

bool FileSystem::doesFileExist(std::string fileName) {
    for (File &file : files)
    {
        if (file.getFileName() == fileName)
        {
            return true;
        }
    }
    return false;
}
