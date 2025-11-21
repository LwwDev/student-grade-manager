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

int Menu();
void DisplayStudents(std::string Students[], double Grade[], int Size);


int main(){
    int Action = Menu();
    std::string Students[] = {"Liam", "Erica", "Leon", "Felix", "Eric"};
    double Grade[]         = {3.14, 69.9, 0.1, 2.1, 3.9};
    int Size = sizeof(Students)/sizeof(Students[0]);

    switch(Action){
        case 1: DisplayStudents(Students, Grade, Size); break;

        default: std::cout << "error"; break;
    }

}

void DisplayStudents(std::string Students[], double Grade[], int Size){
    for(int i = 0; i < Size; i++){
        std::cout << "Student " << i+1 << " " << Students[i] << " Grade: " << Grade[i] << " " << '\n';
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
              << "3. Show class average\n"
              << "4. Find highest and lowest grade\n"
              << "5. Search for student\n"
              << "6. Exit\n\n";
    std::cin >> MenuChoice;

    switch(MenuChoice){
        case '1': Action = 1; stop = true; break;
        case '2': Action = 2; stop = true; break;
        case '3': Action = 3; stop = true; break;
        case '4': Action = 4; stop = true; break;
        case '5': Action = 5; stop = true; break;
        case '6': Action = 6; stop = true; break;
        default: system("cls"); std::cout << "Invalid input\n "; break;
    }
    }
    while(!stop);

    return Action;
}           