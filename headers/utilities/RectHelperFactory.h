#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 21 member(s).
namespace DirectUI {
class RectHelperFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@RectHelperFactory@DirectUI@@UEAAJURect@Foundation@Windows@@UPoint@45@PEAE@Z
    virtual long Contains(WindissectOpaque, WindissectOpaque, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DipsRectToPhysicalRect@RectHelperFactory@DirectUI@@UEAAJURect@Foundation@Windows@@PEAU345@@Z
    virtual long DipsRectToPhysicalRect(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@RectHelperFactory@DirectUI@@UEAAJURect@Foundation@Windows@@0PEAE@Z
    virtual long Equals(WindissectOpaque, WindissectOpaque, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromCoordinatesAndDimensions@RectHelperFactory@DirectUI@@UEAAJMMMMPEAURect@Foundation@Windows@@@Z
    virtual long FromCoordinatesAndDimensions(float, float, float, float, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromLocationAndSize@RectHelperFactory@DirectUI@@UEAAJUPoint@Foundation@Windows@@USize@45@PEAURect@45@@Z
    virtual long FromLocationAndSize(WindissectOpaque, WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromPoints@RectHelperFactory@DirectUI@@UEAAJUPoint@Foundation@Windows@@0PEAURect@45@@Z
    virtual long FromPoints(WindissectOpaque, WindissectOpaque, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBottom@RectHelperFactory@DirectUI@@UEAAJURect@Foundation@Windows@@PEAM@Z
    virtual long GetBottom(WindissectOpaque, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsEmpty@RectHelperFactory@DirectUI@@UEAAJURect@Foundation@Windows@@PEAE@Z
    virtual long GetIsEmpty(WindissectOpaque, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLeft@RectHelperFactory@DirectUI@@UEAAJURect@Foundation@Windows@@PEAM@Z
    virtual long GetLeft(WindissectOpaque, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRight@RectHelperFactory@DirectUI@@UEAAJURect@Foundation@Windows@@PEAM@Z
    virtual long GetRight(WindissectOpaque, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTop@RectHelperFactory@DirectUI@@UEAAJURect@Foundation@Windows@@PEAM@Z
    virtual long GetTop(WindissectOpaque, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Intersect@RectHelperFactory@DirectUI@@UEAAJURect@Foundation@Windows@@0PEAU345@@Z
    virtual long Intersect(WindissectOpaque, WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnionWithPoint@RectHelperFactory@DirectUI@@UEAAJURect@Foundation@Windows@@UPoint@45@PEAU345@@Z
    virtual long UnionWithPoint(WindissectOpaque, WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnionWithRect@RectHelperFactory@DirectUI@@UEAAJURect@Foundation@Windows@@0PEAU345@@Z
    virtual long UnionWithRect(WindissectOpaque, WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Empty@RectHelperFactory@DirectUI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_Empty(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@RectHelperFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@RectHelperFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@RectHelperFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EqualsImpl@RectHelperFactory@DirectUI@@AEAAJURect@Foundation@Windows@@0PEAE@Z
    long EqualsImpl(WindissectOpaque, WindissectOpaque, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromCoordinatesAndDimensionsImpl@RectHelperFactory@DirectUI@@AEAAJMMMMPEAURect@Foundation@Windows@@@Z
    long FromCoordinatesAndDimensionsImpl(float, float, float, float, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromLocationAndSizeImpl@RectHelperFactory@DirectUI@@AEAAJUPoint@Foundation@Windows@@USize@45@PEAURect@45@@Z
    long FromLocationAndSizeImpl(WindissectOpaque, WindissectOpaque, WindissectOpaque *);
};
} // namespace DirectUI
