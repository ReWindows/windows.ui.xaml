#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class AutoSuggestBoxTextChangedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCurrentImpl@AutoSuggestBoxTextChangedEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long CheckCurrentImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Reason@AutoSuggestBoxTextChangedEventArgs@DirectUI@@UEAAJPEAW4AutoSuggestionBoxTextChangeReason@Controls@Xaml@UI@Windows@@@Z
    virtual long get_Reason(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Reason@AutoSuggestBoxTextChangedEventArgs@DirectUI@@UEAAJW4AutoSuggestionBoxTextChangeReason@Controls@Xaml@UI@Windows@@@Z
    virtual long put_Reason(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AutoSuggestBoxTextChangedEventArgs@DirectUI@@UEAA@XZ
    virtual ~AutoSuggestBoxTextChangedEventArgs();
};
} // namespace DirectUI
