#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
namespace DirectUI {
class ColorAnimation {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ColorAnimation@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_By@ColorAnimation@DirectUI@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long get_By(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EasingFunction@ColorAnimation@DirectUI@@UEAAJPEAPEAUIEasingFunctionBase@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long get_EasingFunction(::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnableDependentAnimation@ColorAnimation@DirectUI@@UEAAJPEAE@Z
    virtual long get_EnableDependentAnimation(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_From@ColorAnimation@DirectUI@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long get_From(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_To@ColorAnimation@DirectUI@@UEAAJPEAPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long get_To(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_By@ColorAnimation@DirectUI@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long put_By(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EasingFunction@ColorAnimation@DirectUI@@UEAAJPEAUIEasingFunctionBase@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long put_EasingFunction(::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EnableDependentAnimation@ColorAnimation@DirectUI@@UEAAJE@Z
    virtual long put_EnableDependentAnimation(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_From@ColorAnimation@DirectUI@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long put_From(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_To@ColorAnimation@DirectUI@@UEAAJPEAU?$IReference@UColor@UI@Windows@@@Foundation@Windows@@@Z
    virtual long put_To(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ColorAnimation@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ColorAnimation@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ColorAnimation@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ColorAnimation@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
