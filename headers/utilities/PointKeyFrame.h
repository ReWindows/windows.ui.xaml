#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class PointKeyFrame {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@PointKeyFrame@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyTime@PointKeyFrame@DirectUI@@UEAAJPEAUKeyTime@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long get_KeyTime(::Windows::UI::Xaml::Media::Animation::KeyTime *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@PointKeyFrame@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Value(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_KeyTime@PointKeyFrame@DirectUI@@UEAAJUKeyTime@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long put_KeyTime(::Windows::UI::Xaml::Media::Animation::KeyTime);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Value@PointKeyFrame@DirectUI@@UEAAJUPoint@Foundation@Windows@@@Z
    virtual long put_Value(WindissectOpaque);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PointKeyFrame@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PointKeyFrame@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@PointKeyFrame@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PointKeyFrame@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
