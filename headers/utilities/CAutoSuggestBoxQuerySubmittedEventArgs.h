#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CAutoSuggestBoxQuerySubmittedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CAutoSuggestBoxQuerySubmittedEventArgs@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CAutoSuggestBoxQuerySubmittedEventArgs@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CAutoSuggestBoxQuerySubmittedEventArgs@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
};
