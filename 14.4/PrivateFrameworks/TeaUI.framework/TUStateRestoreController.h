//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TeaUI/TUStateRestoreControllerType-Protocol.h>

@class MISSING_TYPE;

@interface TUStateRestoreController : NSObject <TUStateRestoreControllerType>
{
    MISSING_TYPE *timeWindow;
    MISSING_TYPE *store;
    MISSING_TYPE *anyNavigationHappenAfterBackground;
    MISSING_TYPE *isStateRestorationFeatureEnabled;
    MISSING_TYPE *hasStateDiscarded;
}

- (void).cxx_destruct;
- (id)init;
- (void)navigationDidHappen;
- (void)markStateDiscarded;
- (void)sceneDidEnterBackground;
- (id)initWithTimeWindow:(double)arg1 isRunningPPT:(_Bool)arg2;
- (id)initWithTimeWindow:(double)arg1 isStateRestorationEnabled:(_Bool)arg2;
@property(nonatomic) _Bool hasStateDiscarded; // @synthesize hasStateDiscarded;
@property(nonatomic, readonly) _Bool isStateRestorationAllowed;
@property(nonatomic, readonly) _Bool isStateRestorationFeatureEnabled; // @synthesize isStateRestorationFeatureEnabled;

@end

