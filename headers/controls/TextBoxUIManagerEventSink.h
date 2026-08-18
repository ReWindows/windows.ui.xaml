#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class TextBoxUIManagerEventSink {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TextBoxUIManagerEventSink@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowClosed@TextBoxUIManagerEventSink@@UEAAJXZ
    virtual long OnWindowClosed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowClosing@TextBoxUIManagerEventSink@@UEAAJXZ
    virtual long OnWindowClosing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowOpened@TextBoxUIManagerEventSink@@UEAAJPEAUtagRECT@@@Z
    virtual long OnWindowOpened(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowOpening@TextBoxUIManagerEventSink@@UEAAJPEAUtagRECT@@@Z
    virtual long OnWindowOpening(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowUpdated@TextBoxUIManagerEventSink@@UEAAJPEAUtagRECT@@@Z
    virtual long OnWindowUpdated(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowUpdating@TextBoxUIManagerEventSink@@UEAAJPEAUtagRECT@@@Z
    virtual long OnWindowUpdating(tagRECT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TextBoxUIManagerEventSink@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TextBoxUIManagerEventSink@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextBoxUIManagerEventSink@@QEAA@PEAVCTextBoxBase@@@Z
    TextBoxUIManagerEventSink(CTextBoxBase *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCandidateWindowBoundsChangedEventForScreenRect@TextBoxUIManagerEventSink@@AEAAJPEAUtagRECT@@@Z
    long RaiseCandidateWindowBoundsChangedEventForScreenRect(tagRECT *);
};
