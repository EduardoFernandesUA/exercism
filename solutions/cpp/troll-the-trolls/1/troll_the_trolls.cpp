namespace hellmath {

// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.
enum class AccountStatus {
    troll, guest, user, mod
};
    
// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.
enum class Action{
    read, write, remove
};
    
// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.
bool display_post(AccountStatus a, AccountStatus b) {
    return a!=AccountStatus::troll || (a==AccountStatus::troll && b==AccountStatus::troll);
}

// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.
bool permission_check(Action action, AccountStatus account) {
    switch(action) {
        case Action::read:
            return true;
        case Action::write:
            return account!=AccountStatus::guest;
        case Action::remove:
            return account==AccountStatus::mod;
        default:
            return false;
    };
}

// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.
bool valid_player_combination(AccountStatus a, AccountStatus b) {
    return (a==AccountStatus::troll && b==AccountStatus::troll) || (a!=AccountStatus::troll && a!=AccountStatus::guest && b!=AccountStatus::troll && b!=AccountStatus::guest);
}

// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.
bool has_priority(AccountStatus a, AccountStatus b) {
    switch(a) {
        case AccountStatus::mod:
            return b!=AccountStatus::mod;
        case AccountStatus::user:
            return b==AccountStatus::guest || b==AccountStatus::troll;
        case AccountStatus::guest:
            return b==AccountStatus::troll;
        case AccountStatus::troll:
            return false;
        default:
            return false;
    };
}
    
}  // namespace hellmath