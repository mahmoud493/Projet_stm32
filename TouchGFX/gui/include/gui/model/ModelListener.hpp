#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

class Model;

class ModelListener
{
public:
    ModelListener() : model(0) {}
    virtual ~ModelListener() {}

    void bind(Model* m)
    {
        model = m;
    }

    // === Ajouté pour FFT ===
    virtual void updateSpectrum(const float* data, int length) {}

protected:
    Model* model;
};

#endif // MODELLISTENER_HPP
