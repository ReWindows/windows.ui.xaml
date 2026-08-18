#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class ListBoxGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ListBoxGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollIntoView@ListBoxGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long ScrollIntoView(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectAll@ListBoxGenerated@DirectUI@@UEAAJXZ
    virtual long SelectAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectedItems@ListBoxGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long get_SelectedItems(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionMode@ListBoxGenerated@DirectUI@@UEAAJPEAW4SelectionMode@Controls@Xaml@UI@Windows@@@Z
    virtual long get_SelectionMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SingleSelectionFollowsFocus@ListBoxGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_SingleSelectionFollowsFocus(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SelectionMode@ListBoxGenerated@DirectUI@@UEAAJW4SelectionMode@Controls@Xaml@UI@Windows@@@Z
    virtual long put_SelectionMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SingleSelectionFollowsFocus@ListBoxGenerated@DirectUI@@UEAAJE@Z
    virtual long put_SingleSelectionFollowsFocus(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ListBoxGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ListBoxGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ListBoxGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ListBoxGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
