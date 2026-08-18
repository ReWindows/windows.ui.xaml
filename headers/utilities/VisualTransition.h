#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
namespace DirectUI {
class VisualTransition {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@VisualTransition@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_From@VisualTransition@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_From(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GeneratedDuration@VisualTransition@DirectUI@@UEAAJPEAUDuration@Xaml@UI@Windows@@@Z
    virtual long get_GeneratedDuration(::Windows::UI::Xaml::Duration *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GeneratedEasingFunction@VisualTransition@DirectUI@@UEAAJPEAPEAUIEasingFunctionBase@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long get_GeneratedEasingFunction(::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Storyboard@VisualTransition@DirectUI@@UEAAJPEAPEAUIStoryboard@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long get_Storyboard(::Windows::UI::Xaml::Media::Animation::IStoryboard * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_To@VisualTransition@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_To(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_From@VisualTransition@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_From(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GeneratedDuration@VisualTransition@DirectUI@@UEAAJUDuration@Xaml@UI@Windows@@@Z
    virtual long put_GeneratedDuration(::Windows::UI::Xaml::Duration);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GeneratedEasingFunction@VisualTransition@DirectUI@@UEAAJPEAUIEasingFunctionBase@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long put_GeneratedEasingFunction(::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Storyboard@VisualTransition@DirectUI@@UEAAJPEAUIStoryboard@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long put_Storyboard(::Windows::UI::Xaml::Media::Animation::IStoryboard *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_To@VisualTransition@DirectUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_To(HSTRING__*);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@VisualTransition@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@VisualTransition@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@VisualTransition@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@VisualTransition@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
