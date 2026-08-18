#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
class CTouchableRectangle {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTouchableRectangle@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoFinalManipulation@CTouchableRectangle@@QEAAJUXPOINT@@_NH@Z
    long DoFinalManipulation(XPOINT, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDoubleTapped@CTouchableRectangle@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnDoubleTapped(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHolding@CTouchableRectangle@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnHolding(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@CTouchableRectangle@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerMoved(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@CTouchableRectangle@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerPressed(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@CTouchableRectangle@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerReleased(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTapped@CTouchableRectangle@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnRightTapped(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTapped@CTouchableRectangle@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnTapped(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseTouchRectPointerCapture@CTouchableRectangle@@QEAAJPEA_NPEAH@Z
    long ReleaseTouchRectPointerCapture(bool *, int *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentGripper@CTouchableRectangle@@AEBAPEAVCRichEditGripper@@XZ
    CRichEditGripper * GetParentGripper() const;
};
