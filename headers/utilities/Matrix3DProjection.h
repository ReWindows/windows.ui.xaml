#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class Matrix3DProjection {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@Matrix3DProjection@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProjectionMatrix@Matrix3DProjection@DirectUI@@UEAAJPEAUMatrix3D@Media3D@Media@Xaml@UI@Windows@@@Z
    virtual long get_ProjectionMatrix(::Windows::UI::Xaml::Media::Media3D::Matrix3D *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ProjectionMatrix@Matrix3DProjection@DirectUI@@UEAAJUMatrix3D@Media3D@Media@Xaml@UI@Windows@@@Z
    virtual long put_ProjectionMatrix(::Windows::UI::Xaml::Media::Media3D::Matrix3D);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@Matrix3DProjection@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@Matrix3DProjection@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@Matrix3DProjection@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@Matrix3DProjection@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
