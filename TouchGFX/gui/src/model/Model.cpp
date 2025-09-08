#include <gui/model/Model.hpp>

Model::Model() : modelListener(0)
{
}

void Model::tick()
{
    // tick vide pour l’instant
}

// Propagation du spectre FFT vers le Presenter
void Model::newSpectrumData(const float* data, int length)
{
    if (modelListener != nullptr)
    {
        modelListener->updateSpectrum(data, length);
    }
}
