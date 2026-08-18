#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class DoubleKeyFrame {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@DoubleKeyFrame@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyTime@DoubleKeyFrame@DirectUI@@UEAAJPEAUKeyTime@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long get_KeyTime(::Windows::UI::Xaml::Media::Animation::KeyTime *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@DoubleKeyFrame@DirectUI@@UEAAJPEAN@Z
    virtual long get_Value(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_KeyTime@DoubleKeyFrame@DirectUI@@UEAAJUKeyTime@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long put_KeyTime(::Windows::UI::Xaml::Media::Animation::KeyTime);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Value@DoubleKeyFrame@DirectUI@@UEAAJN@Z
    virtual long put_Value(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DoubleKeyFrame@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DoubleKeyFrame@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@DoubleKeyFrame@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DoubleKeyFrame@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
