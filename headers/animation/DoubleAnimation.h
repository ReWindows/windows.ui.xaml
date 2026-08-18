#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
namespace DirectUI {
class DoubleAnimation {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@DoubleAnimation@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_By@DoubleAnimation@DirectUI@@UEAAJPEAPEAU?$IReference@N@Foundation@Windows@@@Z
    virtual long get_By(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EasingFunction@DoubleAnimation@DirectUI@@UEAAJPEAPEAUIEasingFunctionBase@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long get_EasingFunction(::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnableDependentAnimation@DoubleAnimation@DirectUI@@UEAAJPEAE@Z
    virtual long get_EnableDependentAnimation(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_From@DoubleAnimation@DirectUI@@UEAAJPEAPEAU?$IReference@N@Foundation@Windows@@@Z
    virtual long get_From(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_To@DoubleAnimation@DirectUI@@UEAAJPEAPEAU?$IReference@N@Foundation@Windows@@@Z
    virtual long get_To(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_By@DoubleAnimation@DirectUI@@UEAAJPEAU?$IReference@N@Foundation@Windows@@@Z
    virtual long put_By(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EasingFunction@DoubleAnimation@DirectUI@@UEAAJPEAUIEasingFunctionBase@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long put_EasingFunction(::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EnableDependentAnimation@DoubleAnimation@DirectUI@@UEAAJE@Z
    virtual long put_EnableDependentAnimation(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_From@DoubleAnimation@DirectUI@@UEAAJPEAU?$IReference@N@Foundation@Windows@@@Z
    virtual long put_From(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_To@DoubleAnimation@DirectUI@@UEAAJPEAU?$IReference@N@Foundation@Windows@@@Z
    virtual long put_To(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DoubleAnimation@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DoubleAnimation@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@DoubleAnimation@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DoubleAnimation@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
