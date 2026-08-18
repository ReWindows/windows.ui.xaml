#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class EasingColorKeyFrame {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@EasingColorKeyFrame@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EasingFunction@EasingColorKeyFrame@DirectUI@@UEAAJPEAPEAUIEasingFunctionBase@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long get_EasingFunction(::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EasingFunction@EasingColorKeyFrame@DirectUI@@UEAAJPEAUIEasingFunctionBase@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long put_EasingFunction(::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@EasingColorKeyFrame@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@EasingColorKeyFrame@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@EasingColorKeyFrame@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@EasingColorKeyFrame@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
