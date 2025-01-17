//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSSet, NSString, PSSearchResults;
@protocol PSSearchOperationDelegate;

@interface PSSearchOperation : NSOperation
{
    _Bool _newQuery;
    NSString *_query;
    NSSet *_rootEntries;
    PSSearchResults *_currentResults;
    id <PSSearchOperationDelegate> _delegate;
}

+ (struct __CFStringTokenizer *)_wordBoundaryTokenizer;
- (void).cxx_destruct;
@property __weak id <PSSearchOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isNewQuery) _Bool newQuery; // @synthesize newQuery=_newQuery;
@property(readonly, copy) PSSearchResults *currentResults; // @synthesize currentResults=_currentResults;
@property(readonly, copy, nonatomic) NSSet *rootEntries; // @synthesize rootEntries=_rootEntries;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
- (id)debugDescription;
- (id)description;
- (id)_filterEntriesMatchingQuery:(id)arg1 forQuery:(id)arg2;
- (_Bool)_systemLanguageHasContinuousScript;
- (_Bool)_searchEntries:(id)arg1 forQuery:(id)arg2;
- (void)main;
- (void)_didCancel;
- (void)dealloc;
- (id)initWithSearchQuery:(id)arg1 rootEntries:(id)arg2;

@end

