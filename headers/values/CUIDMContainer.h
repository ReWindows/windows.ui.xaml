#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
class CUIDMContainer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIDMContainer@@SAJPEAPEAV1@PEAVCCoreServices@@PEAVCUIElement@@@Z
    static long Create(CUIDMContainer * *, CCoreServices *, CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationPrimaryContent@CUIDMContainer@@QEBAJPEAVCUIElement@@PEAUXSIZEF@@PEAUXRECTF_WH@@PEAW4XDMAlignment@@3PEAM4PEAI55@Z
    long GetManipulationPrimaryContent(CUIElement *, XSIZEF *, XRECTF_WH *, int *, int *, float *, float *, unsigned int *, unsigned int *, unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationPrimaryContentTransform@CUIDMContainer@@QEBAJPEAVCUIElement@@IIIPEAIPEAM22@Z
    long GetManipulationPrimaryContentTransform(CUIElement *, unsigned int, unsigned int, unsigned int, unsigned int *, float *, float *, float *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationViewport@CUIDMContainer@@QEBAJPEAVCUIElement@@PEAUXRECTF_WH@@PEAVCMILMatrix@@PEAW4XDMConfigurations@@33PEAEPEAPEAW45@PEAW4XDMMotionTypes@@PEAW4XDMOverpanMode@@7@Z
    long GetManipulationViewport(CUIElement *, XRECTF_WH *, CMILMatrix *, int *, int *, int *, unsigned char *, int * *, int *, int *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyBringIntoViewportNeeded@CUIDMContainer@@QEAAJPEAVCUIElement@@MMMII@Z
    long NotifyBringIntoViewportNeeded(CUIElement *, float, float, float, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyContentAlignmentAffectingPropertyChanged@CUIDMContainer@@QEAAJPEAVCUIElement@@III@Z
    long NotifyContentAlignmentAffectingPropertyChanged(CUIElement *, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyManipulatabilityAffectingPropertyChanged@CUIDMContainer@@QEAAJI@Z
    long NotifyManipulatabilityAffectingPropertyChanged(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyManipulationProgress@CUIDMContainer@@QEAAJPEAVCUIElement@@W4DirectManipulationState@@MMMMMMMMIIII@Z
    long NotifyManipulationProgress(CUIElement *, int, float, float, float, float, float, float, float, float, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetManipulationHandler@CUIDMContainer@@QEAAJPEAUIDirectManipulationContainerHandler@@@Z
    long SetManipulationHandler(IDirectManipulationContainerHandler *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetManipulationHandlerWantsNotifications@CUIDMContainer@@QEAAJPEAVCUIElement@@I@Z
    long SetManipulationHandlerWantsNotifications(CUIElement *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPointedElement@CUIDMContainer@@QEAAJPEAVCDependencyObject@@@Z
    long SetPointedElement(CDependencyObject *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUIDMContainer@@MEAA@XZ
    virtual ~CUIDMContainer();
};
