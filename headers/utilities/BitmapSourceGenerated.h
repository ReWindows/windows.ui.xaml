#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class BitmapSourceGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@BitmapSourceGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSource@BitmapSourceGenerated@DirectUI@@UEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@@Z
    virtual long SetSource(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceAsync@BitmapSourceGenerated@DirectUI@@UEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAPEAUIAsyncAction@Foundation@6@@Z
    virtual long SetSourceAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PixelHeight@BitmapSourceGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_PixelHeight(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PixelWidth@BitmapSourceGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_PixelWidth(int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@BitmapSourceGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@BitmapSourceGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@BitmapSourceGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@BitmapSourceGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
