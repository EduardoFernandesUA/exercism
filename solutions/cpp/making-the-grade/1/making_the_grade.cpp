#include <array>
#include <string>
#include <vector>
#include <cmath>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    std::vector<int> ret(student_scores.size());
    for(int i=0; i<ret.size(); i++) {
        ret[i] = static_cast<int>(student_scores[i]);
    }
    return ret;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int ret = 0;
    for(auto s : student_scores) {
        if(s<=40) ret++;
    }
    return ret;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    std::array<int, 4> ret{41};
    int total_range = highest_score - 40;
    for(int i=1; i<4; i++) {
        ret[i] = 40 + total_range/4*i+1;
    }
    return ret;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::vector<std::string> ret(student_scores.size());
    for(int i=0; i<ret.size(); i++) {
        ret[i] = std::to_string(i+1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]);
    }
    return ret;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    for(int i=0; i<student_scores.size(); i++) {
        if(student_scores[i]==100) return student_names[i];
    }
    return "";
}
