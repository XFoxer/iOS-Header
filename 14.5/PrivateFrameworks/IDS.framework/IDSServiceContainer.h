//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSServiceMonitor, NSMutableSet;

@interface IDSServiceContainer : NSObject
{
    IDSServiceMonitor *_monitor;
    NSMutableSet *_listeners;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableSet *listeners; // @synthesize listeners=_listeners;
@property(retain, nonatomic) IDSServiceMonitor *monitor; // @synthesize monitor=_monitor;
- (_Bool)removeListenerID:(id)arg1;
- (_Bool)addListenerID:(id)arg1;
- (_Bool)hasListenerID:(id)arg1;
- (id)initWithService:(id)arg1;

@end

