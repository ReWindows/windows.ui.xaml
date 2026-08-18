#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 28 member(s).
class DCompPropertyChangedListener {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DCompPropertyChangedListener@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachToHandOffVisual@DCompPropertyChangedListener@@QEAAXPEAUIInspectable@@@Z
    void AttachToHandOffVisual(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachToPrependVisual@DCompPropertyChangedListener@@QEAAXPEAUIInspectable@@@Z
    void AttachToPrependVisual(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachToWUCClip@DCompPropertyChangedListener@@QEAAXPEAUIInspectable@@@Z
    void AttachToWUCClip(IInspectable *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DCompPropertyChangedListener@@QEAA@PEAVCUIElement@@@Z
    DCompPropertyChangedListener(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromHandOffVisual@DCompPropertyChangedListener@@QEAAXXZ
    void DetachFromHandOffVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromPrependVisual@DCompPropertyChangedListener@@QEAAXXZ
    void DetachFromPrependVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromWUCClip@DCompPropertyChangedListener@@QEAAXXZ
    void DetachFromWUCClip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceUpdateFromLayoutOffset@DCompPropertyChangedListener@@QEAAXXZ
    void ForceUpdateFromLayoutOffset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyBooleanPropertyChanged@DCompPropertyChangedListener@@UEAAJPEAUIInspectable@@W4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@_N@Z
    virtual long NotifyBooleanPropertyChanged(IInspectable *, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyColorPropertyChanged@DCompPropertyChangedListener@@UEAAJPEAUIInspectable@@W4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@U_D3DCOLORVALUE@@@Z
    virtual long NotifyColorPropertyChanged(IInspectable *, int, _D3DCOLORVALUE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyMatrix3x2PropertyChanged@DCompPropertyChangedListener@@UEAAJPEAUIInspectable@@W4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@UD2D_MATRIX_3X2_F@@@Z
    virtual long NotifyMatrix3x2PropertyChanged(IInspectable *, int, D2D_MATRIX_3X2_F);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyMatrix4x4PropertyChanged@DCompPropertyChangedListener@@UEAAJPEAUIInspectable@@W4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@UD2D_MATRIX_4X4_F@@@Z
    virtual long NotifyMatrix4x4PropertyChanged(IInspectable *, int, D2D_MATRIX_4X4_F);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyReferencePropertyChanged@DCompPropertyChangedListener@@UEAAJPEAUIInspectable@@W4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@@Z
    virtual long NotifyReferencePropertyChanged(IInspectable *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySinglePropertyChanged@DCompPropertyChangedListener@@UEAAJPEAUIInspectable@@W4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@M@Z
    virtual long NotifySinglePropertyChanged(IInspectable *, int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyVector2PropertyChanged@DCompPropertyChangedListener@@UEAAJPEAUIInspectable@@W4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@UD2D_VECTOR_2F@@@Z
    virtual long NotifyVector2PropertyChanged(IInspectable *, int, D2D_VECTOR_2F);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyVector3PropertyChanged@DCompPropertyChangedListener@@UEAAJPEAUIInspectable@@W4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@UD2D_VECTOR_3F@@@Z
    virtual long NotifyVector3PropertyChanged(IInspectable *, int, D2D_VECTOR_3F);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyVector4PropertyChanged@DCompPropertyChangedListener@@UEAAJPEAUIInspectable@@W4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@UD2D_VECTOR_4F@@@Z
    virtual long NotifyVector4PropertyChanged(IInspectable *, int, D2D_VECTOR_4F);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DCompPropertyChangedListener@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DCompPropertyChangedListener@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DCompPropertyChangedListener@@UEAA@XZ
    virtual ~DCompPropertyChangedListener();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInsetClipFromVisual@DCompPropertyChangedListener@@AEAA?AV?$ComPtr@UIInsetClip@Composition@UI@Windows@@@WRL@Microsoft@@PEAUIInspectable@@@Z
    WindissectOpaque GetInsetClipFromVisual(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisualClipChanged@DCompPropertyChangedListener@@AEAAXPEAUIInspectable@@PEAVCUIElement@@@Z
    void OnVisualClipChanged(IInspectable *, CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateClip@DCompPropertyChangedListener@@AEAAXPEAVCUIElement@@@Z
    void UpdateClip(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOverallCenterPoint@DCompPropertyChangedListener@@AEAAJPEAVCUIElement@@@Z
    long UpdateOverallCenterPoint(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOverallOffset@DCompPropertyChangedListener@@AEAAJPEAVCUIElement@@@Z
    long UpdateOverallOffset(CUIElement *);
};
