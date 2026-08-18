#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class VisualStateGroupCollectionCustomWriter {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCustomWriterFinished@VisualStateGroupCollectionCustomWriter@@UEBA_NXZ
    virtual bool IsCustomWriterFinished() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndConditionalScope@VisualStateGroupCollectionCustomWriter@@UEAAJPEA_N@Z
    virtual long WriteEndConditionalScope(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndMember@VisualStateGroupCollectionCustomWriter@@UEAAJPEA_N@Z
    virtual long WriteEndMember(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndObject@VisualStateGroupCollectionCustomWriter@@UEAAJPEA_N@Z
    virtual long WriteEndObject(bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VisualStateGroupCollectionCustomWriter@@UEAA@XZ
    virtual ~VisualStateGroupCollectionCustomWriter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesEqual@VisualStateGroupCollectionCustomWriter@@CA_NPEAVXamlProperty@@W4XamlDirectives@@@Z
    static bool DoesEqual(XamlProperty *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteUnexpectedTokenDebug@VisualStateGroupCollectionCustomWriter@@CAJPEAVXamlProperty@@@Z
    static long WriteUnexpectedTokenDebug(XamlProperty *);
};
