#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
namespace DirectUI {
class GradientBrush {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@GradientBrush@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GradientBrush@DirectUI@@QEAA@XZ
    GradientBrush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ColorInterpolationMode@GradientBrush@DirectUI@@UEAAJPEAW4ColorInterpolationMode@Media@Xaml@UI@Windows@@@Z
    virtual long get_ColorInterpolationMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GradientStops@GradientBrush@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVGradientStop@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_GradientStops(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MappingMode@GradientBrush@DirectUI@@UEAAJPEAW4BrushMappingMode@Media@Xaml@UI@Windows@@@Z
    virtual long get_MappingMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SpreadMethod@GradientBrush@DirectUI@@UEAAJPEAW4GradientSpreadMethod@Media@Xaml@UI@Windows@@@Z
    virtual long get_SpreadMethod(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ColorInterpolationMode@GradientBrush@DirectUI@@UEAAJW4ColorInterpolationMode@Media@Xaml@UI@Windows@@@Z
    virtual long put_ColorInterpolationMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GradientStops@GradientBrush@DirectUI@@UEAAJPEAU?$IVector@PEAVGradientStop@Media@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long put_GradientStops(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MappingMode@GradientBrush@DirectUI@@UEAAJW4BrushMappingMode@Media@Xaml@UI@Windows@@@Z
    virtual long put_MappingMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SpreadMethod@GradientBrush@DirectUI@@UEAAJW4GradientSpreadMethod@Media@Xaml@UI@Windows@@@Z
    virtual long put_SpreadMethod(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@GradientBrush@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@GradientBrush@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@GradientBrush@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@GradientBrush@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
