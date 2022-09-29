int is_between(int low, int high, int nb) {

    if (nb > low && nb < high) {
        return 1;
    }
    else if(low >= high) {
        return 0;
    }
    else {
            return 0;
        }
}
