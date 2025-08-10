namespace targets {
// TODO: Insert the code for the alien class here
class Alien {
    private:
    int health;
    public:
    int x_coordinate, y_coordinate;

    Alien(int x, int y) :
    health(3), x_coordinate(x), y_coordinate(y) {
        
    }

    int get_health() { return health; }

    bool hit() {
        if(health>0) {
            health -= 1;
        }
        return true;
    }

    bool is_alive() { return health>0; }

    bool teleport(int x, int y) {
        x_coordinate = x;
        y_coordinate = y;
        return true;
    }

    bool collision_detection(Alien other) {
        return x_coordinate == other.x_coordinate && y_coordinate == other.y_coordinate;
    }
};
}  // namespace targets