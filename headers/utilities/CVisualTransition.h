#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class CVisualTransition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CVisualTransition@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsDefault@CVisualTransition@@QEAA_NXZ
    bool GetIsDefault();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CVisualTransition@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CVisualTransition@@UEAAJXZ
    virtual long InitInstance();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsZeroDuration@CVisualTransition@@QEAA_NXZ
    bool IsZeroDuration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDynamicStoryboardCompleted@CVisualTransition@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnDynamicStoryboardCompleted(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExplicitStoryboardCompleted@CVisualTransition@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnExplicitStoryboardCompleted(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterName@CVisualTransition@@UEAAJPEAVCDependencyObject@@I@Z
    virtual long RegisterName(CDependencyObject *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterTransitionalStoryboardCompletedEvent@CVisualTransition@@QEAAJPEAVCStoryboard@@PEAVCControl@@PEAVCFrameworkElement@@PEAVCVisualState@@3PEAVCVisualStateGroup@@@Z
    long RegisterTransitionalStoryboardCompletedEvent(CStoryboard *, CControl *, CFrameworkElement *, CVisualState *, CVisualState *, CVisualStateGroup *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVisualTransition@@MEAA@XZ
    virtual ~CVisualTransition();
};
