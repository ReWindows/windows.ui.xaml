#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CustomWriterRuntimeObjectCreator {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLineInfoForToken@CustomWriterRuntimeObjectCreator@@QEAA?AVXamlLineInfo@@VStreamOffsetToken@@@Z
    XamlLineInfo GetLineInfoForToken(StreamOffsetToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterTemplateNameScopeEntriesIfNeeded@CustomWriterRuntimeObjectCreator@@QEAAJPEAVCDependencyObject@@@Z
    long RegisterTemplateNameScopeEntriesIfNeeded(CDependencyObject *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CustomWriterRuntimeObjectCreator@@QEAA@XZ
    ~CustomWriterRuntimeObjectCreator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildObjectWriterSettings@CustomWriterRuntimeObjectCreator@@AEAAJPEAVObjectWriterSettings@@@Z
    long BuildObjectWriterSettings(ObjectWriterSettings *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureObjectWriter@CustomWriterRuntimeObjectCreator@@AEAAJXZ
    long EnsureObjectWriter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreReaderIndex@CustomWriterRuntimeObjectCreator@@AEAAXXZ
    void RestoreReaderIndex();
};
