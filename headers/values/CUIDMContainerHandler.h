#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 20 member(s).
class CUIDMContainerHandler {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIDMContainerHandler@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringIntoViewport@CUIDMContainerHandler@@UEAAJPEAVCUIElement@@AEAUXRECTF_WH@@MMMIIIIIIPEAI@Z
    virtual long BringIntoViewport(CUIElement *, XRECTF_WH &, float, float, float, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIDMContainerHandler@@SAJPEAPEAV1@PEAVCInputServices@@PEAVCUIElement@@@Z
    static long Create(CUIDMContainerHandler * *, CInputServices *, CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryContentTransform@CUIDMContainerHandler@@UEAAJPEAVCUIElement@@IAEAM1111@Z
    virtual long GetPrimaryContentTransform(CUIElement *, unsigned int, float &, float &, float &, float &, float &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCanManipulateElements@CUIDMContainerHandler@@UEAAJIII@Z
    virtual long NotifyCanManipulateElements(unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyLockScreenModeChanged@CUIDMContainerHandler@@UEAAJPEAVCUIElement@@@Z
    virtual long NotifyLockScreenModeChanged(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyManipulatableElementChanged@CUIDMContainerHandler@@UEAAJPEAVCUIElement@@0@Z
    virtual long NotifyManipulatableElementChanged(CUIElement *, CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPrimaryContentChanged@CUIDMContainerHandler@@UEAAJPEAVCUIElement@@IIIIII@Z
    virtual long NotifyPrimaryContentChanged(CUIElement *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPrimaryContentTransformChanged@CUIDMContainerHandler@@UEAAJPEAVCUIElement@@IIII@Z
    virtual long NotifyPrimaryContentTransformChanged(CUIElement *, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySecondaryContentAdded@CUIDMContainerHandler@@UEAAJPEAVCUIElement@@0W4XDMContentType@@@Z
    virtual long NotifySecondaryContentAdded(CUIElement *, CUIElement *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySecondaryContentRemoved@CUIDMContainerHandler@@UEAAJPEAVCUIElement@@0@Z
    virtual long NotifySecondaryContentRemoved(CUIElement *, CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySnapPointsChanged@CUIDMContainerHandler@@UEAAJPEAVCUIElement@@W4XDMMotionTypes@@@Z
    virtual long NotifySnapPointsChanged(CUIElement *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyViewportChanged@CUIDMContainerHandler@@UEAAJPEAVCUIElement@@IIIIIIIIPEAI@Z
    virtual long NotifyViewportChanged(CUIElement *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInputMessage@CUIDMContainerHandler@@UEAAJPEAVCUIElement@@_NAEAI@Z
    virtual long ProcessInputMessage(CUIElement *, bool, unsigned int &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIDMContainerHandler@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConstantVelocities@CUIDMContainerHandler@@UEAAJPEAVCUIElement@@MM@Z
    virtual long SetConstantVelocities(CUIElement *, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopInertialViewport@CUIDMContainerHandler@@UEAAJPEAVCUIElement@@PEA_N@Z
    virtual long StopInertialViewport(CUIElement *, bool *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUIDMContainerHandler@@EEAA@XZ
    virtual ~CUIDMContainerHandler();
};
