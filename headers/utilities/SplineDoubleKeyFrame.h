#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class SplineDoubleKeyFrame {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SplineDoubleKeyFrame@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeySpline@SplineDoubleKeyFrame@DirectUI@@UEAAJPEAPEAUIKeySpline@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long get_KeySpline(::Windows::UI::Xaml::Media::Animation::IKeySpline * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_KeySpline@SplineDoubleKeyFrame@DirectUI@@UEAAJPEAUIKeySpline@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long put_KeySpline(::Windows::UI::Xaml::Media::Animation::IKeySpline *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SplineDoubleKeyFrame@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SplineDoubleKeyFrame@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SplineDoubleKeyFrame@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SplineDoubleKeyFrame@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
