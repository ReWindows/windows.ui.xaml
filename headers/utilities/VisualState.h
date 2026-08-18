#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class VisualState {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@VisualState@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@VisualState@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Setters@VisualState@DirectUI@@UEAAJPEAPEAUISetterBaseCollection@Xaml@UI@Windows@@@Z
    virtual long get_Setters(::Windows::UI::Xaml::ISetterBaseCollection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StateTriggers@VisualState@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVStateTriggerBase@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_StateTriggers(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Storyboard@VisualState@DirectUI@@UEAAJPEAPEAUIStoryboard@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long get_Storyboard(::Windows::UI::Xaml::Media::Animation::IStoryboard * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Storyboard@VisualState@DirectUI@@UEAAJPEAUIStoryboard@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long put_Storyboard(::Windows::UI::Xaml::Media::Animation::IStoryboard *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@VisualState@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@VisualState@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@VisualState@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@VisualState@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NameImpl@VisualState@DirectUI@@AEAAJPEAPEAUHSTRING__@@@Z
    long get_NameImpl(HSTRING__* *);
};
} // namespace DirectUI
