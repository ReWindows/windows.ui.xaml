#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class MatrixFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromElements@MatrixFactory@DirectUI@@UEAAJNNNNNNPEAUMatrix@Media@Xaml@UI@Windows@@@Z
    virtual long FromElements(double, double, double, double, double, double, ::Windows::UI::Xaml::Media::Matrix *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsIdentity@MatrixFactory@DirectUI@@UEAAJUMatrix@Media@Xaml@UI@Windows@@PEAE@Z
    virtual long GetIsIdentity(::Windows::UI::Xaml::Media::Matrix, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transform@MatrixFactory@DirectUI@@UEAAJUMatrix@Media@Xaml@UI@Windows@@UPoint@Foundation@7@PEAU897@@Z
    virtual long Transform(::Windows::UI::Xaml::Media::Matrix, WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Identity@MatrixFactory@DirectUI@@UEAAJPEAUMatrix@Media@Xaml@UI@Windows@@@Z
    virtual long get_Identity(::Windows::UI::Xaml::Media::Matrix *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@MatrixFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@MatrixFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@MatrixFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
