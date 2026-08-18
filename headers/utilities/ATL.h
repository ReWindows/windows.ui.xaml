#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class ATL {
public:
    class CAtlBaseModule;
    class CAtlModule;
    class CComCriticalSection;
    class CComModule;
    class CComSafeDeleteCriticalSection;
    class CExpansionVector;
    class CRegKey;
    class CRegObject;
    class CRegParser;
    class _ATL_BASE_MODULE70;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlCallTermFunc@ATL@@YAXPEAU_ATL_MODULE70@1@@Z
    void AtlCallTermFunc(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlCrtErrorCheck@ATL@@YAHH@Z
    int AtlCrtErrorCheck(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlHresultFromLastError@ATL@@YAJXZ
    long AtlHresultFromLastError();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlHresultFromWin32@ATL@@YAJK@Z
    long AtlHresultFromWin32(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlThrowImpl@ATL@@YAXJ@Z
    void AtlThrowImpl(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z
    unsigned long SafeDecrementReferenceMultiThread(long volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SafeIncrementReferenceMultiThread@ATL@@YAKPECJ@Z
    unsigned long SafeIncrementReferenceMultiThread(long volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AtlRaiseException@ATL@@YAXKK@Z
    void _AtlRaiseException(unsigned long, unsigned long);
};
