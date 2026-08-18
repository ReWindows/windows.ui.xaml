#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class XamlNodeStreamCacheManager {
public:
    class NodeStreamCacheEntry;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@XamlNodeStreamCacheManager@@QEAAXXZ
    void Flush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBinaryResourceForXamlUri@XamlNodeStreamCacheManager@@QEAAJAEBVxstring_ptr@@AEAV?$xref_ptr@UIPALResource@@@@@Z
    long GetBinaryResourceForXamlUri(xstring_ptr const &, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCacheForUri@XamlNodeStreamCacheManager@@QEAAJAEBVxstring_ptr@@PEA_N@Z
    long HasCacheForUri(xstring_ptr const &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetCachedXbfV2Readers@XamlNodeStreamCacheManager@@QEAAJXZ
    long ResetCachedXbfV2Readers();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XamlNodeStreamCacheManager@@QEAA@PEAVIParserCoreServices@@_N@Z
    XamlNodeStreamCacheManager(IParserCoreServices *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlNodeStreamCacheManager@@QEAA@XZ
    ~XamlNodeStreamCacheManager();
};
