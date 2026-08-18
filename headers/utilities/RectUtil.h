#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class RectUtil {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreDisjoint@RectUtil@DirectUI@@SAEAEBURect@Foundation@Windows@@0@Z
    static unsigned char AreDisjoint(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreEqual@RectUtil@DirectUI@@SA_NAEBURect@Foundation@Windows@@0@Z
    static bool AreEqual(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@RectUtil@DirectUI@@SA_NURect@Foundation@Windows@@UPoint@45@@Z
    static bool Contains(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsFully@RectUtil@DirectUI@@SAEURect@Foundation@Windows@@0@Z
    static unsigned char ContainsFully(WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBottom@RectUtil@DirectUI@@SAJURect@Foundation@Windows@@PEAM@Z
    static long GetBottom(WindissectOpaque, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsEmpty@RectUtil@DirectUI@@SAJURect@Foundation@Windows@@PEAE@Z
    static long GetIsEmpty(WindissectOpaque, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTop@RectUtil@DirectUI@@SAJURect@Foundation@Windows@@PEAM@Z
    static long GetTop(WindissectOpaque, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Intersect@RectUtil@DirectUI@@SAJAEAURect@Foundation@Windows@@U345@@Z
    static long Intersect(WindissectOpaque &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Union@RectUtil@DirectUI@@SAJAEAURect@Foundation@Windows@@U345@@Z
    static long Union(WindissectOpaque &, WindissectOpaque);
};
} // namespace DirectUI
