#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class SearchBoxQueryChangedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Language@SearchBoxQueryChangedEventArgs@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Language(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LinguisticDetails@SearchBoxQueryChangedEventArgs@DirectUI@@UEAAJPEAPEAUISearchQueryLinguisticDetails@Search@ApplicationModel@Windows@@@Z
    virtual long get_LinguisticDetails(::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QueryText@SearchBoxQueryChangedEventArgs@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_QueryText(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SearchBoxQueryChangedEventArgs@DirectUI@@UEAA@XZ
    virtual ~SearchBoxQueryChangedEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SearchBoxQueryChangedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SearchBoxQueryChangedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SearchBoxQueryChangedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SearchBoxQueryChangedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
