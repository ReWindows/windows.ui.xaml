#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class ColorKeyFrame {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ColorKeyFrame@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyTime@ColorKeyFrame@DirectUI@@UEAAJPEAUKeyTime@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long get_KeyTime(::Windows::UI::Xaml::Media::Animation::KeyTime *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@ColorKeyFrame@DirectUI@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_Value(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_KeyTime@ColorKeyFrame@DirectUI@@UEAAJUKeyTime@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long put_KeyTime(::Windows::UI::Xaml::Media::Animation::KeyTime);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Value@ColorKeyFrame@DirectUI@@UEAAJUColor@UI@Windows@@@Z
    virtual long put_Value(::Windows::UI::Color);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ColorKeyFrame@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ColorKeyFrame@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ColorKeyFrame@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ColorKeyFrame@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
