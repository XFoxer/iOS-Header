//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, StorageDebugCollection, StorageDebugCollectionElement;

__attribute__((visibility("hidden")))
@interface StorageDebugDataSource : NSObject
{
    NSArray *_selectableCollections;
    StorageDebugCollection *_selectedCollection;
    CDUnknownBlockType _selectedCollectionDidChange;
    CDUnknownBlockType _selectableElementsDidChange;
    StorageDebugCollectionElement *_selectedElement;
    CDUnknownBlockType _selectedElementDidChange;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType selectedElementDidChange; // @synthesize selectedElementDidChange=_selectedElementDidChange;
@property(readonly, nonatomic) StorageDebugCollectionElement *selectedElement; // @synthesize selectedElement=_selectedElement;
@property(copy, nonatomic) CDUnknownBlockType selectableElementsDidChange; // @synthesize selectableElementsDidChange=_selectableElementsDidChange;
@property(copy, nonatomic) CDUnknownBlockType selectedCollectionDidChange; // @synthesize selectedCollectionDidChange=_selectedCollectionDidChange;
@property(readonly, nonatomic) StorageDebugCollection *selectedCollection; // @synthesize selectedCollection=_selectedCollection;
@property(readonly, nonatomic) NSArray *selectableCollections; // @synthesize selectableCollections=_selectableCollections;
@property(readonly, nonatomic) NSArray *selectableElements;
- (void)_selectableElementsDidChangeForCollection:(id)arg1;
- (void)_didSelectElement:(id)arg1 fromCollection:(id)arg2;
- (void)_didSelectCollection:(id)arg1;
- (id)init;

@end

