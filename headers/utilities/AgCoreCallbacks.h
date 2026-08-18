#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
class AgCoreCallbacks {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreObjectsOfSameType@AgCoreCallbacks@@SAJPEAVCDependencyObject@@0PEAI@Z
    static long AreObjectsOfSameType(CDependencyObject *, CDependencyObject *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateManagedPeer@AgCoreCallbacks@@SAJPEAVCDependencyObject@@W4KnownTypeIndex@@_N22@Z
    static long CreateManagedPeer(CDependencyObject *, int, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameworkCallbacks_ClearDataContext@AgCoreCallbacks@@SAJPEAVCFrameworkElement@@@Z
    static long FrameworkCallbacks_ClearDataContext(CFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameworkCallbacks_ContentLink_OnClick@AgCoreCallbacks@@SAJPEAVCDependencyObject@@@Z
    static long FrameworkCallbacks_ContentLink_OnClick(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameworkCallbacks_EnsureImmersiveResource@AgCoreCallbacks@@SAJPEAVCResourceDictionary@@AEBVxstring_ptr_view@@PEAI@Z
    static long FrameworkCallbacks_EnsureImmersiveResource(CResourceDictionary *, xstring_ptr_view const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameworkCallbacks_GetCustomTypeFullName@AgCoreCallbacks@@SAJPEAVCDependencyObject@@PEAVxstring_ptr@@@Z
    static long FrameworkCallbacks_GetCustomTypeFullName(CDependencyObject *, xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameworkCallbacks_GetCustomTypeIDFromObject@AgCoreCallbacks@@SAJPEAVCDependencyObject@@PEAW4KnownTypeIndex@@@Z
    static long FrameworkCallbacks_GetCustomTypeIDFromObject(CDependencyObject *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameworkCallbacks_Hyperlink_OnClick@AgCoreCallbacks@@SAJPEAVCDependencyObject@@@Z
    static long FrameworkCallbacks_Hyperlink_OnClick(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameworkCallbacks_SetDataContext@AgCoreCallbacks@@SAJPEAVCFrameworkElement@@PEAVCValue@@@Z
    static long FrameworkCallbacks_SetDataContext(CFrameworkElement *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBuiltInStyle@AgCoreCallbacks@@SAJPEAVCDependencyObject@@PEAPEAVCStyle@@@Z
    static long GetBuiltInStyle(CDependencyObject *, CStyle * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDynamicTimelines@AgCoreCallbacks@@SAJPEAVCDependencyObject@@IPEAVCValue@@@Z
    static long GetDynamicTimelines(CDependencyObject *, unsigned int, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PegManagedPeerNoRef@AgCoreCallbacks@@SAXPEAVCDependencyObject@@@Z
    static void PegManagedPeerNoRef(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerFrameCallback@AgCoreCallbacks@@SAJXZ
    static long PerFrameCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseEvent@AgCoreCallbacks@@SAJPEAVCDependencyObject@@W4ManagedEvent@DirectUI@@PEAVCEventArgs@@@Z
    static long RaiseEvent(CDependencyObject *, int, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveDictionaryResourceCallback@AgCoreCallbacks@@SAJPEAVCResourceDictionary@@AEBVxstring_ptr_view@@_NPEAVCDependencyObject@@PEAV?$xref_ptr@VCDependencyObject@@@@@Z
    static long ResolveDictionaryResourceCallback(CResourceDictionary *, xstring_ptr_view const &, bool, CDependencyObject *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveFileResource@AgCoreCallbacks@@SAJAEBVxstring_ptr@@PEAV2@@Z
    static long ResolveFileResource(xstring_ptr const &, xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryPegPeer@AgCoreCallbacks@@SAXPEAVCDependencyObject@@PEAI1@Z
    static void TryPegPeer(CDependencyObject *, unsigned int *, unsigned int *);
};
