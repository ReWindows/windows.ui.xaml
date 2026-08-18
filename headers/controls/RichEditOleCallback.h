#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
class RichEditOleCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RichEditOleCallback@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextSensitiveHelp@RichEditOleCallback@@UEAAJH@Z
    virtual long ContextSensitiveHelp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteObject@RichEditOleCallback@@UEAAJPEAUIOleObject@@@Z
    virtual long DeleteObject(IOleObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClipboardData@RichEditOleCallback@@UEAAJPEAU_charrange@@KPEAPEAUIDataObject@@@Z
    virtual long GetClipboardData(_charrange *, unsigned long, IDataObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextMenu@RichEditOleCallback@@UEAAJGPEAUIOleObject@@PEAU_charrange@@PEAPEAUHMENU__@@@Z
    virtual long GetContextMenu(unsigned short, IOleObject *, _charrange *, HMENU__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDragDropEffect@RichEditOleCallback@@UEAAJHKPEAK@Z
    virtual long GetDragDropEffect(int, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInPlaceContext@RichEditOleCallback@@UEAAJPEAPEAUIOleInPlaceFrame@@PEAPEAUIOleInPlaceUIWindow@@PEAUtagOIFI@@@Z
    virtual long GetInPlaceContext(IOleInPlaceFrame * *, IOleInPlaceUIWindow * *, tagOIFI *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNewStorage@RichEditOleCallback@@UEAAJPEAPEAUIStorage@@@Z
    virtual long GetNewStorage(IStorage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryAcceptData@RichEditOleCallback@@UEAAJPEAUIDataObject@@PEAGKHPEAX@Z
    virtual long QueryAcceptData(IDataObject *, unsigned short *, unsigned long, int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInsertObject@RichEditOleCallback@@UEAAJPEAU_GUID@@PEAUIStorage@@J@Z
    virtual long QueryInsertObject(_GUID *, IStorage *, long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RichEditOleCallback@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RichEditOleCallback@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RichEditOleCallback@@QEAA@PEAVCTextBoxBase@@@Z
    RichEditOleCallback(CTextBoxBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContainerUI@RichEditOleCallback@@UEAAJH@Z
    virtual long ShowContainerUI(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClipboardContainsBitmap@RichEditOleCallback@@AEAA_NXZ
    bool ClipboardContainsBitmap();
};
