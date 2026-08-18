#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 85 member(s).
class TextServicesHost {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TextServicesHost@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRectVisible@TextServicesHost@@UEAAJAEBUtagRECT@@@Z
    virtual long EnsureRectVisible(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRectVisibleWithPadding@TextServicesHost@@UEAAJAEBUtagRECT@@@Z
    virtual long EnsureRectVisibleWithPadding(tagRECT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultFont@TextServicesHost@@UEAAPEAGXZ
    virtual unsigned short * GetDefaultFont();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFontFace@TextServicesHost@@UEAAPEAUIDWriteFontFace@@K@Z
    virtual IDWriteFontFace * GetFontFace(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGripperMetrics@TextServicesHost@@UEAAJPEAH0@Z
    virtual long GetGripperMetrics(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRunFontFaceId@TextServicesHost@@UEAAKPEBGW4DWRITE_FONT_WEIGHT@@W4DWRITE_FONT_STRETCH@@W4DWRITE_FONT_STYLE@@K0IKAEAI@Z
    virtual unsigned long GetRunFontFaceId(unsigned short const *, int, int, int, unsigned long, unsigned short const *, unsigned int, unsigned long, unsigned int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSerializableFontName@TextServicesHost@@UEAAPEAGK@Z
    virtual unsigned short * GetSerializableFontName(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleRect@TextServicesHost@@UEAAJPEAUtagRECT@@@Z
    virtual long GetVisibleRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTxCharFormatChange@TextServicesHost@@UEAAJPEBU_charformatw@@@Z
    virtual long OnTxCharFormatChange(_charformatw const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTxParaFormatChange@TextServicesHost@@UEAAJPEBU_paraformat@@@Z
    virtual long OnTxParaFormatChange(_paraformat const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TextServicesHost@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TextServicesHost@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowGrippers@TextServicesHost@@UEAAJPEAUtagPOINT@@M0M@Z
    virtual long ShowGrippers(tagPOINT *, float, tagPOINT *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxActivate@TextServicesHost@@UEAAJPEAJ@Z
    virtual long TxActivate(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxClientToScreen@TextServicesHost@@UEAAHPEAUtagPOINT@@@Z
    virtual int TxClientToScreen(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxCreateCaret@TextServicesHost@@UEAAHPEAUHBITMAP__@@HH@Z
    virtual int TxCreateCaret(HBITMAP__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxDeactivate@TextServicesHost@@UEAAJJ@Z
    virtual long TxDeactivate(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxDestroyCaret@TextServicesHost@@UEAAJXZ
    virtual long TxDestroyCaret();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxEnableScrollBar@TextServicesHost@@UEAAHHH@Z
    virtual int TxEnableScrollBar(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxFreeTextServicesNotification@TextServicesHost@@UEAAXXZ
    virtual void TxFreeTextServicesNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetAcceleratorPos@TextServicesHost@@UEAAJPEAJ@Z
    virtual long TxGetAcceleratorPos(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetBackStyle@TextServicesHost@@UEAAJPEAW4TXTBACKSTYLE@@@Z
    virtual long TxGetBackStyle(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetCharFormat@TextServicesHost@@UEAAJPEAPEBU_charformatw@@@Z
    virtual long TxGetCharFormat(_charformatw const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetClientRect@TextServicesHost@@UEAAJPEAUtagRECT@@@Z
    virtual long TxGetClientRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetContentPadding@TextServicesHost@@UEAAJPEAUtagRECT@@@Z
    virtual long TxGetContentPadding(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetDC@TextServicesHost@@UEAAPEAUHDC__@@XZ
    virtual HDC__* TxGetDC();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetEastAsianFlags@TextServicesHost@@UEAAJPEAJ@Z
    virtual long TxGetEastAsianFlags(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetEditStyle@TextServicesHost@@UEAAJKPEAK@Z
    virtual long TxGetEditStyle(unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetExtent@TextServicesHost@@UEAAJPEAUtagSIZE@@@Z
    virtual long TxGetExtent(tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetHorzExtent@TextServicesHost@@UEAAJPEAJ@Z
    virtual long TxGetHorzExtent(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetMaxLength@TextServicesHost@@UEAAJPEAK@Z
    virtual long TxGetMaxLength(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetPalette@TextServicesHost@@UEAAPEAUHPALETTE__@@XZ
    virtual HPALETTE__* TxGetPalette();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetParaFormat@TextServicesHost@@UEAAJPEAPEBU_paraformat@@@Z
    virtual long TxGetParaFormat(_paraformat const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetPasswordChar@TextServicesHost@@UEAAJPEAG@Z
    virtual long TxGetPasswordChar(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetPropertyBits@TextServicesHost@@UEAAJKPEAK@Z
    virtual long TxGetPropertyBits(unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetScrollBars@TextServicesHost@@UEAAJPEAK@Z
    virtual long TxGetScrollBars(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetSelectionBarWidth@TextServicesHost@@UEAAJPEAJ@Z
    virtual long TxGetSelectionBarWidth(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetShouldUseVisualPixels@TextServicesHost@@UEAA_NXZ
    virtual bool TxGetShouldUseVisualPixels();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetSysColor@TextServicesHost@@UEAAKH@Z
    virtual unsigned long TxGetSysColor(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetViewInset@TextServicesHost@@UEAAJPEAUtagRECT@@@Z
    virtual long TxGetViewInset(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetViewportRect@TextServicesHost@@UEAAJPEAUtagRECT@@@Z
    virtual long TxGetViewportRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetVisualReferenceId@TextServicesHost@@UEAA_KXZ
    virtual uint64_t TxGetVisualReferenceId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetWindow@TextServicesHost@@UEAAJPEAPEAUHWND__@@@Z
    virtual long TxGetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetWindowStyles@TextServicesHost@@UEAAJPEAK0@Z
    virtual long TxGetWindowStyles(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxImmGetContext@TextServicesHost@@UEAAPEAUHIMC__@@XZ
    virtual HIMC__* TxImmGetContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxImmReleaseContext@TextServicesHost@@UEAAXPEAUHIMC__@@@Z
    virtual void TxImmReleaseContext(HIMC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxInvalidateRect@TextServicesHost@@UEAAXPEBUtagRECT@@H@Z
    virtual void TxInvalidateRect(tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxIsDoubleClickPending@TextServicesHost@@UEAAHXZ
    virtual int TxIsDoubleClickPending();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxKillTimer@TextServicesHost@@UEAAXI@Z
    virtual void TxKillTimer(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxNotify@TextServicesHost@@UEAAJKPEAX@Z
    virtual long TxNotify(unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxReleaseDC@TextServicesHost@@UEAAHPEAUHDC__@@@Z
    virtual int TxReleaseDC(HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxScreenToClient@TextServicesHost@@UEAAHPEAUtagPOINT@@@Z
    virtual int TxScreenToClient(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxScrollWindowEx@TextServicesHost@@UEAAXHHPEBUtagRECT@@0PEAUHRGN__@@PEAU2@I@Z
    virtual void TxScrollWindowEx(int, int, tagRECT const *, tagRECT const *, HRGN__*, tagRECT *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetCapture@TextServicesHost@@UEAAXH@Z
    virtual void TxSetCapture(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetCaretPos@TextServicesHost@@UEAAHHH@Z
    virtual int TxSetCaretPos(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetCursor@TextServicesHost@@UEAAXPEAUHICON__@@H@Z
    virtual void TxSetCursor(HICON__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetCursor2@TextServicesHost@@UEAAPEAUHICON__@@PEAU2@H@Z
    virtual HICON__* TxSetCursor2(HICON__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetFocus@TextServicesHost@@UEAAXXZ
    virtual void TxSetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetForegroundWindow@TextServicesHost@@UEAAJXZ
    virtual long TxSetForegroundWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetScrollPos@TextServicesHost@@UEAAHHHH@Z
    virtual int TxSetScrollPos(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetScrollRange@TextServicesHost@@UEAAHHJHH@Z
    virtual int TxSetScrollRange(int, long, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxSetTimer@TextServicesHost@@UEAAHII@Z
    virtual int TxSetTimer(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxShowCaret@TextServicesHost@@UEAAHH@Z
    virtual int TxShowCaret(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxShowDropCaret@TextServicesHost@@UEAAJHPEAUHDC__@@PEBUtagRECT@@@Z
    virtual long TxShowDropCaret(int, HDC__*, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxShowScrollBar@TextServicesHost@@UEAAHHH@Z
    virtual int TxShowScrollBar(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxViewChange@TextServicesHost@@UEAAXH@Z
    virtual void TxViewChange(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGripperColors@TextServicesHost@@QEAAJXZ
    long UpdateGripperColors();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGripper@TextServicesHost@@AEAAJW4GripperType@CRichEditGripper@@@Z
    long CreateGripper(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTimerWindow@TextServicesHost@@AEAAJXZ
    long CreateTimerWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureGrippers@TextServicesHost@@AEAAJXZ
    long EnsureGrippers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTimerWindowClass@TextServicesHost@@AEAAJXZ
    long EnsureTimerWindowClass();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGripper@TextServicesHost@@AEAAPEAVCRichEditGripper@@W4GripperType@2@@Z
    CRichEditGripper * GetGripper(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowGripper@TextServicesHost@@AEAAJPEAVCRichEditGripper@@PEAUtagPOINT@@MPEAUXRECT_WH@@I@Z
    long ShowGripper(CRichEditGripper *, tagPOINT *, float, XRECT_WH *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TimerWindowProc@TextServicesHost@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t TimerWindowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextServicesHost@@AEAA@XZ
    ~TextServicesHost();
};
