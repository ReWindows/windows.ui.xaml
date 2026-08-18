#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 24 member(s).
class CComponentHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanHaveChildren@CComponentHost@@UEBA_NXZ
    virtual bool CanHaveChildren() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureComponentCreated@CComponentHost@@QEAAJXZ
    long EnsureComponentCreated();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsLayoutElement@CComponentHost@@UEBA_NXZ
    virtual bool GetIsLayoutElement() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CComponentHost@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasComponentBeenCreated@CComponentHost@@UEAA_NXZ
    virtual bool HasComponentBeenCreated();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDescendantOfOrSelf@CComponentHost@@UEAA_NPEAVCUIElement@@@Z
    virtual bool IsDescendantOfOrSelf(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocusable@CComponentHost@@UEAAIXZ
    virtual unsigned int IsFocusable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocused@CComponentHost@@UEAAIXZ
    virtual unsigned int IsFocused();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManagedPeerCreated@CComponentHost@@UEAAJII@Z
    virtual long OnManagedPeerCreated(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNoMoreTabStopsInComponent@CComponentHost@@QEAAJIPEA_N@Z
    long OnNoMoreTabStopsInComponent(unsigned int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CComponentHost@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFocusState@CComponentHost@@QEAAJW4FocusState@DirectUI@@_N1@Z
    long UpdateFocusState(int, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CComponentHost@@UEAA@XZ
    virtual ~CComponentHost();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CComponentHost@@IEAA@PEAVCCoreServices@@@Z
    CComponentHost(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateComponent@CComponentHost@@MEAAJXZ
    virtual long CreateComponent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyComponent@CComponentHost@@MEAAJI@Z
    virtual long DestroyComponent(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsComponentHostingEnabled@CComponentHost@@IEAA_NXZ
    bool IsComponentHostingEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterComponentHost@CComponentHost@@IEAAJXZ
    long RegisterComponentHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestTick@CComponentHost@@IEAAJXZ
    long RequestTick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterComponentHost@CComponentHost@@IEAAJXZ
    long UnregisterComponentHost();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateComponentHostingDisabledUI@CComponentHost@@AEAAJXZ
    long GenerateComponentHostingDisabledUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CComponentHost@@EEAAJXZ
    virtual long InitInstance();
};
