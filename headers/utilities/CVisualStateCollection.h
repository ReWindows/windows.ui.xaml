#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CVisualStateCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CVisualStateCollection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CVisualStateCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PE Export
    // Symbol: ?ShouldEnsureNameResolution@CVisualStateCollection@@UEAAIXZ
    virtual unsigned int ShouldEnsureNameResolution();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVisualStateCollection@@UEAA@XZ
    virtual ~CVisualStateCollection();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStandardNameScopeParent@CVisualStateCollection@@EEAAPEAVCDependencyObject@@XZ
    virtual CDependencyObject * GetStandardNameScopeParent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideStandardNameScopeParent@CVisualStateCollection@@EEAAXPEAVCDependencyObject@@@Z
    virtual void OverrideStandardNameScopeParent(CDependencyObject *);
};
