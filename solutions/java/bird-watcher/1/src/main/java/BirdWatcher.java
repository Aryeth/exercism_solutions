
class BirdWatcher {
    private final int[] birdsPerDay;

    public BirdWatcher(int[] birdsPerDay) {
        this.birdsPerDay = birdsPerDay.clone();
    }

    public int[] getLastWeek() {
        return this.birdsPerDay;
    }

    public int getToday() {
       return this.birdsPerDay[this.birdsPerDay.length - 1];
    }

    public void incrementTodaysCount() {
        ++this.birdsPerDay[this.birdsPerDay.length - 1];
    }

    public boolean hasDayWithoutBirds() {
        for(int i = 0; i< this.birdsPerDay.length; i++){
            if(this.birdsPerDay[i] == 0){
                return true;
            }
        }
        return false;
    }

    public int getCountForFirstDays(int numberOfDays) {
        if(numberOfDays >= this.birdsPerDay.length){
            numberOfDays = this.birdsPerDay.length;
        }
        
        int result = 0;
        for(int i = 0; i< numberOfDays; i++){
            result += this.birdsPerDay[i];
        }

        return result;
    }

    public int getBusyDays() {
        int count = 0;
        for(int i = 0; i< this.birdsPerDay.length; i++){
            if(this.birdsPerDay[i] >= 5){
                ++count;
            }
        }
        return count;
    }
}
