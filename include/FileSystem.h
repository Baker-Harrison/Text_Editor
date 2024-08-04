//
// Created by thehe on 8/3/2024.
//

#ifndef TEXT_EDITOR_FILESYSTEM_H
#define TEXT_EDITOR_FILESYSTEM_H


#include "File.h"
#include <vector>

class FileSystem {
private:
    static std::vector<File> files;

public:
    static bool doesFileExist(std::string fileName);
    static void addFile(File &file);
    static void deleteFile(std::string deletedFileName);
    static void renameFile(std::string origingalFileName,std::string newFileName);
    static int findFileIndexByName(std::string fileName);
    static std::string getFilesFormatted();
    static std::string readFile(std::string fileName);
    static void appendTextToFileByName(std::string fileName, std::string text);
};



#endif //TEXT_EDITOR_FILESYSTEM_H
