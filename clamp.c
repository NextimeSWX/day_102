int stu_clamp(int low, int high, int nb) {
    if (low > nb) {
        return (low);
    }
    else if (high < nb) {
        return (high);
    } else {
        return (nb);
    }
}
