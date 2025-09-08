#ifndef FENETRE_FFT_VIEW_HPP
#define FENETRE_FFT_VIEW_HPP

#include <gui_generated/fenetre_fft_screen/Fenetre_fftViewBase.hpp>
#include <gui/fenetre_fft_screen/Fenetre_fftPresenter.hpp>

class Fenetre_fftView : public Fenetre_fftViewBase
{
public:
    Fenetre_fftView();
    virtual ~Fenetre_fftView() {}

    virtual void setupScreen();
    virtual void tearDownScreen();

    // appelée par le Presenter pour mettre à jour la FFT
    void updateSpectrum(const float* data, int length);
};

#endif // FENETRE_FFT_VIEW_HPP
