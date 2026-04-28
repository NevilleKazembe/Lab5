#pragma once

class rec {
protected:
    int mWidth;
    int mHeight;
public:
    void SetValues(int width, int height);
    int Area();   // <-- must be declared here
};
