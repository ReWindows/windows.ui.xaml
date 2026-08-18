#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
class WildcardUriList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEntry@WildcardUriList@@UEAAJHW4ApplicationContentUriWinRTAccess@@PEAUIUri@@@Z
    virtual long AddEntry(int, int, IUri *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesUriMatchWildcardUri@WildcardUriList@@SAJPEAUIUri@@0PEAH@Z
    static long DoesUriMatchWildcardUri(IUri *, IUri *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllDeclaredAccesses@WildcardUriList@@UEAA?AW4ApplicationContentUriWinRTAccess@@XZ
    virtual int GetAllDeclaredAccesses();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUriInNavigationDomain@WildcardUriList@@UEAAJPEAUIUri@@PEAH@Z
    virtual long IsUriInNavigationDomain(IUri *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUriInNavigationDomainAndHasWinRTAccess@WildcardUriList@@UEAAJPEAUIUri@@PEAHPEAW4ApplicationContentUriWinRTAccess@@@Z
    virtual long IsUriInNavigationDomainAndHasWinRTAccess(IUri *, int *, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WildcardUriList@@UEAA@XZ
    virtual ~WildcardUriList();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareStrings@WildcardUriList@@KAJQEAG0GHPEAH@Z
    static long CompareStrings(unsigned short * const, unsigned short * const, unsigned short, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CountCharactersNextTokenOrEmpty@WildcardUriList@@KA_KPEBGG@Z
    static uint64_t CountCharactersNextTokenOrEmpty(unsigned short const *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesUriPropertyMatch@WildcardUriList@@KAJPEAUIUri@@0W4__MIDL_IUri_0001@@PEAH@Z
    static long DoesUriPropertyMatch(IUri *, IUri *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesUriPropertyMatchWildcardUriHost@WildcardUriList@@KAJPEAUIUri@@0PEAH@Z
    static long DoesUriPropertyMatchWildcardUriHost(IUri *, IUri *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesUriPropertyMatchWildcardUriPath@WildcardUriList@@KAJPEAUIUri@@0PEAH@Z
    static long DoesUriPropertyMatchWildcardUriPath(IUri *, IUri *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesUriPropertyMatchWildcardUriPort@WildcardUriList@@KAJPEAUIUri@@0PEAH@Z
    static long DoesUriPropertyMatchWildcardUriPort(IUri *, IUri *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUriInNavigationDomainListAndHasWinrtAccess@WildcardUriList@@IEAAJPEAUIUri@@PEAHPEAW4ApplicationContentUriWinRTAccess@@@Z
    long IsUriInNavigationDomainListAndHasWinrtAccess(IUri *, int *, int *);
};
