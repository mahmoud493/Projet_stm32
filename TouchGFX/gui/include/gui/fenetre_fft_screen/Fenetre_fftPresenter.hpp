#ifndef FENETRE_FFTPRESENTER_HPP
#define FENETRE_FFTPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

class Fenetre_fftView;

class Fenetre_fftPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    Fenetre_fftPresenter(Fenetre_fftView& v);

    virtual void activate();
    virtual void deactivate();

    // === Implémentation de updateSpectrum ===
    virtual void updateSpectrum(const float* data, int length) override;

private:
    Fenetre_fftPresenter();

    Fenetre_fftView& view;
};

#endif // FENETRE_FFTPRESENTER_HPP

