int numWaterBottles(int numBottles, int numExchange) {
    int filled = 0;
    int empty = 0;  
    while(numBottles!= 0){
    filled += numBottles;
    empty += numBottles;
    numBottles = empty/numExchange;
    empty = empty%numExchange;
}
return filled;
}