double angleClock(int hour, int minutes) {
    if(hour < 1 || hour > 12 || minutes < 0 || minutes > 59) {
        return -1;
    }

    double hourangle = 30.0 * hour + 0.5 * minutes;
    double minuteangle = 6.0 * minutes;
    double diff = fabs(hourangle - minuteangle);
    return (diff < 360.0 - diff) ? diff : 360.0 - diff;
}