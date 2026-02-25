namespace hellmath {

// account types: `troll`, `guest`, `user`, and `mod`.
    enum AccountStatus {
        troll,
        guest,
        user,
        mod,
    };

// permission types: `read`, `write`, and `remove`. 
    enum Action {
        read,
        write,
        remove,
    };

    // returns true if viewer can view the post
    bool display_post(AccountStatus poster, AccountStatus viewer){
        return (poster!=troll || (viewer==troll && poster==troll));
    }

    // Returns true if stat has permission do do the Action act
    bool permission_check(Action act, AccountStatus userStatus){
        switch(userStatus){
            case troll:
            case user:
                return act!=remove;
            case guest:
                return act==read;
            case mod:
                return true;
            default:
                return false;
        }
        
    }

    // Checks if the 2 players can be matched
    bool valid_player_combination(AccountStatus player1, AccountStatus player2){
        const bool anyIsGuest = (player1 == guest || player2 == guest);
        const bool onlyOneTroll = ((player1==troll) ^ (player2==troll));
        return !onlyOneTroll && !anyIsGuest;
    }

    //checks the priority of the account
    bool has_priority(AccountStatus stat1, AccountStatus stat2){
        return stat1>stat2;
    }


}  // namespace hellmath