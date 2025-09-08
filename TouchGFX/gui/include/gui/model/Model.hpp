#ifndef MODEL_HPP
#define MODEL_HPP

#include <gui/model/ModelListener.hpp>

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();

    // === Ajouté pour FFT ===
    void newSpectrumData(const float* data, int length);

protected:
    ModelListener* modelListener;
};

#endif // MODEL_HPP
