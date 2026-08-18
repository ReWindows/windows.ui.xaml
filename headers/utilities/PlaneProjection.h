#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 30 member(s).
namespace DirectUI {
class PlaneProjection {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@PlaneProjection@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CenterOfRotationX@PlaneProjection@DirectUI@@UEAAJPEAN@Z
    virtual long get_CenterOfRotationX(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CenterOfRotationY@PlaneProjection@DirectUI@@UEAAJPEAN@Z
    virtual long get_CenterOfRotationY(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CenterOfRotationZ@PlaneProjection@DirectUI@@UEAAJPEAN@Z
    virtual long get_CenterOfRotationZ(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GlobalOffsetX@PlaneProjection@DirectUI@@UEAAJPEAN@Z
    virtual long get_GlobalOffsetX(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GlobalOffsetY@PlaneProjection@DirectUI@@UEAAJPEAN@Z
    virtual long get_GlobalOffsetY(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GlobalOffsetZ@PlaneProjection@DirectUI@@UEAAJPEAN@Z
    virtual long get_GlobalOffsetZ(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LocalOffsetX@PlaneProjection@DirectUI@@UEAAJPEAN@Z
    virtual long get_LocalOffsetX(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LocalOffsetY@PlaneProjection@DirectUI@@UEAAJPEAN@Z
    virtual long get_LocalOffsetY(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LocalOffsetZ@PlaneProjection@DirectUI@@UEAAJPEAN@Z
    virtual long get_LocalOffsetZ(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProjectionMatrix@PlaneProjection@DirectUI@@UEAAJPEAUMatrix3D@Media3D@Media@Xaml@UI@Windows@@@Z
    virtual long get_ProjectionMatrix(::Windows::UI::Xaml::Media::Media3D::Matrix3D *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RotationX@PlaneProjection@DirectUI@@UEAAJPEAN@Z
    virtual long get_RotationX(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RotationY@PlaneProjection@DirectUI@@UEAAJPEAN@Z
    virtual long get_RotationY(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RotationZ@PlaneProjection@DirectUI@@UEAAJPEAN@Z
    virtual long get_RotationZ(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CenterOfRotationX@PlaneProjection@DirectUI@@UEAAJN@Z
    virtual long put_CenterOfRotationX(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CenterOfRotationY@PlaneProjection@DirectUI@@UEAAJN@Z
    virtual long put_CenterOfRotationY(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CenterOfRotationZ@PlaneProjection@DirectUI@@UEAAJN@Z
    virtual long put_CenterOfRotationZ(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GlobalOffsetX@PlaneProjection@DirectUI@@UEAAJN@Z
    virtual long put_GlobalOffsetX(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GlobalOffsetY@PlaneProjection@DirectUI@@UEAAJN@Z
    virtual long put_GlobalOffsetY(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GlobalOffsetZ@PlaneProjection@DirectUI@@UEAAJN@Z
    virtual long put_GlobalOffsetZ(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LocalOffsetX@PlaneProjection@DirectUI@@UEAAJN@Z
    virtual long put_LocalOffsetX(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LocalOffsetY@PlaneProjection@DirectUI@@UEAAJN@Z
    virtual long put_LocalOffsetY(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LocalOffsetZ@PlaneProjection@DirectUI@@UEAAJN@Z
    virtual long put_LocalOffsetZ(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RotationX@PlaneProjection@DirectUI@@UEAAJN@Z
    virtual long put_RotationX(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RotationY@PlaneProjection@DirectUI@@UEAAJN@Z
    virtual long put_RotationY(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RotationZ@PlaneProjection@DirectUI@@UEAAJN@Z
    virtual long put_RotationZ(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PlaneProjection@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PlaneProjection@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@PlaneProjection@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PlaneProjection@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
