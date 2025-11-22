/*Student grade Mangaer
req: 
    storedata for 5 students name (string) and grades (char or double)

    menu opt add a student 

    display all students with their grades 

    calc and display avg

    find highest lowest grade + name

    search for student by name

    exit
*/ 
#include <iostream>
#include <cstdlib>
#include <vector>

int Menu();
void DisplayStudents(const std::vector<std::string>& Students, const std::vector<double>& Grades);
void AddStudent(std::vector<std::string>& Students, std::vector<double>& Grades);
void RemoveStudent(std::vector<std::string>& Students, std::vector<double>& Grades);


int main(){

std::vector<std::string> Students = {"Liam", "Erica", "Leon", "Felix", "Eric"};
std::vector<double> Grades = {3.14, 69.9, 0.1, 2.1, 3.9};

while(true){
        char Action = Menu();

        switch(Action){
            case 1: DisplayStudents(Students, Grades); break;
            case 2: AddStudent(Students, Grades); break;
            case 3: RemoveStudent(Students, Grades); break;
            case 7: return 0; 

            default: std::cout << "error"; break;
        }
    }
}



void RemoveStudent(std::vector<std::string>& Students, std::vector<double>& Grades){
    DisplayStudents(Students, Grades);

    int index; 
    std::cout << "Enter the student number to remove: ";
    std::cin >> index; 
    index--;

    if (index >= 0 && index < Students.size()) {
        
        Students.erase(Students.begin() + index);
        Grades.erase(Grades.begin() + index);

        std::cout << "Student removed!\n";
    }
    else {
        std::cout << "Invalid student number!\n";
    }





}


void AddStudent(std::vector<std::string>& Students, std::vector<double>& Grades){
    std::string name; 
    double grade;

    std::cout << "Enter student name: ";
    std::cin >> name;

    std::cout << "Enter student grade: ";
    std::cin >> grade;

    Students.push_back(name);
    Grades.push_back(grade);
    
    std::cout << "Student added Successfully\n";
}



void DisplayStudents(const std::vector<std::string>& Students, const std::vector<double>& Grades){
    for(int i = 0; i < Students.size(); i++){
        std::cout << "Student " << i+1 << " | " << Students[i] << " | Grade: " << Grades[i] << " " << '\n'; 
    }
    
}

int Menu(){
    int Action = 0;
    char MenuChoice;
    bool stop = false;

    do{
    std::cout << "\n*********************************\n";
    std::cout << "***** Student Grade Manager *****\n";
    std::cout << "*********************************\n\n";
    std::cout << "1. Show all students\n"
              << "2. Add Student\n"
              << "3. Remove Student\n"
              << "4. Show class average\n"
              << "5. Find highest and lowest grade\n"
              << "6. Search for student\n"
              << "7. Exit\n\n";
    std::cin >> MenuChoice;

    switch(MenuChoice){
        case '1': Action = 1; stop = true; break;
        case '2': Action = 2; stop = true; break;
        case '3': Action = 3; stop = true; break;
        case '4': Action = 4; stop = true; break;
        case '5': Action = 5; stop = true; break;
        case '6': Action = 6; stop = true; break;
        case '7': Action = 7; stop = true; break;
        default: system("cls"); std::cout << "Invalid input\n "; break;
    }
    }
    while(!stop);

    return Action;
}           