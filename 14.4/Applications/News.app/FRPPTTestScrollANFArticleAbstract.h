//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRPPTTest-Protocol.h"

@class NSString;

@interface FRPPTTestScrollANFArticleAbstract : NSObject <FRPPTTest>
{
    NSString *_articleID;
}

+ (id)testName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
- (id)setup;
- (id)initWithArticleID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

