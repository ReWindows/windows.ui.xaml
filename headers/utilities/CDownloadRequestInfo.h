#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class CDownloadRequestInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDownloadRequestInfo@@SAJAEBVxstring_ptr@@PEAUIPALUri@@PEAUIPALDownloadResponseCallback@@PEAPEAV1@@Z
    static long Create(xstring_ptr const &, IPALUri *, IPALDownloadResponseCallback *, CDownloadRequestInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAbsoluteUri@CDownloadRequestInfo@@UEAAJPEAPEAUIPALUri@@@Z
    virtual long GetAbsoluteUri(IPALUri * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAuthDomain@CDownloadRequestInfo@@UEAAJPEAVxstring_ptr@@@Z
    virtual long GetAuthDomain(xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallback@CDownloadRequestInfo@@UEAAJPEAPEAUIPALDownloadResponseCallback@@@Z
    virtual long GetCallback(IPALDownloadResponseCallback * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOptionFlags@CDownloadRequestInfo@@UEAAJPEAI@Z
    virtual long GetOptionFlags(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPassword@CDownloadRequestInfo@@UEAAJPEAVxstring_ptr@@@Z
    virtual long GetPassword(xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUrl@CDownloadRequestInfo@@UEAAJPEAVxstring_ptr@@@Z
    virtual long GetUrl(xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUseDefaultCredentials@CDownloadRequestInfo@@UEAAJPEAI@Z
    virtual long GetUseDefaultCredentials(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUsername@CDownloadRequestInfo@@UEAAJPEAVxstring_ptr@@@Z
    virtual long GetUsername(xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCredentials@CDownloadRequestInfo@@UEAAJAEBVxstring_ptr@@00@Z
    virtual long SetCredentials(xstring_ptr const &, xstring_ptr const &, xstring_ptr const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOptionFlags@CDownloadRequestInfo@@UEAAJI@Z
    virtual long SetOptionFlags(unsigned int);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDownloadRequestInfo@@IEAA@XZ
    CDownloadRequestInfo();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDownloadRequestInfo@@MEAA@XZ
    virtual ~CDownloadRequestInfo();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDownloadRequestInfo@@AEAAJAEBVxstring_ptr@@PEAUIPALUri@@PEAUIPALDownloadResponseCallback@@@Z
    long Initialize(xstring_ptr const &, IPALUri *, IPALDownloadResponseCallback *);
};
