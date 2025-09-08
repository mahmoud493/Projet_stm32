#include <gui/fenetre_fft_screen/Fenetre_fftView.hpp>
#include <touchgfx/Color.hpp>
#include <touchgfx/widgets/graph/GraphWrapAndClear.hpp>
#include <touchgfx/widgets/graph/GraphElements.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>

using namespace touchgfx;

Fenetre_fftView::Fenetre_fftView() {}

void Fenetre_fftView::setupScreen()
{
    Fenetre_fftViewBase::setupScreen();

    // Configure la ligne FFT
    D_Graph1Line1Painter.setColor(Color::getColorFromRGB(0, 255, 0));
    D_Graph1Line1.setPainter(D_Graph1Line1Painter);

    // Ajoute la ligne au graphe
    D_Graph1.addGraphElement(D_Graph1Line1);

    // Nettoie
    D_Graph1.clear();
}

void Fenetre_fftView::tearDownScreen()
{
    Fenetre_fftViewBase::tearDownScreen();
}

void Fenetre_fftView::updateSpectrum(const float* data, int length)
{
    D_Graph1.clear();
    int maxPoints = (length > 100) ? 100 : length;

    for (int i = 0; i < maxPoints; i++)
    {
        float value = data[i];
        if (value < 0.0f) value = 0.0f;
        if (value > 1.0f) value = 1.0f;

        // Ici on ajoute directement au graphe
        D_Graph1.addDataPoint(value);
    }

    D_Graph1.invalidate();
}
