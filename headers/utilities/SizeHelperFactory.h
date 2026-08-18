#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class SizeHelperFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@SizeHelperFactory@DirectUI@@UEAAJUSize@Foundation@Windows@@0PEAE@Z
    virtual long Equals(WindissectOpaque, WindissectOpaque, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromDimensions@SizeHelperFactory@DirectUI@@UEAAJMMPEAUSize@Foundation@Windows@@@Z
    virtual long FromDimensions(float, float, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsEmpty@SizeHelperFactory@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAE@Z
    virtual long GetIsEmpty(WindissectOpaque, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Empty@SizeHelperFactory@DirectUI@@UEAAJPEAUSize@Foundation@Windows@@@Z
    virtual long get_Empty(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SizeHelperFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SizeHelperFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SizeHelperFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EqualsImpl@SizeHelperFactory@DirectUI@@AEAAJUSize@Foundation@Windows@@0PEAE@Z
    long EqualsImpl(WindissectOpaque, WindissectOpaque, unsigned char *);
};
} // namespace DirectUI
