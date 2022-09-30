char stu_is_printable(char tmp) {
    if (tmp >= 33 && tmp < 177) {
        return 1;
    }
    else {
        return 0;
    }
}
