#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class ArcSegmentFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsLargeArcProperty@ArcSegmentFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_IsLargeArcProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointProperty@ArcSegmentFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_PointProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RotationAngleProperty@ArcSegmentFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_RotationAngleProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SizeProperty@ArcSegmentFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_SizeProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SweepDirectionProperty@ArcSegmentFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_SweepDirectionProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ArcSegmentFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ArcSegmentFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ArcSegmentFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ArcSegmentFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
