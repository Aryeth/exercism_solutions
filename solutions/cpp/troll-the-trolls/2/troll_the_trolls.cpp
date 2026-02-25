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

    // returns true if stat2 can view the post
    bool display_post(AccountStatus stat1, AccountStatus stat2){
        if((stat1==0 && stat2==0) || (stat1!=0 && stat2==0)){
            return true;
        }else if (stat1==0 || stat2==0){
            return false;
        }
        return true;
    }

    // Returns true if stat has permission do do the Action act
    bool permission_check(Action act, AccountStatus stat){
        if(stat==1 && act==0){
            return true;
        }else if ((stat == 2 || stat==0)&&(act==0 || act==1)){
            return true;
        }else if (stat == 3 && (act==0 || act==1 || act==2)){
            return true;
        }
        return false;
    }

    // Checks if the 2 players can be matched
    bool valid_player_combination(AccountStatus stat1, AccountStatus stat2){
        if(stat1==0 && stat2==0){
            return true;
        }else if (stat1==1 || stat2==1){
            return false;
        }else if(stat1==0 || stat2==0){
            return false;
        }
        return true;
    }

    //checks the priority of the account
    bool has_priority(AccountStatus stat1, AccountStatus stat2){
        return stat1>stat2;
    }


}  // namespace hellmath