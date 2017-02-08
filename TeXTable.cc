#include <stdlib.h>
#include "TeXTable.h"

int main(int argc, char* argv[]){
    if (argc <= 2){
        std::cout << "Error: 1) Please pass a settings file as the first argument."                << std::endl; 
        std::cout << "       2) Then pass as many data files as you wish as subsequent arguments." << std::endl; 
        std::cout << "       The data should be of this form (get it from Validation.C)"           << std::endl << std::endl; 

        std::cout << "       CCQEL_MU"                                                    << std::endl; 
        std::cout << "       -nEvents 4, nCorrect 4, fCorrect 100%"                       << std::endl; 
        std::cout << "       CCQEL_MU_P"                                                  << std::endl; 
        std::cout << "       -nEvents 4, nCorrect 3, fCorrect 75%"                        << std::endl; 
        std::cout << "       OTHER_INTERACTION"                                           << std::endl; 
        std::cout << "       -nEvents 2, nCorrect 2, fCorrect 100%"                       << std::endl; 
        exit(1);
    }

    // Get the valid interaction types
    std::vector<std::string> interactionTypes;
    GetInteractionTypes(interactionTypes);

    std::map<std::string, DataSet> data;
    std::vector<std::string>       files;
    
    std::cout << "--------------------------------------------------------" << std::endl;

    // Load in the data files
    for (int i=2; i<argc; i++){
        std::cout << "Loading file \"" << argv[i] << "\"" << std::endl << std::endl;

        // Try to open the file for reading
        std::ifstream inFile(argv[i]);
        if (!inFile) {
            std::cerr << "Error: Can't open file!" << std::endl;
            exit (1);
        }

        if (std::count(files.begin(), files.end(), argv[i]) != 0){
            std::cerr << "Error: You can't pass multiple files with the same name!" << std::endl;
            exit(1);
        }

        // Parse the file
        DataSet set;
        ParseData(inFile, set, interactionTypes);
        data.insert(std::make_pair(argv[i], set));
        files.push_back(argv[i]);

        // Close the file
        inFile.close();
        
        std::cout << "--------------------------------------------------------" << std::endl;
    }

    // Load in the settings file
    // Try to open the file for reading
    std::ifstream inFile(argv[1]);
    if (!inFile) {
        std::cerr << "Error: Can't open settings file!" << std::endl;
        exit (1);
    }

    // Parse the and run the file
    InterpretSettings(inFile, interactionTypes, data, files);

    // Close the file
    inFile.close();
 
    return 0;
}
