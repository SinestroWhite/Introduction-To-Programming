#include <iostream>
#include <string>
#include <vector>

/*
    Задача За учениците в един клас се съхранява следната информация: пълно име,
   успех от I срок, успех от II срок. Напишете програма, която въвежда
   информация за учениците и: отпечатва името на ученика с най-слаб успех за
   първи срок; отпечатва първото име на ученика с най-висок среден успех за
   годината.
*/

const int semesters = 2;
struct student {
    std::string name;
    double scores[semesters];
};

int main() {
    std::vector<student> all_students;
    int students_count;

    std::cout << "How many students will be in the class?\n";
    std::cin >> students_count;

    for (int i = 0; i < students_count; i++) {
        student tmp;
        std::cin >> tmp.name;
        for (int j = 0; j < semesters; j++) {
            std::cin >> tmp.scores[j];
        }
        all_students.push_back(tmp);
    }

    for (int i = 0; i < all_students.size(); i++) {
        std::cout << "We have a student called " << all_students[i].name
                  << " he has the following marks: ";
        for (int j = 0; j < semesters; j++) {
            std::cout << all_students[i].scores[j] << " ";
        }
        std::cout << "\n";
    }

    double lowest = 7;
    std::vector<std::string> names;
    for (int i = 0; i < all_students.size(); i++) {
        if (all_students[i].scores[0] < lowest) {
            lowest = all_students[i].scores[0];
            names.clear();
            names.push_back(all_students[i].name);
        } else if (all_students[i].scores[0] == lowest) {
            names.push_back(all_students[i].name);
        }
    }

    std::cout << "These are the poorest students with score " << lowest
              << ":\n";
    for (int i = 0; i < names.size(); i++) {
        std::cout << names[i] << "\n";
    }

    names.clear();
    double highest_average = 1;
    for (int i = 0; i < all_students.size(); i++) {
        double student_average = 0.0;
        for (int j = 0; j < semesters; j++) {
            student_average += all_students[i].scores[j];
        }
        student_average /= semesters;
        if (student_average > highest_average) {
            highest_average = student_average;
            names.clear();
            names.push_back(all_students[i].name);
        } else if (student_average == highest_average) {
            names.push_back(all_students[i].name);
        }
    }

    std::cout << "These are the best students with average score "
              << highest_average << ":\n";
    for (int i = 0; i < names.size(); i++) {
        std::cout << names[i] << "\n";
    }

    return 0;
}
