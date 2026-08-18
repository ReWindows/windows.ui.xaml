#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
class PropertySetListener {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PropertySetListener@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyBooleanPropertyChanged@PropertySetListener@@UEAAJPEAUIInspectable@@W4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@_N@Z
    virtual long NotifyBooleanPropertyChanged(IInspectable *, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyColorPropertyChanged@PropertySetListener@@UEAAJPEAUIInspectable@@W4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@U_D3DCOLORVALUE@@@Z
    virtual long NotifyColorPropertyChanged(IInspectable *, int, _D3DCOLORVALUE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyMatrix3x2PropertyChanged@PropertySetListener@@UEAAJPEAUIInspectable@@W4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@UD2D_MATRIX_3X2_F@@@Z
    virtual long NotifyMatrix3x2PropertyChanged(IInspectable *, int, D2D_MATRIX_3X2_F);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyMatrix4x4PropertyChanged@PropertySetListener@@UEAAJPEAUIInspectable@@W4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@UD2D_MATRIX_4X4_F@@@Z
    virtual long NotifyMatrix4x4PropertyChanged(IInspectable *, int, D2D_MATRIX_4X4_F);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyReferencePropertyChanged@PropertySetListener@@UEAAJPEAUIInspectable@@W4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@@Z
    virtual long NotifyReferencePropertyChanged(IInspectable *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySinglePropertyChanged@PropertySetListener@@UEAAJPEAUIInspectable@@W4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@M@Z
    virtual long NotifySinglePropertyChanged(IInspectable *, int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyVector2PropertyChanged@PropertySetListener@@UEAAJPEAUIInspectable@@W4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@UD2D_VECTOR_2F@@@Z
    virtual long NotifyVector2PropertyChanged(IInspectable *, int, D2D_VECTOR_2F);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyVector3PropertyChanged@PropertySetListener@@UEAAJPEAUIInspectable@@W4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@UD2D_VECTOR_3F@@@Z
    virtual long NotifyVector3PropertyChanged(IInspectable *, int, D2D_VECTOR_3F);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyVector4PropertyChanged@PropertySetListener@@UEAAJPEAUIInspectable@@W4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@UD2D_VECTOR_4F@@@Z
    virtual long NotifyVector4PropertyChanged(IInspectable *, int, D2D_VECTOR_4F);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationCompleted@PropertySetListener@@UEAAXPEAUICompositionObject@Composition@UI@Windows@@W4KnownPropertyIndex@@@Z
    virtual void OnAnimationCompleted(::Windows::UI::Composition::ICompositionObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationStarted@PropertySetListener@@UEAAXPEAUICompositionObject@Composition@UI@Windows@@W4KnownPropertyIndex@@@Z
    virtual void OnAnimationStarted(::Windows::UI::Composition::ICompositionObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFacadePropertyInserted@PropertySetListener@@UEAAXW4KnownPropertyIndex@@@Z
    virtual void OnFacadePropertyInserted(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateAnimatedPropertyWithCurrentValue@PropertySetListener@@QEAAXW4KnownPropertyIndex@@@Z
    void PopulateAnimatedPropertyWithCurrentValue(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PropertySetListener@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PropertySetListener@@UEAAKXZ
    virtual unsigned long Release();
};
