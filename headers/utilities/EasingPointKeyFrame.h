#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class EasingPointKeyFrame {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@EasingPointKeyFrame@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EasingFunction@EasingPointKeyFrame@DirectUI@@UEAAJPEAPEAUIEasingFunctionBase@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long get_EasingFunction(::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EasingFunction@EasingPointKeyFrame@DirectUI@@UEAAJPEAUIEasingFunctionBase@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long put_EasingFunction(::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@EasingPointKeyFrame@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@EasingPointKeyFrame@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@EasingPointKeyFrame@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@EasingPointKeyFrame@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
