#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class NavigationCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTransientCacheSize@NavigationCache@DirectUI@@QEAAJI@Z
    long ChangeTransientCacheSize(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContent@NavigationCache@DirectUI@@QEAAJPEAVPageStackEntry@2@PEAPEAUIInspectable@@@Z
    long GetContent(::DirectUI::PageStackEntry *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UncachePageContent@NavigationCache@DirectUI@@QEAAJPEAUHSTRING__@@@Z
    long UncachePageContent(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationCache@DirectUI@@QEAA@XZ
    ~NavigationCache();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheContent@NavigationCache@DirectUI@@AEAAJW4NavigationCacheMode@Navigation@Xaml@UI@Windows@@PEAUHSTRING__@@PEAUIInspectable@@@Z
    long CacheContent(int, HSTRING__*, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedContent@NavigationCache@DirectUI@@AEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@PEAE@Z
    long GetCachedContent(HSTRING__*, IInspectable * *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadContent@NavigationCache@DirectUI@@CAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    static long LoadContent(HSTRING__*, IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NavigationCache@DirectUI@@AEAA@XZ
    NavigationCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UncacheContent@NavigationCache@DirectUI@@AEAAJXZ
    long UncacheContent();
};
} // namespace DirectUI
