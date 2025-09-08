#include <gui/fenetre_fft_screen/Fenetre_fftView.hpp>
#include <gui/fenetre_fft_screen/Fenetre_fftPresenter.hpp>

Fenetre_fftPresenter::Fenetre_fftPresenter(Fenetre_fftView& v)
    : view(v)
{
}

void Fenetre_fftPresenter::activate() {}
void Fenetre_fftPresenter::deactivate() {}

void Fenetre_fftPresenter::updateSpectrum(const float* data, int length)
{
    view.updateSpectrum(data, length);
}
