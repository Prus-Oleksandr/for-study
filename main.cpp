#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int MAX_STUDENTS = 100;

class Student {
public:
    string surname;
    string name;
    int math;
    int physics;
    int computer_science;

    float average_mark() const {
        return (math + physics + computer_science) / 3.0;
    }
};

void bubble_sort(Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].average_mark() < arr[j + 1].average_mark()) {
                Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main() {
    Student students[MAX_STUDENTS];
    int n = 0;
    ifstream file("data.txt");
    if (file.is_open()) {
        while (file >> students[n].surname >> students[n].name >> students[n].math >> students[n].physics >> students[n].computer_science) {
            n++;
        }
        file.close();
    } else {
        cout << "Error opening file!" << endl;
        return 1;
    }

    bubble_sort(students, n);
    for (int i = 0; i < n; i++) {
        if (students[i].average_mark() > 4.0) {
            cout << students[i].surname << " " << students[i].name << ": " << students[i].average_mark() << endl;
        }
    }

    return 0;
}
