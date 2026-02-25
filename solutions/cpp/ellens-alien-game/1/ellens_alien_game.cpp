namespace targets {
// TODO: Insert the code for the alien class here
    class Alien {
  public:
     int x_coordinate;
    int y_coordinate; 
    Alien(int x, int y) {
        x_coordinate = x;
        y_coordinate = y;
    }
    int get_health(){
        return health;
    }
    int hit(){
        if(health>0){health--;}
        return health;
    }
    bool is_alive(){
        return health>0;
    }
    bool collision_detection(Alien x){
        return (x.x_coordinate == x_coordinate && x.y_coordinate==y_coordinate);
    }
    bool teleport(int x, int y){
        x_coordinate=x;
        y_coordinate=y;
        return true;
    }
  private:             
    int health{3};     
};

    
}  // namespace targets