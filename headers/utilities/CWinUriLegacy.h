#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 28 member(s).
class CWinUriLegacy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWinUriLegacy@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CWinUriLegacy@@UEBAJPEAPEAUIPALUri@@@Z
    virtual long Clone(IPALUri * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Combine@CWinUriLegacy@@UEAAJIPEBGPEAPEAUIPALUri@@@Z
    virtual long Combine(unsigned int, unsigned short const *, IPALUri * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBaseURI@CWinUriLegacy@@UEAAJPEAPEAUIPALUri@@@Z
    virtual long CreateBaseURI(IPALUri * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanonical@CWinUriLegacy@@UEBAJPEAVxstring_ptr@@@Z
    virtual long GetCanonical(xstring_ptr *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanonical@CWinUriLegacy@@UEBAJPEAIPEAG@Z
    virtual long GetCanonical(unsigned int *, unsigned short *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentResourceLocation@CWinUriLegacy@@UEBA?AW4Enum@ComponentResourceLocation@@XZ
    virtual int GetComponentResourceLocation() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtension@CWinUriLegacy@@UEAAJPEAIPEAG@Z
    virtual long GetExtension(unsigned int *, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileName@CWinUriLegacy@@UEAAJPEAIPEAG@Z
    virtual long GetFileName(unsigned int *, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilePath@CWinUriLegacy@@UEBAJPEAIPEAG@Z
    virtual long GetFilePath(unsigned int *, unsigned short *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHost@CWinUriLegacy@@UEBAJPEAIPEAG@Z
    virtual long GetHost(unsigned int *, unsigned short *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPassword@CWinUriLegacy@@UEAAJPEAIPEAG@Z
    virtual long GetPassword(unsigned int *, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPath@CWinUriLegacy@@UEBAJPEAIPEAG@Z
    virtual long GetPath(unsigned int *, unsigned short *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPortNumber@CWinUriLegacy@@UEAAJPEAI@Z
    virtual long GetPortNumber(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQueryString@CWinUriLegacy@@UEAAJPEAIPEAG@Z
    virtual long GetQueryString(unsigned int *, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScheme@CWinUriLegacy@@UEBAJPEAIPEAG@Z
    virtual long GetScheme(unsigned int *, unsigned short *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUsername@CWinUriLegacy@@UEAAJPEAIPEAG@Z
    virtual long GetUsername(unsigned int *, unsigned short *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWinUriLegacy@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetComponentResourceLocation@CWinUriLegacy@@UEAAXW4Enum@ComponentResourceLocation@@@Z
    virtual void SetComponentResourceLocation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformToMsResourceUri@CWinUriLegacy@@UEBAJPEAPEAUIPALUri@@@Z
    virtual long TransformToMsResourceUri(IPALUri * *) const;
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWinUriLegacy@@AEAA@XZ
    CWinUriLegacy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyUrlComponents@CWinUriLegacy@@CAJPEBUURL_COMPONENTSW@@PEAU2@@Z
    static long CopyUrlComponents(URL_COMPONENTSW const *, URL_COMPONENTSW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWinUriLegacy@@CAJHIPEBGPEAPEAUIPALUri@@@Z
    static long Create(int, unsigned int, unsigned short const *, IPALUri * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHealthyUrl@CWinUriLegacy@@CAJIPEBGPEAIPEAG@Z
    static long GetHealthyUrl(unsigned int, unsigned short const *, unsigned int *, unsigned short *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWinUriLegacy@@EEAA@XZ
    virtual ~CWinUriLegacy();
};
