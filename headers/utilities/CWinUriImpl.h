#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 24 member(s).
class CWinUriImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWinUriImpl@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CWinUriImpl@@UEBAJPEAPEAUIPALUri@@@Z
    virtual long Clone(IPALUri * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Combine@CWinUriImpl@@UEAAJIPEBGPEAPEAUIPALUri@@@Z
    virtual long Combine(unsigned int, unsigned short const *, IPALUri * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBaseURI@CWinUriImpl@@UEAAJPEAPEAUIPALUri@@@Z
    virtual long CreateBaseURI(IPALUri * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanonical@CWinUriImpl@@UEBAJPEAVxstring_ptr@@@Z
    virtual long GetCanonical(xstring_ptr *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanonical@CWinUriImpl@@UEBAJPEAIPEAG@Z
    virtual long GetCanonical(unsigned int *, unsigned short *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentResourceLocation@CWinUriImpl@@UEBA?AW4Enum@ComponentResourceLocation@@XZ
    virtual int GetComponentResourceLocation() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtension@CWinUriImpl@@UEAAJPEAIPEAG@Z
    virtual long GetExtension(unsigned int *, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileName@CWinUriImpl@@UEAAJPEAIPEAG@Z
    virtual long GetFileName(unsigned int *, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilePath@CWinUriImpl@@UEBAJPEAIPEAG@Z
    virtual long GetFilePath(unsigned int *, unsigned short *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHost@CWinUriImpl@@UEBAJPEAIPEAG@Z
    virtual long GetHost(unsigned int *, unsigned short *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPassword@CWinUriImpl@@UEAAJPEAIPEAG@Z
    virtual long GetPassword(unsigned int *, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPath@CWinUriImpl@@UEBAJPEAIPEAG@Z
    virtual long GetPath(unsigned int *, unsigned short *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPortNumber@CWinUriImpl@@UEAAJPEAI@Z
    virtual long GetPortNumber(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQueryString@CWinUriImpl@@UEAAJPEAIPEAG@Z
    virtual long GetQueryString(unsigned int *, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScheme@CWinUriImpl@@UEBAJPEAIPEAG@Z
    virtual long GetScheme(unsigned int *, unsigned short *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUsername@CWinUriImpl@@UEAAJPEAIPEAG@Z
    virtual long GetUsername(unsigned int *, unsigned short *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWinUriImpl@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetComponentResourceLocation@CWinUriImpl@@UEAAXW4Enum@ComponentResourceLocation@@@Z
    virtual void SetComponentResourceLocation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformToMsResourceUri@CWinUriImpl@@UEBAJPEAPEAUIPALUri@@@Z
    virtual long TransformToMsResourceUri(IPALUri * *) const;
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWinUriImpl@@EEAA@XZ
    virtual ~CWinUriImpl();
};
