#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class SearchBoxQuerySubmittedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InvocationMethod@SearchBoxQuerySubmittedEventArgs@DirectUI@@UEAAJPEAW4SearchBoxInvocationMethod@Controls@Xaml@UI@Windows@@@Z
    virtual long get_InvocationMethod(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyModifiers@SearchBoxQuerySubmittedEventArgs@DirectUI@@UEAAJPEAW4VirtualKeyModifiers@System@Windows@@@Z
    virtual long get_KeyModifiers(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Language@SearchBoxQuerySubmittedEventArgs@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Language(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LinguisticDetails@SearchBoxQuerySubmittedEventArgs@DirectUI@@UEAAJPEAPEAUISearchQueryLinguisticDetails@Search@ApplicationModel@Windows@@@Z
    virtual long get_LinguisticDetails(::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QueryText@SearchBoxQuerySubmittedEventArgs@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_QueryText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Suggestion@SearchBoxQuerySubmittedEventArgs@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Suggestion(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InvocationMethod@SearchBoxQuerySubmittedEventArgs@DirectUI@@UEAAJW4SearchBoxInvocationMethod@Controls@Xaml@UI@Windows@@@Z
    virtual long put_InvocationMethod(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Suggestion@SearchBoxQuerySubmittedEventArgs@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_Suggestion(IInspectable *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SearchBoxQuerySubmittedEventArgs@DirectUI@@UEAA@XZ
    virtual ~SearchBoxQuerySubmittedEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SearchBoxQuerySubmittedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SearchBoxQuerySubmittedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SearchBoxQuerySubmittedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SearchBoxQuerySubmittedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
