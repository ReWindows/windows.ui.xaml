#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class SplineColorKeyFrame {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SplineColorKeyFrame@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeySpline@SplineColorKeyFrame@DirectUI@@UEAAJPEAPEAUIKeySpline@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long get_KeySpline(::Windows::UI::Xaml::Media::Animation::IKeySpline * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_KeySpline@SplineColorKeyFrame@DirectUI@@UEAAJPEAUIKeySpline@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long put_KeySpline(::Windows::UI::Xaml::Media::Animation::IKeySpline *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SplineColorKeyFrame@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SplineColorKeyFrame@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SplineColorKeyFrame@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SplineColorKeyFrame@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
