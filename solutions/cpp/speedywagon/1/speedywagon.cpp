#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:
bool connection_check(pillar_men_sensor *a) {
    return a!=nullptr;
}

int activity_counter(pillar_men_sensor *arr, int size) {
    int total = 0;
    for(int i=0; i<size; i++) {
        total += arr[i].activity;
    }
    return total;
}

bool alarm_control(pillar_men_sensor *a) {
    if(!connection_check(a)) {
        return false;
    }
    return a->activity > 0;
}

// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

bool uv_alarm(pillar_men_sensor *a) {
    if(a==nullptr) return false;
    return uv_light_heuristic(&a->data) > a->activity;
}


}  // namespace speedywagon
