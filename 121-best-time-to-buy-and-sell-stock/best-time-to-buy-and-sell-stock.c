#include <math.h>

int maxProfit(int* prices, int pricesSize) {
    int max  =  INT_MIN;
    int min = INT_MAX;
    int profit = 0;
    for(int i = 0;i<pricesSize;i++){
if(prices[i] < min){
    min = prices[i];
}
if(prices[i] - min > max){
    profit = prices[i] - min;
    max = profit;
}
    }
    return profit;
    }   