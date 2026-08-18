#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class ObjectKeyFrame {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ObjectKeyFrame@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyTime@ObjectKeyFrame@DirectUI@@UEAAJPEAUKeyTime@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long get_KeyTime(::Windows::UI::Xaml::Media::Animation::KeyTime *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@ObjectKeyFrame@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Value(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_KeyTime@ObjectKeyFrame@DirectUI@@UEAAJUKeyTime@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long put_KeyTime(::Windows::UI::Xaml::Media::Animation::KeyTime);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Value@ObjectKeyFrame@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_Value(IInspectable *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ObjectKeyFrame@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ObjectKeyFrame@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ObjectKeyFrame@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ObjectKeyFrame@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
