//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/AXAssetControllerObserver-Protocol.h>

@class AXAssetController, NSString, NSURL;

@interface AXMImageCaptionModelAssetManager : NSObject <AXAssetControllerObserver>
{
    struct os_unfair_lock_s _lock;
    _Bool _didTryWaitingForAssetLookup;
    AXAssetController *_assetController;
    NSURL *_modelURL;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *modelURL; // @synthesize modelURL=_modelURL;
- (void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(_Bool)arg3 error:(id)arg4;
- (void)_performWithLock:(CDUnknownBlockType)arg1;
- (id)infoForModelAtURL:(id)arg1;
- (id)modelURLWithTimeout:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

