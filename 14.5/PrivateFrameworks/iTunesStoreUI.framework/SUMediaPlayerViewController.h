//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <iTunesStoreUI/AVPlayerViewControllerDelegate-Protocol.h>
#import <iTunesStoreUI/ISOperationDelegate-Protocol.h>

@class AVPlayerViewController, NSMutableArray, NSString, SUClientInterface, SUMediaPlayerItem, UIView;

@interface SUMediaPlayerViewController : UIViewController <AVPlayerViewControllerDelegate, ISOperationDelegate>
{
    UIView *_backgroundContainerView;
    SUClientInterface *_clientInterface;
    SUMediaPlayerItem *_mediaItem;
    NSMutableArray *_operations;
    long long _playerState;
    AVPlayerViewController *_playerViewController;
}

+ (_Bool)_URLIsITunesU:(id)arg1;
+ (void)_sendPingRequestsForURLs:(id)arg1 URLBagKey:(id)arg2 playerItem:(id)arg3;
+ (void)sendPlaybackPingRequestsForMediaPlayerItem:(id)arg1;
+ (void)sendDownloadPingRequestsForMediaPlayerItem:(id)arg1;
@property(retain, nonatomic) AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(readonly, copy, nonatomic) SUMediaPlayerItem *mediaPlayerItem; // @synthesize mediaPlayerItem=_mediaItem;
@property(retain, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
- (void)_showBackgroundImage:(id)arg1;
- (void)_setIsActivePlayer:(_Bool)arg1;
- (void)_prepareMediaItem;
- (void)_loadBackgroundImage;
- (void)_enqueueOperation:(id)arg1;
- (void)_dequeueOperation:(id)arg1;
- (id)_backgroundContainerView;
- (void)_playbackFinishedNotification:(id)arg1;
- (void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)operationFinished:(id)arg1;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)copyScriptViewController;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithMediaPlayerItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

