//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/_WKObservablePageState-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface WKObservablePageState : NSObject <_WKObservablePageState>
{
    RefPtr_a518021d _page;
    struct unique_ptr<WebKit::PageLoadStateObserver, std::__1::default_delete<WebKit::PageLoadStateObserver>> _observer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct __SecTrust *serverTrust;
@property(readonly, nonatomic) NSURL *unreachableURL;
@property(readonly, nonatomic) double estimatedProgress;
@property(readonly, nonatomic) _Bool _webProcessIsResponsive;
@property(readonly, nonatomic) _Bool hasOnlySecureContent;
@property(readonly, copy, nonatomic) NSURL *URL;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (void)dealloc;
- (id)initWithPage:(RefPtr_a518021d *)arg1;

@end

