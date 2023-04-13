class analogControlDevice {
    bool Q = 0;
    public:
    void set_Q() {
        Q = (Q + 1) % 2;  //1 -> 0, 0 -> 1
    }
};