#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class CWinHwndHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringToTop@CWinHwndHost@@UEAAJXZ
    virtual long BringToTop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWinHwndHost@@UEAAJPEAUIXcpHostSite@@PEAX@Z
    virtual long Create(IXcpHostSite *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CWinHwndHost@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetObject@CWinHwndHost@@QEAA_JPEAUHWND__@@_K_JAEAI@Z
    int64_t OnGetObject(HWND__*, uint64_t, int64_t, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Redraw@CWinHwndHost@@UEAAJXZ
    virtual long Redraw();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@CWinHwndHost@@UEAAJI@Z
    virtual long SetFocus(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@CWinHwndHost@@UEAAJMM@Z
    virtual long SetPosition(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CWinHwndHost@@UEAAJMM@Z
    virtual long SetSize(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisibility@CWinHwndHost@@UEAAXI@Z
    virtual void SetVisibility(unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubclassWinHwndHostWindow@CWinHwndHost@@AEAAJXZ
    long SubclassWinHwndHostWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnSubclassWinHwndHostWindow@CWinHwndHost@@AEAAJXZ
    long UnSubclassWinHwndHostWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WinHwndHostSubclassWndProc@CWinHwndHost@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t WinHwndHostSubclassWndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
