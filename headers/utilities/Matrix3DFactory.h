#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class Matrix3DFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromElements@Matrix3DFactory@DirectUI@@UEAAJNNNNNNNNNNNNNNNNPEAUMatrix3D@Media3D@Media@Xaml@UI@Windows@@@Z
    virtual long FromElements(double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, double, ::Windows::UI::Xaml::Media::Media3D::Matrix3D *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHasInverse@Matrix3DFactory@DirectUI@@UEAAJUMatrix3D@Media3D@Media@Xaml@UI@Windows@@PEAE@Z
    virtual long GetHasInverse(::Windows::UI::Xaml::Media::Media3D::Matrix3D, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsIdentity@Matrix3DFactory@DirectUI@@UEAAJUMatrix3D@Media3D@Media@Xaml@UI@Windows@@PEAE@Z
    virtual long GetIsIdentity(::Windows::UI::Xaml::Media::Media3D::Matrix3D, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invert@Matrix3DFactory@DirectUI@@UEAAJUMatrix3D@Media3D@Media@Xaml@UI@Windows@@PEAU345678@@Z
    virtual long Invert(::Windows::UI::Xaml::Media::Media3D::Matrix3D, ::Windows::UI::Xaml::Media::Media3D::Matrix3D *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Multiply@Matrix3DFactory@DirectUI@@UEAAJUMatrix3D@Media3D@Media@Xaml@UI@Windows@@0PEAU345678@@Z
    virtual long Multiply(::Windows::UI::Xaml::Media::Media3D::Matrix3D, ::Windows::UI::Xaml::Media::Media3D::Matrix3D, ::Windows::UI::Xaml::Media::Media3D::Matrix3D *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Identity@Matrix3DFactory@DirectUI@@UEAAJPEAUMatrix3D@Media3D@Media@Xaml@UI@Windows@@@Z
    virtual long get_Identity(::Windows::UI::Xaml::Media::Media3D::Matrix3D *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@Matrix3DFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@Matrix3DFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@Matrix3DFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
