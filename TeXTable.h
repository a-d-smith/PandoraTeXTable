#include <iostream>
#include <iomanip>
#include <map>
#include <vector>
#include <utility>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>

void GetInteractionTypes(std::vector<std::string> &interactionTypes){
    interactionTypes.push_back("CCQEL_MU");
    interactionTypes.push_back("CCQEL_MU_P");
    interactionTypes.push_back("CCQEL_MU_P_P");
    interactionTypes.push_back("CCQEL_MU_P_P_P");
    interactionTypes.push_back("CCQEL_MU_P_P_P_P");
    interactionTypes.push_back("CCQEL_MU_P_P_P_P_P");
    interactionTypes.push_back("CCQEL_E");
    interactionTypes.push_back("CCQEL_E_P");
    interactionTypes.push_back("CCQEL_E_P_P");
    interactionTypes.push_back("CCQEL_E_P_P_P");
    interactionTypes.push_back("CCQEL_E_P_P_P_P");
    interactionTypes.push_back("CCQEL_E_P_P_P_P_P");
    interactionTypes.push_back("NCQEL_P");
    interactionTypes.push_back("NCQEL_P_P");
    interactionTypes.push_back("NCQEL_P_P_P");
    interactionTypes.push_back("NCQEL_P_P_P_P");
    interactionTypes.push_back("NCQEL_P_P_P_P_P");
    interactionTypes.push_back("CCRES_MU");
    interactionTypes.push_back("CCRES_MU_P");
    interactionTypes.push_back("CCRES_MU_P_P");
    interactionTypes.push_back("CCRES_MU_P_P_P");
    interactionTypes.push_back("CCRES_MU_P_P_P_P");
    interactionTypes.push_back("CCRES_MU_P_P_P_P_P");
    interactionTypes.push_back("CCRES_MU_PIPLUS");
    interactionTypes.push_back("CCRES_MU_P_PIPLUS");
    interactionTypes.push_back("CCRES_MU_P_P_PIPLUS");
    interactionTypes.push_back("CCRES_MU_P_P_P_PIPLUS");
    interactionTypes.push_back("CCRES_MU_P_P_P_P_PIPLUS");
    interactionTypes.push_back("CCRES_MU_P_P_P_P_P_PIPLUS");
    interactionTypes.push_back("CCRES_MU_PHOTON");
    interactionTypes.push_back("CCRES_MU_P_PHOTON");
    interactionTypes.push_back("CCRES_MU_P_P_PHOTON");
    interactionTypes.push_back("CCRES_MU_P_P_P_PHOTON");
    interactionTypes.push_back("CCRES_MU_P_P_P_P_PHOTON");
    interactionTypes.push_back("CCRES_MU_P_P_P_P_P_PHOTON");
    interactionTypes.push_back("CCRES_MU_PIZERO");
    interactionTypes.push_back("CCRES_MU_P_PIZERO");
    interactionTypes.push_back("CCRES_MU_P_P_PIZERO");
    interactionTypes.push_back("CCRES_MU_P_P_P_PIZERO");
    interactionTypes.push_back("CCRES_MU_P_P_P_P_PIZERO");
    interactionTypes.push_back("CCRES_MU_P_P_P_P_P_PIZERO");
    interactionTypes.push_back("CCRES_E");
    interactionTypes.push_back("CCRES_E_P");
    interactionTypes.push_back("CCRES_E_P_P");
    interactionTypes.push_back("CCRES_E_P_P_P");
    interactionTypes.push_back("CCRES_E_P_P_P_P");
    interactionTypes.push_back("CCRES_E_P_P_P_P_P");
    interactionTypes.push_back("CCRES_E_PIPLUS");
    interactionTypes.push_back("CCRES_E_P_PIPLUS");
    interactionTypes.push_back("CCRES_E_P_P_PIPLUS");
    interactionTypes.push_back("CCRES_E_P_P_P_PIPLUS");
    interactionTypes.push_back("CCRES_E_P_P_P_P_PIPLUS");
    interactionTypes.push_back("CCRES_E_P_P_P_P_P_PIPLUS");
    interactionTypes.push_back("CCRES_E_PHOTON");
    interactionTypes.push_back("CCRES_E_P_PHOTON");
    interactionTypes.push_back("CCRES_E_P_P_PHOTON");
    interactionTypes.push_back("CCRES_E_P_P_P_PHOTON");
    interactionTypes.push_back("CCRES_E_P_P_P_P_PHOTON");
    interactionTypes.push_back("CCRES_E_P_P_P_P_P_PHOTON");
    interactionTypes.push_back("CCRES_E_PIZERO");
    interactionTypes.push_back("CCRES_E_P_PIZERO");
    interactionTypes.push_back("CCRES_E_P_P_PIZERO");
    interactionTypes.push_back("CCRES_E_P_P_P_PIZERO");
    interactionTypes.push_back("CCRES_E_P_P_P_P_PIZERO");
    interactionTypes.push_back("CCRES_E_P_P_P_P_P_PIZERO");
    interactionTypes.push_back("NCRES_P");
    interactionTypes.push_back("NCRES_P_P");
    interactionTypes.push_back("NCRES_P_P_P");
    interactionTypes.push_back("NCRES_P_P_P_P");
    interactionTypes.push_back("NCRES_P_P_P_P_P");
    interactionTypes.push_back("NCRES_PIPLUS");
    interactionTypes.push_back("NCRES_P_PIPLUS");
    interactionTypes.push_back("NCRES_P_P_PIPLUS");
    interactionTypes.push_back("NCRES_P_P_P_PIPLUS");
    interactionTypes.push_back("NCRES_P_P_P_P_PIPLUS");
    interactionTypes.push_back("NCRES_P_P_P_P_P_PIPLUS");
    interactionTypes.push_back("NCRES_PIMINUS");
    interactionTypes.push_back("NCRES_P_PIMINUS");
    interactionTypes.push_back("NCRES_P_P_PIMINUS");
    interactionTypes.push_back("NCRES_P_P_P_PIMINUS");
    interactionTypes.push_back("NCRES_P_P_P_P_PIMINUS");
    interactionTypes.push_back("NCRES_P_P_P_P_P_PIMINUS");
    interactionTypes.push_back("NCRES_PHOTON");
    interactionTypes.push_back("NCRES_P_PHOTON");
    interactionTypes.push_back("NCRES_P_P_PHOTON");
    interactionTypes.push_back("NCRES_P_P_P_PHOTON");
    interactionTypes.push_back("NCRES_P_P_P_P_PHOTON");
    interactionTypes.push_back("NCRES_P_P_P_P_P_PHOTON");
    interactionTypes.push_back("NCRES_PIZERO");
    interactionTypes.push_back("NCRES_P_PIZERO");
    interactionTypes.push_back("NCRES_P_P_PIZERO");
    interactionTypes.push_back("NCRES_P_P_P_PIZERO");
    interactionTypes.push_back("NCRES_P_P_P_P_PIZERO");
    interactionTypes.push_back("NCRES_P_P_P_P_P_PIZERO");
    interactionTypes.push_back("CCDIS");
    interactionTypes.push_back("NCDIS");
    interactionTypes.push_back("CCCOH");
    interactionTypes.push_back("NCCOH");
    interactionTypes.push_back("OTHER_INTERACTION");
    interactionTypes.push_back("ALL_INTERACTIONS"); 
}
// ----------------------------------------------------------------------------- 

typedef std::map<std::string, std::pair<int, int> > DataSet;
//               ^ interactionType      ^ nEvents, nCorrectEvents                  

// -----------------------------------------------------------------------------

void ParseData(std::ifstream &inFile, DataSet &data, std::vector<std::string> &interactionTypes){
    bool expectData = false;
    std::string currentIntType;

    std::string line;
    while (std::getline(inFile, line)) {
        if (expectData){
            // Check if the first character is a hyphen (this means it is a data line)
            if (line.at(0) == '-'){
                // A data line has the form:
                // -nEvents 4, nCorrect 4, fCorrect 100%
                // 
                // We want to extract nEvent and nCorrect
                std::size_t foundEvents  = line.find("nEvents");
                std::size_t foundCorrect = line.find("nCorrect");
                std::size_t foundComma1  = line.find(",", foundEvents);
                std::size_t foundComma2  = line.find(",", foundCorrect);
                if (foundEvents != std::string::npos && foundCorrect != std::string::npos && foundComma1 != std::string::npos && foundComma1 != std::string::npos){
                    std::string nEventsStr  = line.substr(foundEvents +8, foundComma1-foundEvents -8);
                    std::string nCorrectStr = line.substr(foundCorrect+9, foundComma2-foundCorrect-9);

                    std::stringstream ssEvents;
                    ssEvents << nEventsStr;
                    int nEvents;
                    ssEvents >> nEvents;

                    std::stringstream ssCorrect;
                    ssCorrect << nCorrectStr;
                    int nCorrect;
                    ssCorrect >> nCorrect;

                    std::cout << std::setw(28) << currentIntType << " : " << nCorrect << " / " << nEvents << std::endl;
                    if (data.count(currentIntType) > 0){
                        std::cerr << "Error: Multiple entries for interaction type " << currentIntType << "." << std::endl;
                        exit(1);
                    }
                    else{
                        // Add these values to the data object
                        data.insert(data.begin(), std::pair<std::string, std::pair<int, int> >(currentIntType, std::make_pair(nEvents, nCorrect)));
                    }
                }
            }
            expectData = false;
        }
        else{
            // If this line is an interaction type
            if (std::find(interactionTypes.begin(), interactionTypes.end(), line) != interactionTypes.end()){
                // We expect the next line to be data
                currentIntType = line;
                expectData = true;
            }
            else{
                std::cerr << "Error: Unknown interaction type " << line << "." << std::endl;
                exit(1);
            }
        }
    }
}


// -----------------------------------------------------------------------------

void GetAllInteractionsInSet(DataSet &set, std::vector<std::string> &interactionsInSet){
    typedef std::map<std::string, std::pair<int, int> >::iterator it_type;
    for (it_type it = set.begin(); it != set.end(); ++it){
        if (it->first != "all"){
            if (std::count(interactionsInSet.begin(), interactionsInSet.end(), it->first) == 0){
                interactionsInSet.push_back(it->first);
            }
        }
    }
}

// -----------------------------------------------------------------------------

void GetInteractionList(std::vector<std::string> &dataSets, std::vector<std::string> &interactions, std::vector<std::string> omits, std::map<std::string, DataSet> &data, std::vector<std::string> &interactionList){
    std::vector<std::string> tempList;
    // Check if we are using "all" interactions
    if (std::count(interactions.begin(), interactions.end(), "all") == 0){
        tempList = interactions;
    }
    else{
        // Get a list of all of the interactions in each of the sets of the data list
        for (int i=0; i<dataSets.size(); ++i){
            GetAllInteractionsInSet(data.at(dataSets[i]), tempList);
        }  
    }

    // Now make the interaction list
    for (int i=0; i<tempList.size(); ++i){
        if (std::count(omits.begin(), omits.end(), tempList[i]) == 0){
            interactionList.push_back(tempList[i]);
        }
    }

}

// -----------------------------------------------------------------------------

int countSubstring(const std::string& str, const std::string& sub){
    if (sub.length() == 0) return 0;
    int count = 0;
    for (size_t offset = str.find(sub); offset != std::string::npos; offset = str.find(sub, offset + sub.length())) {
        ++count;
    }
    return count;
}

// -----------------------------------------------------------------------------

std::string RemoveProtons(std::string &str){
    std::stringstream ss;
    for (int i=0; i<=str.length()-2; i++){
        std::string sub;
        if (i == str.length()-2){
            sub = str.substr(i, 2);
            if (sub.compare("_P") != 0){
                ss << sub;
            }
        }
        else{
            sub = str.substr(i, 3);
            if (sub.compare("_P_") == 0){
                i+=1;
            }
            else{
                ss << sub.at(0);
            }
        }
    }
    std::string retString;
    ss >> retString;
    return retString;
}

// -----------------------------------------------------------------------------

void StripWhitespace(std::string &str){
    std::stringstream ss;
    for (int i=0; i<str.length(); ++i){
        if (str.at(i) != ' ' && str.at(i) != '\t'){
            ss << str.at(i);
        }
    }
    str.clear();
    ss >> str;
}

// -----------------------------------------------------------------------------

std::string GetTeX(std::string str){
    std::vector<std::pair<std::string, std::string> > particles;
    particles.push_back(std::make_pair<std::string, std::string>("MU", "\\mu"));
    particles.push_back(std::make_pair<std::string, std::string>("E", "e"));
    particles.push_back(std::make_pair<std::string, std::string>("P", "p"));
    particles.push_back(std::make_pair<std::string, std::string>("PIPLUS", "\\pi^{+}"));
    particles.push_back(std::make_pair<std::string, std::string>("PIMINUS", "\\pi^{-}"));
    particles.push_back(std::make_pair<std::string, std::string>("PIZERO", "\\pi^{0}"));
    particles.push_back(std::make_pair<std::string, std::string>("PHOTON", "\\gamma"));

    // Split the string up into a vector of strings
    std::stringstream ss;
    std::vector<std::string> strVec;
    for (int i=0; i<str.length(); ++i){
        if( str.at(i) != '_' && i != str.length()-1){
            ss << str.at(i);
        }
        else {
            if (i == str.length()-1){
                ss << str.at(i);
            }
            strVec.push_back(ss.str());
            ss.str("");
        }
    }   

    ss.str("");

    for (int i=0; i < strVec.size(); i++){
        bool found = false;
        for (int j=0; j<particles.size(); ++j){
            if (particles[j].first.compare(strVec[i]) == 0){
                if (i == 0)
                    ss << particles[j].second;
                else
                    ss << " + " << particles[j].second;
                found = true;
                break;
            }
        }
        if (!found){
            if (i == 0)
                ss << strVec[i];
            else
                ss << " + " << strVec[i];
        }
    }

    std::string retStr;

    ss >> retStr;
    return retStr;
}


// -----------------------------------------------------------------------------

std::string GetCol(std::vector<std::string> &dataSets, std::map<std::string, DataSet> &data, std::vector<std::vector<std::string> > &sortedList, bool useCols, int group, int nProtons){
    int k;
    bool found = false;

    // Get the index in the sorted list for this number of protons
    for (int i=0; i<sortedList[group].size(); i++){
        int n = countSubstring(sortedList[group][i], "_P_");
        if (sortedList[group][i].at(sortedList[group][i].length()-1) == 'P') n++;

        if (nProtons == n){
            k = i;
            found = true;
            break;
        }
    }
    std::string cols = "";
    if (found){
        // Determine the color to use
        if (useCols){
            // Highligh based on correct event fraction
            if (dataSets.size() == 1){
                if (data.at(dataSets.at(0)).find(sortedList[group][k]) != data.at(dataSets.at(0)).end()){
                    std::stringstream ss;
                    double frac = 100*((double) data.at(dataSets.at(0)).at(sortedList[group][k]).second) / ((double) data.at(dataSets.at(0)).at(sortedList[group][k]).first);
                    ss << "{\\cellcolor{green!" << std::setprecision(3) << frac << "!red!25}}";
                    ss >> cols;
                }
            }
            else{
                if (data.at(dataSets.at(0)).find(sortedList[group][k]) != data.at(dataSets.at(0)).end() && data.at(dataSets.at(1)).find(sortedList[group][k]) != data.at(dataSets.at(1)).end()){
                    std::stringstream ss;
                    double frac1 = 100*((double) data.at(dataSets.at(0)).at(sortedList[group][k]).second) / ((double) data.at(dataSets.at(0)).at(sortedList[group][k]).first);
                    double frac2 = 100*((double) data.at(dataSets.at(1)).at(sortedList[group][k]).second) / ((double) data.at(dataSets.at(1)).at(sortedList[group][k]).first);
                    double inc = 50 + (frac1 - frac2)/2;
                    ss << "{\\cellcolor{green!" << std::setprecision(3) << inc << "!red!25}}";
                    ss >> cols;
                }    
            }
        }
    }

    return cols;
}

// -----------------------------------------------------------------------------


void MakeTable(std::string name, std::vector<std::string> &dataSets, std::vector<std::string> &interactions, std::vector<std::string> &omits, bool useCols, std::map<std::string, DataSet> &data, std::vector<std::string> interactionTypes){
    // First get the actual list of interactions to show 
    std::vector<std::string> interactionList;
    GetInteractionList(dataSets, interactions, omits, data, interactionList);

    // Group the interactions by the characters in the interaction type that aren't protons (_P) (eg CCRES_MU_PIPLUS)
    // First make a list of these groups from the interactionTypes list
    std::string group = "";

    std::vector<std::string> groupList;
    for (int i=0; i<interactionTypes.size(); i++){
        std::string thisGroup = RemoveProtons(interactionTypes[i]);
        if (thisGroup.compare(group) != 0){
            group = thisGroup;
            groupList.push_back(group);
        }
    }

    // For each group
    int maxProtons = 0;
    std::vector<std::vector<std::string> > sortedList;
    for (int i=0; i<groupList.size(); i++){
        // Get the relevant interactions in the list
        std::vector<std::string> interactionsInGroup;
        for (int j=0; j<interactionList.size(); j++){
            std::string thisGroup = RemoveProtons(interactionList[j]);
            if (thisGroup.compare(groupList[i]) == 0){
                interactionsInGroup.push_back(interactionList[j]);
            }
        }

        // Now order them by number of protons
        int curProtons = 0;
        std::vector<std::string> sortedInteractions;
        while (sortedInteractions.size() != interactionsInGroup.size()){
            for (int j=0; j<interactionsInGroup.size(); j++){
                int nProtons = countSubstring(interactionsInGroup[j], "_P_");
                if (interactionsInGroup[j].at(interactionsInGroup[j].length()-1) == 'P') nProtons++;
    
                if (nProtons == curProtons){
                    sortedInteractions.push_back(interactionsInGroup[j]);
                }
            }

            if (curProtons > maxProtons) maxProtons = curProtons;
            curProtons++;
        }

        if (sortedInteractions.size() != 0){
            sortedList.push_back(sortedInteractions);
        }
    }

    // Open the tex file for writing
    std::ofstream file;
    std::string fileName = name;
    StripWhitespace(fileName);
    fileName.append(".tex");
    file.open(fileName.c_str());
  
    // Start the tabular environment
    file << "\\begin{tabular}{c|";
    for (int i=0; i<=maxProtons; i++){
        file << "|c";
    }
    file << "}" << std::endl;

    // Fill in the data!
    for (int i=0; i<sortedList.size(); i++){
        // Get the nuance (eg. CCQEL)
        std::string nuance = sortedList[i][0].substr(0, 5);
        if (nuance.compare("OTHER") == 0 || nuance.compare("ALL_I") == 0) continue;

        file << nuance;

        // Get the final state (less any protons)
        std::string fState = RemoveProtons(sortedList[i][0]);
        if (fState.length() > 5){
            fState = fState.substr(6, fState.length()-6);
        }
        else{
            fState = "-";
        }
        
        // Now fill in the final states with protons
        file << " & " << GetCol(dataSets, data, sortedList, useCols, i, 0) << "$" << GetTeX(fState) << "$";
        for (int j=1; j<=maxProtons; j++){
            if (fState.compare("-") == 0)
                file << " & " << GetCol(dataSets, data, sortedList, useCols, i, j) << "$" << j << " p$";
            else
                file << " & " << GetCol(dataSets, data, sortedList, useCols, i, j) << "$" << GetTeX(fState) << " + " << j << " p$";
        }
        file << "\\\\" << std::endl;

        // Now fill in the number of events
        file << "Number of Events";
        for (int j=0; j<=maxProtons; j++){
            bool populated = false;
            // Check if we have an entry for this number of protons
            for (int k=0; k<sortedList[i].size(); k++){
                int nProtons = countSubstring(sortedList[i][k], "_P_");
                if (sortedList[i][k].at(sortedList[i][k].length()-1) == 'P') nProtons++;

                if (nProtons == j){
                    // Get the number of events
                    if (data.at(dataSets.at(0)).find(sortedList[i][k]) != data.at(dataSets.at(0)).end()){
                        file << " & " << GetCol(dataSets, data, sortedList, useCols, i, j) << data.at(dataSets.at(0)).at(sortedList[i][k]).first;
                    }
                    else{
                        file << " & $-$"; 
                    }
                    if (dataSets.size() == 2){
                        if (data.at(dataSets.at(1)).find(sortedList[i][k]) != data.at(dataSets.at(1)).end()){
                            file << " (" << GetCol(dataSets, data, sortedList, useCols, i, j) << data.at(dataSets.at(1)).at(sortedList[i][k]).first << ")";
                        }
                        else{
                            file << " ($-$)";
                        }
                    }
                    populated = true;
                    break;
                }
            }
            if (!populated){
                file << " & $-$ ";
            }
        }
        file << "\\\\" << std::endl;

        // Now fill in the correct event fraction
        file << "Correct [\\\%]";
        for (int j=0; j<=maxProtons; j++){
            bool populated = false;
            // Check if we have an entry for this number of protons
            for (int k=0; k<sortedList[i].size(); k++){
                int nProtons = countSubstring(sortedList[i][k], "_P_");
                if (sortedList[i][k].at(sortedList[i][k].length()-1) == 'P') nProtons++;

                if (nProtons == j){
                    // Get the event fraction
                    if (data.at(dataSets.at(0)).find(sortedList[i][k]) != data.at(dataSets.at(0)).end()){
                        double frac = 100*((double) data.at(dataSets.at(0)).at(sortedList[i][k]).second) / ((double) data.at(dataSets.at(0)).at(sortedList[i][k]).first);
                        file << " & " << GetCol(dataSets, data, sortedList, useCols, i, j) << std::setprecision(3) << frac;
                    }
                    else{
                        file << " & $-$";  
                    }
                    if (dataSets.size() == 2){
                        if (data.at(dataSets.at(1)).find(sortedList[i][k]) != data.at(dataSets.at(1)).end()){
                            double frac = 100*((double) data.at(dataSets.at(1)).at(sortedList[i][k]).second) / ((double) data.at(dataSets.at(1)).at(sortedList[i][k]).first);
                            file << " (" << GetCol(dataSets, data, sortedList, useCols, i, j) << std::setprecision(3) << frac << ")";
                        }
                        else{
                            file << " ($-$)";
                        }
                    }
                    populated = true;
                    break;
                }
            }
            if (!populated){
                file << " & $-$";
            }
        }
        file << "\\\\" << std::endl;

        if (i != sortedList.size()-1){
            for (int j=0; j<=maxProtons; j++){
                file << "&";
            }
            file << "\\\\" << std::endl;
        }
        
    }


    file << "\\end{tabular}" << std::endl;
    // Close and we are done!
    file.close();
    std::cout << "File written with name " << fileName << std::endl;
}

// -----------------------------------------------------------------------------

void InterpretSettings(std::ifstream &inFile, std::vector<std::string> &interactionTypes, std::map<std::string, DataSet> &data, std::vector<std::string> &files){
    // Read through the file line by line 
    std::string line;
    int lineNumber = 1;

    bool makingTable = false;
    std::string tableName;

    std::vector<std::string> dataSets;
    bool useCols = true;
    std::vector<std::string> interactions;
    std::vector<std::string> omits;

    while (std::getline(inFile, line)) {
        // Ignore blank lines
        if (line.length() == 0) {
            lineNumber++;
            continue;
        }


        // Lines starting with > indicate a new table
        if (line.at(0) == '>'){
            if (!makingTable){
                // Start a new table
                makingTable = true;

                dataSets.clear();
                interactions.clear();
                useCols = true;

                tableName = line.substr(1, line.length()-1);
                
                lineNumber++;
                continue;
            }
            else{
                std::cerr << "Error: Line " << lineNumber << "." << std::endl;
                std::cerr << "       Trying to start a new table without finishing the previous one!" << std::endl;
                exit(1);
            }
        }

        // Lines starting with < indicate the end of a table
        if (line.at(0) == '<'){
            if (makingTable){
                // End the table
                makingTable = false;

                // Check we have enough information to make the table
                if ((dataSets.size() == 1 || dataSets.size() == 2) && interactions.size() > 0){
                    // Make the table
                    MakeTable(tableName, dataSets, interactions, omits, useCols, data, interactionTypes);
                    lineNumber++;
                    continue;
                }
                else{
                    std::cerr << "Error: Line " << lineNumber << "." << std::endl;
                    std::cerr << "       You must only supply one or two data sets, and must choose the interactions you want to include." << std::endl;
                    exit(1);
                }
            }
            else{
                std::cerr << "Error: Line " << lineNumber << "." << std::endl;
                std::cerr << "       Trying to end a table that hasn't been started yet!" << std::endl;
                exit(1);
            }
        }
       
        // Strip all white space
        StripWhitespace(line);

        if (std::count(line.begin(), line.end(), ':') == 1){
            std::size_t colon = line.find(':');
            std::string key = line.substr(0, colon);
            std::string val = line.substr(colon+1, line.length()-colon-1);

            // Lines starting with "data" indicate the data set(s) to use
            if (key.compare(std::string("data")) == 0){
                // Data should either be one or two (separated by a comma) of the data files given
                if (std::count(val.begin(), val.end(), ',') == 0){
                    if (std::count(files.begin(), files.end(), val) == 1){
                        // Add this data set to the 
                        dataSets.push_back(val);               
                        lineNumber++;
                        continue;
                    }
                    else{
                        std::cerr << "Error: Line " << lineNumber << "." << std::endl;
                        std::cerr << "       You didn't pass the file \"" << val << "\"!" << std::endl;
                        exit(1);
                    }
                }
                else if (std::count(val.begin(), val.end(), ',') == 1){
                    std::size_t comma = val.find(',');
                    std::string val1 = val.substr(0, comma); 
                    std::string val2 = val.substr(comma + 1, val.length() - comma - 1); 
                    if (std::count(files.begin(), files.end(), val1) == 1){
                        // Add this data set to the 
                        dataSets.push_back(val1);               
                        if (std::count(files.begin(), files.end(), val2) == 1){
                            // Add this data set to the 
                            dataSets.push_back(val2);               
                            lineNumber++;
                            continue;
                        }
                        else{
                            std::cerr << "Error: Line " << lineNumber << "." << std::endl;
                            std::cerr << "       You didn't pass the file \"" << val2 << "\"!" << std::endl;
                            exit(1);
                        }
                    }
                    else{
                        std::cerr << "Error: Line " << lineNumber << "." << std::endl;
                        std::cerr << "       You didn't pass the file \"" << val1 << "\"!" << std::endl;
                        exit(1);
                    }
                }
                else{
                    std::cerr << "Error: Line " << lineNumber << "." << std::endl;
                    std::cerr << "       Please only list one or two data sets (separated by a comma)." << std::endl;
                    exit(1);
                }
            }

            // Lines starting with "use-cols" indicate if we should add color to the table
            if (key.compare(std::string("use-cols")) == 0){
                // This should just be true or false
                if (val.compare("true")  == 0) 
                    useCols = true;
                else if (val.compare("false") == 0)
                    useCols = false;
                else{
                    std::cerr << "Error: Line " << lineNumber << "." << std::endl;
                    std::cerr << "       use-cols can only be true or false." << std::endl;
                    exit(1);
                }

                lineNumber++;
                continue;
            }
        
            // Lines starting with "interactions" indicate which interactions to include in the table
            if (key.compare(std::string("interactions")) == 0){
                char currentControl = '+';
                while (val.length() != 0){
                    // Find the next control character (+ or -)
                    // Always make the first control character +
                    char control;
                    for (int i=0; i<val.length(); ++i){
                        bool shouldBreak = false;
                        switch (val.at(i)){
                            case '+':
                                control = '+';
                                shouldBreak = true;
                                break;
                            case '-':
                                control = '-';
                                shouldBreak = true;
                                break;
                            default:
                                control = 'X';
                        }
                        if (shouldBreak) break;
                    }

                    // Extract the next element from the list and leave the remainder
                    std::string element;
                    if (control == 'X'){
                        element = val;
                        val = "";
                    }
                    else{
                        std::size_t pos = val.find(control);
                        element   = val.substr(0, pos); 
                        std::string remainder = val.substr(pos + 1, val.length() - pos - 1);    
                        val = remainder;
                    }


                    // Check the element is valid
                    if (element.compare(std::string("all")) != 0 && std::count(interactionTypes.begin(), interactionTypes.end(), element) == 0){
                        std::cerr << "Error: Line " << lineNumber << "." << std::endl;
                        std::cerr << "       Unknown interaction type: " << element << std::endl;
                        exit(1);        
                    }

                    // Add it to the list
                    if (currentControl == '+'){
                        if (std::count(interactions.begin(), interactions.end(), element) == 0){
                            interactions.push_back(element);
                        }
                    }

                    // Remove if from the list
                    if (currentControl == '-'){
                        if (element.compare(std::string("all")) != 0){
                            if (std::count(omits.begin(), omits.end(), element) == 0){
                                omits.push_back(element);
                            }                        
                        }
                        else{
                            std::cerr << "Error: Line " << lineNumber << "." << std::endl;
                            std::cerr << "       You can't omit \"all\"!" << std::endl;
                            exit(1);                                
                        }
                    }

                    currentControl = control;
                }
                lineNumber++;
                continue;
            }

            std::cerr << "Error: Line " << lineNumber << "." << std::endl;
            std::cerr << "       Unknown key: " << key << std::endl;
            exit(1);
        }
        else{
            std::cerr << "Error: Line " << lineNumber << "." << std::endl;
            std::cerr << "       Something is wrong here..." << std::endl;
            exit(1);
        }
        

        lineNumber++;
    }
}

