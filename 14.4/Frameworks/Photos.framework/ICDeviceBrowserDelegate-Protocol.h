//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/NSObject-Protocol.h>

@class ICDevice, ICDeviceBrowser;

@protocol ICDeviceBrowserDelegate <NSObject>
- (void)deviceBrowser:(ICDeviceBrowser *)arg1 didRemoveDevice:(ICDevice *)arg2 moreGoing:(_Bool)arg3;
- (void)deviceBrowser:(ICDeviceBrowser *)arg1 didAddDevice:(ICDevice *)arg2 moreComing:(_Bool)arg3;

@optional
- (void)deviceBrowserDidResumeOperations:(ICDeviceBrowser *)arg1;
- (void)deviceBrowserDidCancelSuspendOperations:(ICDeviceBrowser *)arg1;
- (void)deviceBrowserDidSuspendOperations:(ICDeviceBrowser *)arg1;
- (void)deviceBrowserWillSuspendOperations:(ICDeviceBrowser *)arg1;
- (void)deviceBrowserDidEnumerateLocalDevices:(ICDeviceBrowser *)arg1;
- (void)deviceBrowser:(ICDeviceBrowser *)arg1 requestsSelectDevice:(ICDevice *)arg2;
- (void)deviceBrowser:(ICDeviceBrowser *)arg1 deviceDidChangeSharingState:(ICDevice *)arg2;
- (void)deviceBrowser:(ICDeviceBrowser *)arg1 deviceDidChangeName:(ICDevice *)arg2;
@end

