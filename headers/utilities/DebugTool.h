#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
class DebugTool {
public:
    class DebugEnumInfo2;
    class DebugPropertyInfo;
    class IInternalDebugInterop;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateSecurityDescriptor@DebugTool@@YAJPEAPEAU_SECURITY_DESCRIPTOR@@K@Z
    long AllocateSecurityDescriptor(_SECURITY_DESCRIPTOR * *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDebugTool@DebugTool@@YAJPEAVCJupiterControl@@@Z
    long CreateDebugTool(CJupiterControl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDiagnostics@DebugTool@@YAJPEAVCJupiterControl@@PEBUMsg_ConnectToVisualTree@1@@Z
    long CreateDiagnostics(CJupiterControl *, WindissectOpaque const *);
};
