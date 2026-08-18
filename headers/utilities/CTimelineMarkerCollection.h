#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CTimelineMarkerCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CTimelineMarkerCollection@@UEAAJPEAVCDependencyObject@@PEAI@Z
    virtual long Append(CDependencyObject *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTimelineMarkerCollection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTimelineMarkerCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CTimelineMarkerCollection@@UEAAJIPEAVCDependencyObject@@@Z
    virtual long Insert(unsigned int, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClear@CTimelineMarkerCollection@@UEAAJXZ
    virtual long OnClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@CTimelineMarkerCollection@@UEAAPEAXI@Z
    virtual void * RemoveAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TimelineSearch@CTimelineMarkerCollection@@QEAAIN@Z
    unsigned int TimelineSearch(double);
};
