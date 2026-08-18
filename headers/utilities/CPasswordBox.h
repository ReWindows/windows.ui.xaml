#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 34 member(s).
class CPasswordBox {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPasteClipboardContent@CPasswordBox@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long CanPasteClipboardContent(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPasswordBox@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputScope@CPasswordBox@@UEAAJPEAW4InputScopeNameValue@@@Z
    virtual long GetInputScope(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CPasswordBox@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@CPasswordBox@@UEAA_NXZ
    virtual bool IsEmpty();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsPassword@CPasswordBox@@UEBAIXZ
    virtual unsigned int IsPassword() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPasswordRevealed@CPasswordBox@@UEBAIXZ
    virtual unsigned int IsPasswordRevealed() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@CPasswordBox@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Password@CPasswordBox@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long Password(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevealPassword@CPasswordBox@@QEAAJI_N@Z
    long RevealPassword(unsigned int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CPasswordBox@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetPasswordChar@CPasswordBox@@UEAAJPEAG@Z
    virtual long TxGetPasswordChar(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFocusState@CPasswordBox@@UEAAJW4FocusState@DirectUI@@@Z
    virtual long UpdateFocusState(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CPasswordBox@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPastePropertyID@CPasswordBox@@MEBA?AW4KnownEventIndex@@XZ
    virtual int GetPastePropertyID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionFlyoutPropertyID@CPasswordBox@@MEBA?AW4KnownPropertyIndex@@XZ
    virtual int GetSelectionFlyoutPropertyID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionHighlightColorPropertyID@CPasswordBox@@MEBA?AW4KnownPropertyIndex@@XZ
    virtual int GetSelectionHighlightColorPropertyID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionHighlightColorWhenNotFocusedPropertyID@CPasswordBox@@MEBA?AW4KnownPropertyIndex@@XZ
    virtual int GetSelectionHighlightColorWhenNotFocusedPropertyID() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPasswordBox@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCharacterReceived@CPasswordBox@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnCharacterReceived(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentChanged@CPasswordBox@@MEAAJ_N@Z
    virtual long OnContentChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@CPasswordBox@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnGotFocus(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputScopeChanged@CPasswordBox@@IEAAJPEAVCInputScope@@@Z
    long OnInputScopeChanged(CInputScope *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextServicesBuffer@CPasswordBox@@MEAAJAEBVxstring_ptr@@@Z
    virtual long SetTextServicesBuffer(xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualState@CPasswordBox@@MEAAJXZ
    virtual long UpdateVisualState();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPasswordBox@@AEAA@PEAVCCoreServices@@@Z
    CPasswordBox(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanInvokeRevealButton@CPasswordBox@@AEAAIXZ
    unsigned int CanInvokeRevealButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CryptProtectPassword@CPasswordBox@@AEAAJAEBVxstring_ptr@@@Z
    long CryptProtectPassword(xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CryptUnprotectPassword@CPasswordBox@@AEBAJAEAVxstring_ptr@@@Z
    long CryptUnprotectPassword(xstring_ptr &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIhmSkinToBitLocker@CPasswordBox@@AEAAJ_N@Z
    long UpdateIhmSkinToBitLocker(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateSetValueArguments@CPasswordBox@@CAJPEBVCDependencyProperty@@AEBVCValue@@@Z
    static long ValidateSetValueArguments(CDependencyProperty const *, CValue const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPasswordBox@@EEAA@XZ
    virtual ~CPasswordBox();
};
