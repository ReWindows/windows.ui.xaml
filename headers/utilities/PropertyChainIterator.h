#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace Diagnostics {
class PropertyChainIterator {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveBaseValueSource@PropertyChainIterator@Diagnostics@@SA?AW4BaseValueSource@@AEBV?$xref_ptr@VCDependencyObject@@@@W4KnownPropertyIndex@@@Z
    static int GetEffectiveBaseValueSource(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInvalidProperty@PropertyChainIterator@Diagnostics@@SA_NPEBVCPropertyBase@@_N@Z
    static bool IsInvalidProperty(CPropertyBase const *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidPropertyForObject@PropertyChainIterator@Diagnostics@@SA_NQEBVCPropertyBase@@PEAVCDependencyObject@@@Z
    static bool IsValidPropertyForObject(CPropertyBase const * const, CDependencyObject *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PropertyChainIterator@Diagnostics@@QEAA@XZ
    ~PropertyChainIterator();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextPropertyData@PropertyChainIterator@Diagnostics@@CA?AUPropertyChainData@2@AEBV?$xref_ptr@VCDependencyObject@@@@W4KnownPropertyIndex@@1@Z
    static WindissectOpaque GetNextPropertyData(WindissectOpaque const &, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextSourceData@PropertyChainIterator@Diagnostics@@CA?AUPropertyChainData@2@AEBV?$xref_ptr@VCDependencyObject@@@@AEBV?$xref_ptr@VCStyle@@@@W4BaseValueSource@@W4KnownPropertyIndex@@@Z
    static WindissectOpaque GetNextSourceData(WindissectOpaque const &, WindissectOpaque const &, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextStyleForEvaluation@PropertyChainIterator@Diagnostics@@CA?AV?$xref_ptr@VCStyle@@@@AEBV3@W4KnownPropertyIndex@@@Z
    static WindissectOpaque GetNextStyleForEvaluation(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStyleForEvaluation@PropertyChainIterator@Diagnostics@@CA?AV?$xref_ptr@VCStyle@@@@AEBV?$xref_ptr@VCDependencyObject@@@@W4BaseValueSource@@W4KnownPropertyIndex@@@Z
    static WindissectOpaque GetStyleForEvaluation(WindissectOpaque const &, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToNextProperty@PropertyChainIterator@Diagnostics@@AEAAXXZ
    void GoToNextProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StyleHasProperty@PropertyChainIterator@Diagnostics@@CA_NAEBV?$xref_ptr@VCStyle@@@@W4KnownPropertyIndex@@@Z
    static bool StyleHasProperty(WindissectOpaque const &, int);
};
} // namespace Diagnostics
