#ifndef COW_H
#define COW_H

class Cow
{
public:
    Cow(int init_health=100, bool init_peaceful=true, int init_room=1);
    ~Cow();
    int move(int direction=-1);
private:
    int health;
    bool peaceful;
    int current_room;
};

#endif
