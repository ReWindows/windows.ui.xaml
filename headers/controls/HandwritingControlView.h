#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class HandwritingControlView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTextBoxView@HandwritingControlView@DirectUI@@QEAAJPEAVCDependencyObject@@@Z
    long ApplyTextBoxView(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeVisibleImpl@HandwritingControlView@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@URect@Foundation@6@ENNNNPEAU786@PEAN3@Z
    long MakeVisibleImpl(::Windows::UI::Xaml::IUIElement *, WindissectOpaque, unsigned char, double, double, double, double, WindissectOpaque *, double *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelDown@HandwritingControlView@DirectUI@@UEAAJI@Z
    virtual long MouseWheelDown(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelLeft@HandwritingControlView@DirectUI@@UEAAJI@Z
    virtual long MouseWheelLeft(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelRight@HandwritingControlView@DirectUI@@UEAAJI@Z
    virtual long MouseWheelRight(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelUp@HandwritingControlView@DirectUI@@UEAAJI@Z
    virtual long MouseWheelUp(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewCreated@HandwritingControlView@DirectUI@@SAJPEAVCDependencyObject@@0@Z
    static long ViewCreated(CDependencyObject *, CDependencyObject *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HandwritingControlView@DirectUI@@MEAA@XZ
    virtual ~HandwritingControlView();
};
} // namespace DirectUI
