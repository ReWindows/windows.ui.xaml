#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CUIAHostWindow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CUIAHostWindow@@SAJAEBVUIAHostEnvironmentInfo@@PEAUIXcpHostSite@@PEAVCDependencyObject@@PEAPEAV1@@Z
    static long Create(UIAHostEnvironmentInfo const &, IXcpHostSite *, CDependencyObject *, CUIAHostWindow * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUIAHostWindow@@UEAA@XZ
    virtual ~CUIAHostWindow();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValueOverride@CUIAHostWindow@@MEAAJHPEAUtagVARIANT@@@Z
    virtual long GetPropertyValueOverride(int, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootVisual@CUIAHostWindow@@MEAAJAEAV?$xref_ptr@VCDependencyObject@@@@_N@Z
    virtual long GetRootVisual(WindissectOpaque &, bool);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUIAHostWindow@@AEAA@AEBVUIAHostEnvironmentInfo@@PEAUIXcpHostSite@@PEAVCDependencyObject@@@Z
    CUIAHostWindow(UIAHostEnvironmentInfo const &, IXcpHostSite *, CDependencyObject *);
};
