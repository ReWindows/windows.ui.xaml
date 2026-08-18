#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 49 member(s).
class CUIAWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUIAWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseEventAdded@CUIAWrapper@@UEAAJHPEAUtagSAFEARRAY@@@Z
    virtual long AdviseEventAdded(int, tagSAFEARRAY *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdviseEventRemoved@CUIAWrapper@@UEAAJHPEAUtagSAFEARRAY@@@Z
    virtual long AdviseEventRemoved(int, tagSAFEARRAY *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToVariant@CUIAWrapper@@QEAAJW4APAutomationControlType@UIAXcp@@PEAUtagVARIANT@@@Z
    long ConvertToVariant(int, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToVariant@CUIAWrapper@@QEAAJAEBVxstring_ptr_view@@PEAUtagVARIANT@@@Z
    long ConvertToVariant(xstring_ptr_view const &, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToVariant@CUIAWrapper@@QEAAJPEAUXPOINTF@@PEAUtagVARIANT@@@Z
    long ConvertToVariant(XPOINTF *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToVariant@CUIAWrapper@@QEAAJPEAVCAutomationPeer@@PEAUtagVARIANT@@@Z
    long ConvertToVariant(CAutomationPeer *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToVariant@CUIAWrapper@@QEAAJPEAVCAutomationPeerAnnotationCollection@@HPEAUtagVARIANT@@@Z
    long ConvertToVariant(CAutomationPeerAnnotationCollection *, int, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToVariant@CUIAWrapper@@QEAAJPEAVCDOCollection@@PEAUtagVARIANT@@@Z
    long ConvertToVariant(CDOCollection *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deinit@CUIAWrapper@@QEAAJXZ
    long Deinit();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEmbeddedFragmentRoots@CUIAWrapper@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetEmbeddedFragmentRoots(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternProvider@CUIAWrapper@@UEAAJHPEAPEAUIUnknown@@@Z
    virtual long GetPatternProvider(int, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternProviderImpl@CUIAWrapper@@QEAAJHPEAPEAUIUnknown@@@Z
    long GetPatternProviderImpl(int, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@CUIAWrapper@@UEAAJHPEAUtagVARIANT@@@Z
    virtual long GetPropertyValue(int, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValueImpl@CUIAWrapper@@QEAAJHPEAUtagVARIANT@@@Z
    long GetPropertyValueImpl(int, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeId@CUIAWrapper@@UEAAJPEAPEAUtagSAFEARRAY@@@Z
    virtual long GetRuntimeId(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeIdImpl@CUIAWrapper@@QEAAJPEAPEAUtagSAFEARRAY@@@Z
    long GetRuntimeIdImpl(tagSAFEARRAY * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualRelativeBoundingRectangle@CUIAWrapper@@UEAAJPEAUUiaVisualRelativeRectangle@@@Z
    virtual long GetVisualRelativeBoundingRectangle(UiaVisualRelativeRectangle *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualRelativeCenterPoint@CUIAWrapper@@UEAAJPEAUUiaVisualRelativePoint@@@Z
    virtual long GetVisualRelativeCenterPoint(UiaVisualRelativePoint *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualRelativeClickablePoint@CUIAWrapper@@UEAAJPEAUUiaVisualRelativePoint@@@Z
    virtual long GetVisualRelativeClickablePoint(UiaVisualRelativePoint *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate@CUIAWrapper@@UEAAXXZ
    virtual void Invalidate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate@CUIAWrapper@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z
    virtual long Navigate(int, IRawElementProviderFragment * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateImpl@CUIAWrapper@@QEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z
    long NavigateImpl(int, IRawElementProviderFragment * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUIAWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUIAWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@CUIAWrapper@@UEAAJXZ
    virtual long SetFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusImpl@CUIAWrapper@@QEAAJXZ
    long SetFocusImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContextMenu@CUIAWrapper@@UEAAJXZ
    virtual long ShowContextMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContextMenuImpl@CUIAWrapper@@QEAAJXZ
    long ShowContextMenuImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BoundingRectangle@CUIAWrapper@@UEAAJPEAUUiaRect@@@Z
    virtual long get_BoundingRectangle(UiaRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BoundingRectangleImpl@CUIAWrapper@@QEAAJPEAUUiaRect@@@Z
    long get_BoundingRectangleImpl(UiaRect *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FragmentRoot@CUIAWrapper@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z
    virtual long get_FragmentRoot(IRawElementProviderFragmentRoot * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostRawElementProvider@CUIAWrapper@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_HostRawElementProvider(IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProviderOptions@CUIAWrapper@@UEAAJPEAW4ProviderOptions@@@Z
    virtual long get_ProviderOptions(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUIAWrapper@@UEAA@XZ
    virtual ~CUIAWrapper();
};
