#ifndef RESERVOIRSAMPLE_H
#define RESERVOIRSAMPLE_H

#include <vector>
#include <algorithm>

class ReservoirSample
{
    public:
        ReservoirSample();
        virtual ~ReservoirSample();
        void setSize(int size);
        std::vector<int> getSample();
        void getOne(int x);
    protected:
    private:
        std::vector<int> ans;
        int size;
        int total;
};

#endif // RESERVOIRSAMPLE_H
