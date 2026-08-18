#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class GeometryFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Empty@GeometryFactory@DirectUI@@UEAAJPEAPEAUIGeometry@Media@Xaml@UI@Windows@@@Z
    virtual long get_Empty(::Windows::UI::Xaml::Media::IGeometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StandardFlatteningTolerance@GeometryFactory@DirectUI@@UEAAJPEAN@Z
    virtual long get_StandardFlatteningTolerance(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TransformProperty@GeometryFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_TransformProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@GeometryFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@GeometryFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@GeometryFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@GeometryFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EmptyImpl@GeometryFactory@DirectUI@@AEAAJPEAPEAUIGeometry@Media@Xaml@UI@Windows@@@Z
    long get_EmptyImpl(::Windows::UI::Xaml::Media::IGeometry * *);
};
} // namespace DirectUI
