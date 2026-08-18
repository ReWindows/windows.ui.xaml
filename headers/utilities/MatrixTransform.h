#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class MatrixTransform {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@MatrixTransform@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Matrix@MatrixTransform@DirectUI@@UEAAJPEAUMatrix@Media@Xaml@UI@Windows@@@Z
    virtual long get_Matrix(::Windows::UI::Xaml::Media::Matrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Matrix@MatrixTransform@DirectUI@@UEAAJUMatrix@Media@Xaml@UI@Windows@@@Z
    virtual long put_Matrix(::Windows::UI::Xaml::Media::Matrix);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@MatrixTransform@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@MatrixTransform@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@MatrixTransform@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@MatrixTransform@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
