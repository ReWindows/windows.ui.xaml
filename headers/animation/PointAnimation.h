#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
namespace DirectUI {
class PointAnimation {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@PointAnimation@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_By@PointAnimation@DirectUI@@UEAAJPEAPEAU?$IReference@UPoint@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_By(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EasingFunction@PointAnimation@DirectUI@@UEAAJPEAPEAUIEasingFunctionBase@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long get_EasingFunction(::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnableDependentAnimation@PointAnimation@DirectUI@@UEAAJPEAE@Z
    virtual long get_EnableDependentAnimation(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_From@PointAnimation@DirectUI@@UEAAJPEAPEAU?$IReference@UPoint@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_From(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_To@PointAnimation@DirectUI@@UEAAJPEAPEAU?$IReference@UPoint@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_To(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_By@PointAnimation@DirectUI@@UEAAJPEAU?$IReference@UPoint@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long put_By(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EasingFunction@PointAnimation@DirectUI@@UEAAJPEAUIEasingFunctionBase@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long put_EasingFunction(::Windows::UI::Xaml::Media::Animation::IEasingFunctionBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EnableDependentAnimation@PointAnimation@DirectUI@@UEAAJE@Z
    virtual long put_EnableDependentAnimation(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_From@PointAnimation@DirectUI@@UEAAJPEAU?$IReference@UPoint@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long put_From(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_To@PointAnimation@DirectUI@@UEAAJPEAU?$IReference@UPoint@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long put_To(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PointAnimation@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PointAnimation@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@PointAnimation@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PointAnimation@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
