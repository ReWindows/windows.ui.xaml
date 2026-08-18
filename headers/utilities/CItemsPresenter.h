#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class CItemsPresenter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddChild@CItemsPresenter@@UEAAJPEAVCUIElement@@@Z
    virtual long AddChild(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanHaveChildren@CItemsPresenter@@UEBA_NXZ
    virtual bool CanHaveChildren() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CItemsPresenter@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsLayoutElement@CItemsPresenter@@UEBA_NXZ
    virtual bool GetIsLayoutElement() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPadding@CItemsPresenter@@UEBA?AUXRECTF_RB@@XZ
    virtual XRECTF_RB GetPadding() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CItemsPresenter@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CItemsPresenter@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CItemsPresenter@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTemplate@CItemsPresenter@@MEAAJAEA_N@Z
    virtual long ApplyTemplate(bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CItemsPresenter@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CItemsPresenter@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@CItemsPresenter@@MEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CItemsPresenter@@MEAA@XZ
    virtual ~CItemsPresenter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddItemsHost@CItemsPresenter@@AEAAJPEAVCItemsControl@@@Z
    long AddItemsHost(CItemsControl *);
};
