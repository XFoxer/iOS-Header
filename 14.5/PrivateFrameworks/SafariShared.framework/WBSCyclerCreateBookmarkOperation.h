//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCyclerBookmarkOperation-Protocol.h>

@class NSString;

@interface WBSCyclerCreateBookmarkOperation : NSObject <WBSCyclerBookmarkOperation>
{
}

- (void)_createRandomLeafWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_createRandomListWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_randomListWithContext:(id)arg1;
- (void)executeWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

