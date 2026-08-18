#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 19 member(s).
class CContentControl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CContentControl@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Content@CContentControl@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long Content(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDefaultTemplate@CContentControl@@SAJPEAPEAVCControlTemplate@@PEAVCDependencyObject@@AEBVxstring_ptr@@@Z
    static long CreateDefaultTemplate(CControlTemplate * *, CDependencyObject *, xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDefaultVisuals@CContentControl@@SAJPEAV1@PEAVCDependencyObject@@AEBVxstring_ptr@@@Z
    static long CreateDefaultVisuals(CContentControl *, CDependencyObject *, xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferredContentRemovalLogic@CContentControl@@QEAAJPEAVCDependencyObject@@@Z
    long DeferredContentRemovalLogic(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentTemplateRoot@CContentControl@@QEBA?AV?$xref_ptr@VCUIElement@@@@XZ
    WindissectOpaque GetContentTemplateRoot() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CContentControl@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGridViewItemChrome@CContentControl@@QEAAJPEAVCListViewBaseItemChrome@@@Z
    long SetGridViewItemChrome(CListViewBaseItemChrome *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CContentControl@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTemplate@CContentControl@@MEAAJAEA_N@Z
    virtual long ApplyTemplate(bool &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContentControl@@IEAA@PEAVCCoreServices@@@Z
    CContentControl(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareForCircularReference@CContentControl@@MEAA_NPEAVCFrameworkElement@@@Z
    virtual bool CompareForCircularReference(CFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CContentControl@@MEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CContentControl@@MEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContentControl@@MEAA@XZ
    virtual ~CContentControl();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextBlockChildOfDefaultTemplate@CContentControl@@AEAA?AV?$xref_ptr@VCTextBlock@@@@_N@Z
    WindissectOpaque GetTextBlockChildOfDefaultTemplate(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate@CContentControl@@AEAAJI@Z
    long Invalidate(unsigned int);
};
