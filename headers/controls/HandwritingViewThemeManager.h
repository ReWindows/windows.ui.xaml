#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class HandwritingViewThemeManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BlendBrushWithBackground@HandwritingViewThemeManager@@SAIII@Z
    static unsigned int BlendBrushWithBackground(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBrushIsVisible@HandwritingViewThemeManager@@SAIIIM@Z
    static unsigned int EnsureBrushIsVisible(unsigned int, unsigned int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookupEnsureButtonVisualStatesVisible@HandwritingViewThemeManager@@QEAAJV?$xref_ptr@VCButton@@@@@Z
    long HookupEnsureButtonVisualStatesVisible(WindissectOpaque);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateContrast@HandwritingViewThemeManager@@CAMII@Z
    static float CalculateContrast(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateLuminance@HandwritingViewThemeManager@@CAMAEBUfloat3@Numerics@Foundation@Windows@@@Z
    static float CalculateLuminance(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushColor@HandwritingViewThemeManager@@CAIAEBVCValue@@@Z
    static unsigned int GetBrushColor(CValue const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommonStatesGroupForButton@HandwritingViewThemeManager@@CAJV?$xref_ptr@VCButton@@@@PEAPEAVCVisualStateGroup@@@Z
    static long GetCommonStatesGroupForButton(WindissectOpaque, CVisualStateGroup * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSmallestOpacityForContrast@HandwritingViewThemeManager@@CAMIIMM@Z
    static float GetSmallestOpacityForContrast(unsigned int, unsigned int, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonVisualStateChanged@HandwritingViewThemeManager@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnButtonVisualStateChanged(CDependencyObject *, CEventArgs *);
};
