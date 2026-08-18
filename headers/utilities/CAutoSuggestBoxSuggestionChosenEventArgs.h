#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CAutoSuggestBoxSuggestionChosenEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CAutoSuggestBoxSuggestionChosenEventArgs@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CAutoSuggestBoxSuggestionChosenEventArgs@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CAutoSuggestBoxSuggestionChosenEventArgs@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
};
