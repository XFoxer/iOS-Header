//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMCoreLite/FMFileContainer-Protocol.h>

@class NSString, NSURL;

@interface FMSharedFileContainer : NSObject <FMFileContainer>
{
    NSURL *_url;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)groupContainerURLWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

