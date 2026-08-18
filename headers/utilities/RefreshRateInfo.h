#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class RefreshRateInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@RefreshRateInfo@@SAJPEAUIDXGIOutput@@PEAUIDXGIFactory1@@PEAPEAV1@@Z
    static long Create(IDXGIOutput *, IDXGIFactory1*, RefreshRateInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRefreshIntervalInMilliseconds@RefreshRateInfo@@UEAAMXZ
    virtual float GetRefreshIntervalInMilliseconds();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@RefreshRateInfo@@UEAAIXZ
    virtual unsigned int IsValid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRefreshInterval@RefreshRateInfo@@UEAAJPEAVDCompTreeHost@@@Z
    virtual long UpdateRefreshInterval(DCompTreeHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForRefreshInterval@RefreshRateInfo@@UEAAJXZ
    virtual long WaitForRefreshInterval();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RefreshRateInfo@@AEAA@PEAUIDXGIOutput@@PEAUIDXGIFactory1@@PEAUIPALClock@@@Z
    RefreshRateInfo(IDXGIOutput *, IDXGIFactory1*, IPALClock *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RefreshRateInfo@@EEAA@XZ
    virtual ~RefreshRateInfo();
};
