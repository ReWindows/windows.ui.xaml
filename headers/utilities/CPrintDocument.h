#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 19 member(s).
class CPrintDocument {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEventListener@CPrintDocument@@UEAAJUEventHandle@@PEAVCValue@@H1_N@Z
    virtual long AddEventListener(EventHandle, CValue *, int, CValue *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPagesComplete@CPrintDocument@@QEAAJXZ
    long AddPagesComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowsHandlerWhenNotLive@CPrintDocument@@UEBA_NHW4KnownEventIndex@@@Z
    virtual bool AllowsHandlerWhenNotLive(int, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginPreview@CPrintDocument@@QEAAJPEAX@Z
    long BeginPreview(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPrintDocument@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviewPage@CPrintDocument@@QEAAJIMM@Z
    long GetPreviewPage(unsigned int, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CPrintDocument@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDocument@CPrintDocument@@QEAAJPEAX0@Z
    long MakeDocument(void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CPrintDocument@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEventListener@CPrintDocument@@UEAAJUEventHandle@@PEAVCValue@@@Z
    virtual long RemoveEventListener(EventHandle, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CPrintDocument@@QEAAXXZ
    void Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreviewPage@CPrintDocument@@QEAAJHPEAVCUIElement@@@Z
    long SetPreviewPage(int, CUIElement *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrintFactoryAndTarget@CPrintDocument@@AEAAJPEAVCCoreServices@@PEAPEAUIPALAcceleratedGraphicsFactory@@PEAPEAUIPALPrintTarget@@@Z
    long GetPrintFactoryAndTarget(CCoreServices *, IPALAcceleratedGraphicsFactory * *, IPALPrintTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutAndPrintSinglePage@CPrintDocument@@AEAAJHPEAVCUIElement@@@Z
    long LayoutAndPrintSinglePage(int, CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrintSinglePage@CPrintDocument@@AEAAJHPEAVCUIElement@@@Z
    long PrintSinglePage(int, CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterEvents@CPrintDocument@@AEAAJXZ
    long UnregisterEvents();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPrintDocument@@EEAA@XZ
    virtual ~CPrintDocument();
};
