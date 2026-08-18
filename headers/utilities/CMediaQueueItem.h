#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CMediaQueueItem {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMediaQueueItem@@QEAA@PEAUIObject@@@Z
    CMediaQueueItem(IObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNext@CMediaQueueItem@@UEAAPEAUIMediaQueueItem@@XZ
    virtual IMediaQueueItem * GetNext();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrevious@CMediaQueueItem@@UEAAPEAUIMediaQueueItem@@XZ
    virtual IMediaQueueItem * GetPrevious();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CMediaQueueItem@@UEAAPEAUIObject@@XZ
    virtual IObject * GetState();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMediaQueueItem@@UEAA@XZ
    virtual ~CMediaQueueItem();
};
