#ifndef FENETRE_PRINCIPALVIEW_HPP
#define FENETRE_PRINCIPALVIEW_HPP

#include <gui_generated/fenetre_principal_screen/Fenetre_PrincipalViewBase.hpp>
#include <gui/fenetre_principal_screen/Fenetre_PrincipalPresenter.hpp>

class Fenetre_PrincipalView : public Fenetre_PrincipalViewBase
{
public:
    Fenetre_PrincipalView();
    virtual ~Fenetre_PrincipalView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // FENETRE_PRINCIPALVIEW_HPP
