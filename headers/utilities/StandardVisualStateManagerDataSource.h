#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
class StandardVisualStateManagerDataSource {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddActiveStoryboardImpl@StandardVisualStateManagerDataSource@@MEAAXHV?$xref_ptr@VCStoryboard@@@@W4StoryboardType@VisualStateGroupContext@@@Z
    virtual void AddActiveStoryboardImpl(int, WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddActiveTransitionImpl@StandardVisualStateManagerDataSource@@MEAAXHV?$xref_ptr@VCVisualTransition@@@@@Z
    virtual void AddActiveTransitionImpl(int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearActiveStoryboardsImpl@StandardVisualStateManagerDataSource@@MEAAXH@Z
    virtual void ClearActiveStoryboardsImpl(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearActiveTransitionsImpl@StandardVisualStateManagerDataSource@@MEAAXH@Z
    virtual void ClearActiveTransitionsImpl(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualStateCountImpl@StandardVisualStateManagerDataSource@@MEAAHXZ
    virtual int GetVisualStateCountImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualStateImpl@StandardVisualStateManagerDataSource@@MEAA?AV?$xref_ptr@VCDependencyObject@@@@VVisualStateToken@@@Z
    virtual WindissectOpaque GetVisualStateImpl(VisualStateToken);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualStateNameImpl@StandardVisualStateManagerDataSource@@MEAA?AVxstring_ptr@@VVisualStateToken@@@Z
    virtual xstring_ptr GetVisualStateNameImpl(VisualStateToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeginTransitionToState@StandardVisualStateManagerDataSource@@MEAAJHH@Z
    virtual long OnBeginTransitionToState(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompleteTransitionToState@StandardVisualStateManagerDataSource@@MEAAJH@Z
    virtual long OnCompleteTransitionToState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParentDeferredSetterImpl@StandardVisualStateManagerDataSource@@MEAAJV?$xref_ptr@VCSetter@@@@@Z
    virtual long ParentDeferredSetterImpl(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParentDeferredStateTriggerImpl@StandardVisualStateManagerDataSource@@MEAAJV?$xref_ptr@VCStateTriggerBase@@@@@Z
    virtual long ParentDeferredStateTriggerImpl(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveActiveStoryboardImpl@StandardVisualStateManagerDataSource@@MEAAXHPEAVCStoryboard@@@Z
    virtual void RemoveActiveStoryboardImpl(int, CStoryboard *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveActiveTransitionImpl@StandardVisualStateManagerDataSource@@MEAAXHPEAVCVisualTransition@@@Z
    virtual void RemoveActiveTransitionImpl(int, CVisualTransition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetVisualStateImpl@StandardVisualStateManagerDataSource@@MEAA_NVVisualStateToken@@PEAH1@Z
    virtual bool TryGetVisualStateImpl(VisualStateToken, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetVisualStateImpl@StandardVisualStateManagerDataSource@@MEAA_NPEBGPEAH1@Z
    virtual bool TryGetVisualStateImpl(unsigned short const *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnparentDeferredSetterImpl@StandardVisualStateManagerDataSource@@MEAAJV?$xref_ptr@VCSetter@@@@@Z
    virtual long UnparentDeferredSetterImpl(WindissectOpaque);
};
