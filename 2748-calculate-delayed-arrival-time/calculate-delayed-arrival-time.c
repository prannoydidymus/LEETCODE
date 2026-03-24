int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    int index =(arrivalTime+delayedTime)%24;
    while(arrivalTime >=1 && arrivalTime<24 && delayedTime>=1 && delayedTime<=24){
    if(index == 24){
        return 0;}
        else
        return index;
}
        return 0;

}