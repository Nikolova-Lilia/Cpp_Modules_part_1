/* The purpose of this exercise is to help understanding I/O 
    operations, string manipulation, and basic algorithmic thinking.
    
    Create a program that takes three parameters: filename, s1 & s2.
    Open the file <filename> and copy its content into new file 
    <filename>.replace, replacing every occurence of s1 with s2. */

    /*  1. Open the input file
        2. Read the file content into string or buffer.
        3. Replace occurences: search all occurences of s1 into 
        file content and replace them with s2.
        4. Write to a new file: Create a new file - filename.replace
        and write the modified content
        5. Close the files: Close both input and output properly. */

#include <iostream>
#include <fstream>

int replaceChar(char **argv, std::string str) {
    std::ofstream   outFile;
    int position;

    // step 1: Opens up a new file: It will have the same name, but with '.replace'
    // .c_str - converts the name in a const char *, as that is what the open method expects
    outFile.open((std::string(argv[1]) + ".replace").c_str());
    if (outFile.fail())
        return (1);
    
    // step 2: Actual finding and replacing
    // the loop checks each char of the str. 
    // Checks if it finds word from argv[2] and replace it with word from argv[3]
    // and skips the length of the first word
    // else writes current char
    for (int i = 0; i < (int)str.size(); i++)
    {
        position = str.find(argv[2], i);
        if (position != -1 && position == i)
        {
            outFile << argv[3];
            i += std::string(argv[2]).size() - 1;
        }
        else
            outFile << str[i];
    }

    // step 3: Closing the file
    outFile.close();
    return (0);
}

int main(int argc, char **argv)
{
    char    checkedChar;
    std::ifstream inputFile;
    std::string str;

    if (argc != 4)
    {
        std::cout << "Pragram expects file name, old word and new word which will replace the old one in chosen file\n";
        return (1);
    }
    // step 1: Open file
    inputFile.open(argv[1]);

    // check: is file is not found
    if (inputFile.fail())
    {
        std::cout << "Error: " << "File not found/Unable to open file: " << argv[1] << std::endl;
        return (1);
    }

    // step 2: Reading file:
    // file.eof() checkes if it reaches up the end of the file
    // inputFile >> std::noskipws >> checkedChar - input writes in checkedChar, but it doesn't skip spaces, tabs and newlines
    while(!inputFile.eof() && inputFile >> std::noskipws >> checkedChar)
        str += checkedChar;
    
    // step 3: Closing file after reading completed
    inputFile.close();

    // step 4: replacing and returning the new file
    return (replaceChar(argv, str));
}