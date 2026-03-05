int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target) {
    long long int count = 0;
    long long int i;
    for( i = 0;i<hoursSize;i++){
        if(hours[i] >= target){
            count ++;
        }
    }
    return count;
}