#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class XamlParserCallbacks {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameworkCallbacks_CheckPeerType@XamlParserCallbacks@DirectUI@@SAJPEAVCDependencyObject@@AEBVxstring_ptr@@H@Z
    static long FrameworkCallbacks_CheckPeerType(CDependencyObject *, xstring_ptr const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?XamlManagedRuntimeRPInvokes_Add@XamlParserCallbacks@DirectUI@@SAJPEAUXamlQualifiedObject@@0@Z
    static long XamlManagedRuntimeRPInvokes_Add(XamlQualifiedObject *, XamlQualifiedObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?XamlManagedRuntimeRPInvokes_AddToDictionary@XamlParserCallbacks@DirectUI@@SAJPEAUXamlQualifiedObject@@00@Z
    static long XamlManagedRuntimeRPInvokes_AddToDictionary(XamlQualifiedObject *, XamlQualifiedObject *, XamlQualifiedObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?XamlManagedRuntimeRPInvokes_CreateInstance@XamlParserCallbacks@DirectUI@@SAJUXamlTypeToken@@PEAUXamlQualifiedObject@@@Z
    static long XamlManagedRuntimeRPInvokes_CreateInstance(XamlTypeToken, XamlQualifiedObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?XamlManagedRuntimeRPInvokes_GetAmbientValue@XamlParserCallbacks@DirectUI@@SAJPEBUXamlQualifiedObject@@UXamlPropertyToken@@PEAU3@@Z
    static long XamlManagedRuntimeRPInvokes_GetAmbientValue(XamlQualifiedObject const *, XamlPropertyToken, XamlQualifiedObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?XamlManagedRuntimeRPInvokes_GetValue@XamlParserCallbacks@DirectUI@@SAJPEBUXamlQualifiedObject@@UXamlPropertyToken@@PEAU3@@Z
    static long XamlManagedRuntimeRPInvokes_GetValue(XamlQualifiedObject const *, XamlPropertyToken, XamlQualifiedObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?XamlManagedRuntimeRPInvokes_GetXBindConnector@XamlParserCallbacks@DirectUI@@SAJPEAUXamlQualifiedObject@@000@Z
    static long XamlManagedRuntimeRPInvokes_GetXBindConnector(XamlQualifiedObject *, XamlQualifiedObject *, XamlQualifiedObject *, XamlQualifiedObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?XamlManagedRuntimeRPInvokes_SetValue@XamlParserCallbacks@DirectUI@@SAJPEAUXamlQualifiedObject@@UXamlPropertyToken@@0@Z
    static long XamlManagedRuntimeRPInvokes_SetValue(XamlQualifiedObject *, XamlPropertyToken, XamlQualifiedObject *);
};
} // namespace DirectUI
