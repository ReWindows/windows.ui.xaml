#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
namespace DirectUI {
class Matrix3DHelper {
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeterminant@Matrix3DHelper@DirectUI@@CANUMatrix3D@Media3D@Media@Xaml@UI@Windows@@@Z
    static double GetDeterminant(::Windows::UI::Xaml::Media::Media3D::Matrix3D);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvertCore@Matrix3DHelper@DirectUI@@CAIUMatrix3D@Media3D@Media@Xaml@UI@Windows@@PEAU345678@@Z
    static unsigned int InvertCore(::Windows::UI::Xaml::Media::Media3D::Matrix3D, ::Windows::UI::Xaml::Media::Media3D::Matrix3D *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAffine@Matrix3DHelper@DirectUI@@CAIUMatrix3D@Media3D@Media@Xaml@UI@Windows@@@Z
    static unsigned int IsAffine(::Windows::UI::Xaml::Media::Media3D::Matrix3D);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NormalizedAffineInvert@Matrix3DHelper@DirectUI@@CAIUMatrix3D@Media3D@Media@Xaml@UI@Windows@@PEAU345678@@Z
    static unsigned int NormalizedAffineInvert(::Windows::UI::Xaml::Media::Media3D::Matrix3D, ::Windows::UI::Xaml::Media::Media3D::Matrix3D *);
};
} // namespace DirectUI
