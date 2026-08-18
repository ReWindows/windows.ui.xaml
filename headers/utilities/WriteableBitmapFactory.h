#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class WriteableBitmapFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithDimensions@WriteableBitmapFactory@DirectUI@@UEAAJHHPEAPEAUIWriteableBitmap@Imaging@Media@Xaml@UI@Windows@@@Z
    virtual long CreateInstanceWithDimensions(int, int, ::Windows::UI::Xaml::Media::Imaging::IWriteableBitmap * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@WriteableBitmapFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@WriteableBitmapFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@WriteableBitmapFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@WriteableBitmapFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithDimensionsImpl@WriteableBitmapFactory@DirectUI@@AEAAJHHPEAPEAUIWriteableBitmap@Imaging@Media@Xaml@UI@Windows@@@Z
    long CreateInstanceWithDimensionsImpl(int, int, ::Windows::UI::Xaml::Media::Imaging::IWriteableBitmap * *);
};
} // namespace DirectUI
