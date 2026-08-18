#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CVisualStateManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindVisualState@CVisualStateManager@@SAJPEAVCControl@@PEAVCFrameworkElement@@PEBGPEAPEAVCVisualStateGroup@@PEAPEAVCVisualState@@PEAI@Z
    static long FindVisualState(CControl *, CFrameworkElement *, unsigned short const *, CVisualStateGroup * *, CVisualState * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransition@CVisualStateManager@@SAJPEAVCVisualStateGroup@@PEAVCVisualState@@1PEAPEAVCVisualTransition@@@Z
    static long GetTransition(CVisualStateGroup *, CVisualState *, CVisualState *, CVisualTransition * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CVisualStateManager@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToState@CVisualStateManager@@SAJPEAVCDependencyObject@@PEBGPEAVCVisualState@@PEAVCVisualStateGroup@@_NPEA_N@Z
    static long GoToState(CDependencyObject *, unsigned short const *, CVisualState *, CVisualStateGroup *, bool, bool *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindVisualStateLegacy@CVisualStateManager@@CAJV?$xref_ptr@VCVisualStateGroupCollection@@@@PEBGPEAPEAVCVisualStateGroup@@PEAPEAVCVisualState@@PEAI@Z
    static long FindVisualStateLegacy(WindissectOpaque, unsigned short const *, CVisualStateGroup * *, CVisualState * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToStateLegacy@CVisualStateManager@@CAJPEAVCDependencyObject@@PEBGIPEA_N@Z
    static long GoToStateLegacy(CDependencyObject *, unsigned short const *, unsigned int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToStateLegacyCore@CVisualStateManager@@CAJPEAVCControl@@PEAVCFrameworkElement@@PEAVCVisualStateGroup@@PEAVCVisualState@@I@Z
    static long GoToStateLegacyCore(CControl *, CFrameworkElement *, CVisualStateGroup *, CVisualState *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceGoToState@CVisualStateManager@@CAXPEAVCFrameworkElement@@PEAVCVisualState@@_N@Z
    static void TraceGoToState(CFrameworkElement *, CVisualState *, bool);
};
