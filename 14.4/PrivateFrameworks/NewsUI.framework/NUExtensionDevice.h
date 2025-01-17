//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUDevice-Protocol.h>

@class NSString, UIScreen, UIViewController;

@interface NUExtensionDevice : NSObject <NUDevice>
{
    UIScreen *_screen;
    UIViewController *_hostViewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
@property(readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property(readonly, nonatomic, getter=isSplitScreen) _Bool splitScreen;
- (id)initWithScreen:(id)arg1 hostViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

