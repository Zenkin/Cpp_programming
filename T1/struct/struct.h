#ifndef STRUCT_H
#define STRUCT_H

// test for GITs

struct linear {
    int x, y, z;
};

struct Speed {
    linear linear, rotation;
};
struct Drone {
    Speed Speed;
};

#endif // STRUCT_H
