#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
class CDownloader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckUri@CDownloader@@UEAAJPEAUIPALUri@@IPEAH1@Z
    virtual long CheckUri(IPALUri *, unsigned int, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckUri@CDownloader@@UEAAJAEBVxstring_ptr@@IPEAH1@Z
    virtual long CheckUri(xstring_ptr const &, unsigned int, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContinueAllDownloads@CDownloader@@UEAAJPEAH@Z
    virtual long ContinueAllDownloads(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDownloader@@SAJPEAPEAV1@PEAUIDownloaderSite@@PEAVCCoreServices@@@Z
    static long Create(CDownloader * *, IDownloaderSite *, CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUnsecureDownloadRequest@CDownloader@@UEAAJPEAUIPALDownloadRequest@@PEAPEAUIPALAbortableOperation@@PEAUIPALUri@@@Z
    virtual long CreateUnsecureDownloadRequest(IPALDownloadRequest *, IPALAbortableOperation * *, IPALUri *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUnsecureDownloadRequest@CDownloader@@UEAAJPEAUIPALUri@@PEAUIPALDownloadRequest@@PEAPEAUIPALAbortableOperation@@I@Z
    virtual long CreateUnsecureDownloadRequest(IPALUri *, IPALDownloadRequest *, IPALAbortableOperation * *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetJobQueue@CDownloader@@UEAAAEAVThreadedJobQueue@@XZ
    virtual ThreadedJobQueue & GetJobQueue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDownloader@CDownloader@@UEAAXXZ
    virtual void ResetDownloader();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAllDownloads@CDownloader@@UEAAJXZ
    virtual long StopAllDownloads();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDownloader@@IEAA@XZ
    CDownloader();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDownloader@@MEAA@XZ
    virtual ~CDownloader();
};
