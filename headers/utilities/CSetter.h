#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 21 member(s).
class CSetter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSetter@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CSetter@@QEAAJW4KnownTypeIndex@@PEAW4KnownPropertyIndex@@@Z
    long GetProperty(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSetterValue@CSetter@@QEAAJPEAVCValue@@@Z
    long GetSetterValue(CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTemplatedParent@CSetter@@UEAAPEAVCDependencyObject@@XZ
    virtual CDependencyObject * GetTemplatedParent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CSetter@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CSetter@@UEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetValue(CDependencyProperty const *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStyleSetter@CSetter@@QEBA_NXZ
    bool IsStyleSetter() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChangedCore@CSetter@@UEAAJW4Theme@Theming@@_N@Z
    virtual long NotifyThemeChangedCore(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CSetter@@UEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CSetter@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveValueUsingProperty@CSetter@@QEAAJPEBVCDependencyProperty@@@Z
    long ResolveValueUsingProperty(CDependencyProperty const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CSetter@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToValueChangedNotification@CSetter@@QEAAXQEAVCStyle@@@Z
    void SubscribeToValueChangedNotification(CStyle * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromValueChangedNotification@CSetter@@QEAAXQEAVCStyle@@@Z
    void UnsubscribeFromValueChangedNotification(CStyle * const);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTemplatedParentImpl@CSetter@@MEAAXPEAVCDependencyObject@@@Z
    virtual void SetTemplatedParentImpl(CDependencyObject *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetterPropertyChanged@CSetter@@AEAAJAEBUPropertyChangedParams@@@Z
    long OnSetterPropertyChanged(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetterTargetChanged@CSetter@@AEAAJAEBUPropertyChangedParams@@@Z
    long OnSetterTargetChanged(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetterValueChanged@CSetter@@AEAAJAEBUPropertyChangedParams@@@Z
    long OnSetterValueChanged(PropertyChangedParams const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSetter@@EEAA@XZ
    virtual ~CSetter();
};
