#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class BitmapImage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDimensionsNotify@BitmapImage@DirectUI@@UEAAJPEAUIPALImageDimensionsNotify@@@Z
    virtual long AddDimensionsNotify(IPALImageDimensionsNotify *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayImpl@BitmapImage@DirectUI@@QEAAJXZ
    long PlayImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDimensionsNotify@BitmapImage@DirectUI@@UEAAJPEAUIPALImageDimensionsNotify@@@Z
    virtual long RemoveDimensionsNotify(IPALImageDimensionsNotify *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSource@BitmapImage@DirectUI@@UEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@@Z
    virtual long SetSource(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopImpl@BitmapImage@DirectUI@@QEAAJXZ
    long StopImpl();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@BitmapImage@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
