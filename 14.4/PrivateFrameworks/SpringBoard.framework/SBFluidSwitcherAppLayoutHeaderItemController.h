//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSInvalidatable-Protocol.h>
#import <SpringBoard/SBDeviceApplicationSceneHandleObserver-Protocol.h>
#import <SpringBoard/SBIconObserver-Protocol.h>

@class FBSDisplayIdentity, NSArray, NSMutableDictionary, NSMutableSet, NSString, SBAppLayout;

@interface SBFluidSwitcherAppLayoutHeaderItemController : NSObject <SBDeviceApplicationSceneHandleObserver, SBIconObserver, BSInvalidatable>
{
    SBAppLayout *_appLayout;
    FBSDisplayIdentity *_displayIdentity;
    NSArray *_displayItems;
    NSMutableDictionary *_displayItemToIcon;
    NSMutableDictionary *_displayItemToLoadedImage;
    NSMutableDictionary *_displayItemToSceneHandle;
    NSMutableSet *_downloadingIcons;
    _Bool _invalidated;
    _Bool _useDarkLabels;
    CDUnknownBlockType _updateHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(nonatomic, getter=isUsingDarkLabels) _Bool useDarkLabels; // @synthesize useDarkLabels=_useDarkLabels;
- (void)_handleDidReplaceDownloadingIconNotification:(id)arg1;
- (void)_stopTrackingDownloadingIcon:(id)arg1;
- (void)_startTrackingDownloadingIcon:(id)arg1;
- (void)_updateDisplayItemIcons;
- (void)_performUpdateHandler;
- (void)_loadIconForDisplayItem:(id)arg1;
- (id)_iconForDisplayItem:(id)arg1;
- (id)_computeHeaderItems;
- (void)iconImageDidUpdate:(id)arg1;
- (void)sceneHandle:(id)arg1 didChangeSceneTitle:(id)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)initWithAppLayout:(id)arg1 applicationSceneHandleProvider:(id)arg2 displayIdentity:(id)arg3 showCanvasTitles:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

