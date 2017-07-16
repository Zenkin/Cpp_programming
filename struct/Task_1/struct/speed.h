#ifndef SPEED_H
#define SPEED_H

struct Linear {
    int x, y, z;
};

struct Speed {
    /// Linear linear;
    Linear linear, rotation;
};

#endif // SPEED_H
