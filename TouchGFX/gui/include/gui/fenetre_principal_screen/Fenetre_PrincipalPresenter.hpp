#ifndef FENETRE_PRINCIPALPRESENTER_HPP
#define FENETRE_PRINCIPALPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Fenetre_PrincipalView;

class Fenetre_PrincipalPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    Fenetre_PrincipalPresenter(Fenetre_PrincipalView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~Fenetre_PrincipalPresenter() {}

private:
    Fenetre_PrincipalPresenter();

    Fenetre_PrincipalView& view;
};

#endif // FENETRE_PRINCIPALPRESENTER_HPP
