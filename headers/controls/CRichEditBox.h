#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 42 member(s).
class CRichEditBox {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlignment@CRichEditBox@@UEAAJPEAW4TextAlignment@DirectUI@@@Z
    virtual long GetAlignment(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentLinkInfo@CRichEditBox@@QEAAJJPEAPEAUIContentLinkInfo@Text@UI@Windows@@PEAH1@Z
    long GetContentLinkInfo(long, ::Windows::UI::Text::IContentLinkInfo * *, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDocument@CRichEditBox@@QEAAJAEBU_GUID@@PEAPEAUIUnknown@@@Z
    long GetDocument(_GUID const &, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputScope@CRichEditBox@@UEAAJPEAW4InputScopeNameValue@@@Z
    virtual long GetInputScope(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CRichEditBox@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@CRichEditBox@@UEAA_NXZ
    virtual bool IsEmpty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadOnly@CRichEditBox@@UEBAIXZ
    virtual unsigned int IsReadOnly() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@CRichEditBox@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CRichEditBox@@UEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CRichEditBox@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxNotify@CRichEditBox@@UEAAJIPEAX@Z
    virtual long TxNotify(unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualState@CRichEditBox@@UEAAJXZ
    virtual long UpdateVisualState();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcceptsReturn@CRichEditBox@@MEBAIXZ
    virtual unsigned int AcceptsReturn() const;
    // Category: Method | Source: PE Export
    // Symbol: ?AcceptsRichText@CRichEditBox@@MEBAIXZ
    virtual unsigned int AcceptsRichText() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCopyPropertyID@CRichEditBox@@MEBA?AW4KnownEventIndex@@XZ
    virtual int GetCopyPropertyID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCutPropertyID@CRichEditBox@@MEBA?AW4KnownEventIndex@@XZ
    virtual int GetCutPropertyID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandwritingViewPropertyID@CRichEditBox@@MEBA?AW4KnownPropertyIndex@@XZ
    virtual int GetHandwritingViewPropertyID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPastePropertyID@CRichEditBox@@MEBA?AW4KnownEventIndex@@XZ
    virtual int GetPastePropertyID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionFlyoutPropertyID@CRichEditBox@@MEBA?AW4KnownPropertyIndex@@XZ
    virtual int GetSelectionFlyoutPropertyID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionHighlightColorPropertyID@CRichEditBox@@MEBA?AW4KnownPropertyIndex@@XZ
    virtual int GetSelectionHighlightColorPropertyID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionHighlightColorWhenNotFocusedPropertyID@CRichEditBox@@MEBA?AW4KnownPropertyIndex@@XZ
    virtual int GetSelectionHighlightColorWhenNotFocusedPropertyID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextCompositionEventPropertyID@CRichEditBox@@MEBA?AW4KnownEventIndex@@W4TextCompositionStage@CTextBoxBase@@@Z
    virtual int GetTextCompositionEventPropertyID(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CRichEditBox@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCharacterReceived@CRichEditBox@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnCharacterReceived(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentChanged@CRichEditBox@@MEAAJ_N@Z
    virtual long OnContentChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFormattingAcceleratorsChanged@CRichEditBox@@IEAAJXZ
    long OnFormattingAcceleratorsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHandwritingViewClosed@CRichEditBox@@MEAAJXZ
    virtual long OnHandwritingViewClosed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@CRichEditBox@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnKeyDown(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@CRichEditBox@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnKeyUp(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChanged@CRichEditBox@@MEAAJXZ
    virtual long OnSelectionChanged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextServicesBuffer@CRichEditBox@@MEAAJAEBVxstring_ptr@@@Z
    virtual long SetTextServicesBuffer(xstring_ptr const &);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRichEditBox@@AEAA@PEAVCCoreServices@@@Z
    CRichEditBox(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectContentLinkProviders@CRichEditBox@@AEAAJXZ
    long ConnectContentLinkProviders();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateContentLinkTracker@CRichEditBox@@AEAAJIII@Z
    long CreateContentLinkTracker(unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectContentLinkProviders@CRichEditBox@@AEAAJXZ
    long DisconnectContentLinkProviders();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleContentLinkNotification@CRichEditBox@@AEAAJIPEAX@Z
    long HandleContentLinkNotification(unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleLinkNavigation@CRichEditBox@@AEAAJIIPEAX@Z
    long HandleLinkNavigation(unsigned int, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldNavigateLinkOnMouseClick@CRichEditBox@@AEAAJPEA_N@Z
    long ShouldNavigateLinkOnMouseClick(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateSetValueArguments@CRichEditBox@@CAJPEBVCDependencyProperty@@AEBVCValue@@@Z
    static long ValidateSetValueArguments(CDependencyProperty const *, CValue const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRichEditBox@@EEAA@XZ
    virtual ~CRichEditBox();
};
