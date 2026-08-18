#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class BeginStoryboard {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@BeginStoryboard@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Storyboard@BeginStoryboard@DirectUI@@UEAAJPEAPEAUIStoryboard@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long get_Storyboard(::Windows::UI::Xaml::Media::Animation::IStoryboard * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Storyboard@BeginStoryboard@DirectUI@@UEAAJPEAUIStoryboard@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long put_Storyboard(::Windows::UI::Xaml::Media::Animation::IStoryboard *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@BeginStoryboard@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@BeginStoryboard@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@BeginStoryboard@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@BeginStoryboard@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
