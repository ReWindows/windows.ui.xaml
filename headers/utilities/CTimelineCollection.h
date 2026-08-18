#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CTimelineCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CTimelineCollection@@UEAAJPEAVCDependencyObject@@PEAI@Z
    virtual long Append(CDependencyObject *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTimelineCollection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CycleCheck@CTimelineCollection@@UEAAJPEAVCDependencyObject@@@Z
    virtual long CycleCheck(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStandardNameScopeParent@CTimelineCollection@@UEAAPEAVCDependencyObject@@XZ
    virtual CDependencyObject * GetStandardNameScopeParent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTimelineCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddToCollection@CTimelineCollection@@UEAAJPEAVCDependencyObject@@@Z
    virtual long OnAddToCollection(CDependencyObject *);
    // Category: Method | Source: PE Export
    // Symbol: ?ShouldEnsureNameResolution@CTimelineCollection@@UEAAIXZ
    virtual unsigned int ShouldEnsureNameResolution();
};
