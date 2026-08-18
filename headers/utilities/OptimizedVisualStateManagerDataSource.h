#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class OptimizedVisualStateManagerDataSource {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddActiveStoryboardImpl@OptimizedVisualStateManagerDataSource@@MEAAXHV?$xref_ptr@VCStoryboard@@@@W4StoryboardType@VisualStateGroupContext@@@Z
    virtual void AddActiveStoryboardImpl(int, WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddActiveTransitionImpl@OptimizedVisualStateManagerDataSource@@MEAAXHV?$xref_ptr@VCVisualTransition@@@@@Z
    virtual void AddActiveTransitionImpl(int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearActiveStoryboardsImpl@OptimizedVisualStateManagerDataSource@@MEAAXH@Z
    virtual void ClearActiveStoryboardsImpl(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearActiveTransitionsImpl@OptimizedVisualStateManagerDataSource@@MEAAXH@Z
    virtual void ClearActiveTransitionsImpl(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualStateCountImpl@OptimizedVisualStateManagerDataSource@@MEAAHXZ
    virtual int GetVisualStateCountImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualStateImpl@OptimizedVisualStateManagerDataSource@@MEAA?AV?$xref_ptr@VCDependencyObject@@@@VVisualStateToken@@@Z
    virtual WindissectOpaque GetVisualStateImpl(VisualStateToken);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualStateNameImpl@OptimizedVisualStateManagerDataSource@@MEAA?AVxstring_ptr@@VVisualStateToken@@@Z
    virtual xstring_ptr GetVisualStateNameImpl(VisualStateToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParentDeferredSetterImpl@OptimizedVisualStateManagerDataSource@@MEAAJV?$xref_ptr@VCSetter@@@@@Z
    virtual long ParentDeferredSetterImpl(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParentDeferredStateTriggerImpl@OptimizedVisualStateManagerDataSource@@MEAAJV?$xref_ptr@VCStateTriggerBase@@@@@Z
    virtual long ParentDeferredStateTriggerImpl(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveActiveStoryboardImpl@OptimizedVisualStateManagerDataSource@@MEAAXHPEAVCStoryboard@@@Z
    virtual void RemoveActiveStoryboardImpl(int, CStoryboard *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveActiveTransitionImpl@OptimizedVisualStateManagerDataSource@@MEAAXHPEAVCVisualTransition@@@Z
    virtual void RemoveActiveTransitionImpl(int, CVisualTransition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetVisualStateImpl@OptimizedVisualStateManagerDataSource@@MEAA_NPEBGPEAH1@Z
    virtual bool TryGetVisualStateImpl(unsigned short const *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetVisualStateImpl@OptimizedVisualStateManagerDataSource@@MEAA_NVVisualStateToken@@PEAH1@Z
    virtual bool TryGetVisualStateImpl(VisualStateToken, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnparentDeferredSetterImpl@OptimizedVisualStateManagerDataSource@@MEAAJV?$xref_ptr@VCSetter@@@@@Z
    virtual long UnparentDeferredSetterImpl(WindissectOpaque);
};
