#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class LinearGradientBrushFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithGradientStopCollectionAndAngle@LinearGradientBrushFactory@DirectUI@@UEAAJPEAU?$IVector@PEAVGradientStop@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@NPEAPEAUILinearGradientBrush@Media@Xaml@UI@6@@Z
    virtual long CreateInstanceWithGradientStopCollectionAndAngle(WindissectOpaque *, double, ::Windows::UI::Xaml::Media::ILinearGradientBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EndPointProperty@LinearGradientBrushFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_EndPointProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartPointProperty@LinearGradientBrushFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_StartPointProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@LinearGradientBrushFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@LinearGradientBrushFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@LinearGradientBrushFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@LinearGradientBrushFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithGradientStopCollectionAndAngleImpl@LinearGradientBrushFactory@DirectUI@@AEAAJPEAU?$IVector@PEAVGradientStop@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@NPEAPEAUILinearGradientBrush@Media@Xaml@UI@6@@Z
    long CreateInstanceWithGradientStopCollectionAndAngleImpl(WindissectOpaque *, double, ::Windows::UI::Xaml::Media::ILinearGradientBrush * *);
};
} // namespace DirectUI
