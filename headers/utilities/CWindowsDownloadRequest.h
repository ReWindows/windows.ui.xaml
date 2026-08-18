#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 35 member(s).
class CWindowsDownloadRequest {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Abort@CWindowsDownloadRequest@@QEAAXXZ
    void Abort();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWindowsDownloadRequest@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Authenticate@CWindowsDownloadRequest@@UEAAJPEAPEAUHWND__@@PEAPEAG1@Z
    virtual long Authenticate(HWND__* *, unsigned short * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginningTransaction@CWindowsDownloadRequest@@UEAAJPEBG0KPEAPEAG@Z
    virtual long BeginningTransaction(unsigned short const *, unsigned short const *, unsigned long, unsigned short * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWindowsDownloadRequest@@QEAA@II@Z
    CWindowsDownloadRequest(unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBindInfo@CWindowsDownloadRequest@@UEAAJPEAKPEAU_tagBINDINFO@@@Z
    virtual long GetBindInfo(unsigned long *, _tagBINDINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBindString@CWindowsDownloadRequest@@UEAAJKPEAPEAGKPEAK@Z
    virtual long GetBindString(unsigned long, unsigned short * *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPriority@CWindowsDownloadRequest@@UEAAJPEAJ@Z
    virtual long GetPriority(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDataAvailable@CWindowsDownloadRequest@@UEAAJKKPEAUtagFORMATETC@@PEAUtagSTGMEDIUM@@@Z
    virtual long OnDataAvailable(unsigned long, unsigned long, tagFORMATETC *, tagSTGMEDIUM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLowResource@CWindowsDownloadRequest@@UEAAJK@Z
    virtual long OnLowResource(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnObjectAvailable@CWindowsDownloadRequest@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z
    virtual long OnObjectAvailable(_GUID const &, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProgress@CWindowsDownloadRequest@@UEAAJKKKPEBG@Z
    virtual long OnProgress(unsigned long, unsigned long, unsigned long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResponse@CWindowsDownloadRequest@@UEAAJKPEBG0PEAPEAG@Z
    virtual long OnResponse(unsigned long, unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStartBinding@CWindowsDownloadRequest@@UEAAJKPEAUIBinding@@@Z
    virtual long OnStartBinding(unsigned long, IBinding *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStopBinding@CWindowsDownloadRequest@@UEAAJJPEBG@Z
    virtual long OnStopBinding(long, unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWindowsDownloadRequest@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWindowsDownloadRequest@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWindowsDownloadRequest@@QEAA@XZ
    ~CWindowsDownloadRequest();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireGotResponse@CWindowsDownloadRequest@@AEAAJJ@Z
    long FireGotResponse(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInternetExplorerAcceptLanguageString@CWindowsDownloadRequest@@AEAAJPEAVxstring_ptr@@@Z
    long GetInternetExplorerAcceptLanguageString(xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowsAcceptLanguageString@CWindowsDownloadRequest@@AEAAJPEAVxstring_ptr@@@Z
    long GetWindowsAcceptLanguageString(xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDataBuffer@CWindowsDownloadRequest@@AEAAJK@Z
    long InitializeDataBuffer(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadStreamPull@CWindowsDownloadRequest@@AEAAJXZ
    long ReadStreamPull();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupDataStreams@CWindowsDownloadRequest@@AEAAJXZ
    long SetupDataStreams();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Download@CWindowsDownloadRequest@@AEAAJPEAUIPALUri@@PEAUIUnknown@@@Z
    long _Download(IPALUri *, IUnknown *);
};
