#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class BrushGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@BrushGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulatePropertyInfoOverride@BrushGenerated@DirectUI@@QEAAJPEAUHSTRING__@@PEAUIAnimationPropertyInfo@Composition@UI@Windows@@@Z
    long PopulatePropertyInfoOverride(HSTRING__*, ::Windows::UI::Composition::IAnimationPropertyInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulatePropertyInfoOverrideProtected@BrushGenerated@DirectUI@@QEAAJPEAUHSTRING__@@PEAUIAnimationPropertyInfo@Composition@UI@Windows@@@Z
    long PopulatePropertyInfoOverrideProtected(HSTRING__*, ::Windows::UI::Composition::IAnimationPropertyInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Opacity@BrushGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_Opacity(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RelativeTransform@BrushGenerated@DirectUI@@UEAAJPEAPEAUITransform@Media@Xaml@UI@Windows@@@Z
    virtual long get_RelativeTransform(::Windows::UI::Xaml::Media::ITransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Transform@BrushGenerated@DirectUI@@UEAAJPEAPEAUITransform@Media@Xaml@UI@Windows@@@Z
    virtual long get_Transform(::Windows::UI::Xaml::Media::ITransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Opacity@BrushGenerated@DirectUI@@UEAAJN@Z
    virtual long put_Opacity(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RelativeTransform@BrushGenerated@DirectUI@@UEAAJPEAUITransform@Media@Xaml@UI@Windows@@@Z
    virtual long put_RelativeTransform(::Windows::UI::Xaml::Media::ITransform *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Transform@BrushGenerated@DirectUI@@UEAAJPEAUITransform@Media@Xaml@UI@Windows@@@Z
    virtual long put_Transform(::Windows::UI::Xaml::Media::ITransform *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@BrushGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@BrushGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@BrushGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@BrushGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
