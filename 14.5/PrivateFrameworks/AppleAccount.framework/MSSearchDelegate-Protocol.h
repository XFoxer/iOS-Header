//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/NSObject-Protocol.h>

@class MSSearch, NSArray, NSError;

@protocol MSSearchDelegate <NSObject>

@optional
- (void)search:(MSSearch *)arg1 didFinishWithError:(NSError *)arg2;
- (_Bool)search:(MSSearch *)arg1 didFindResults:(NSArray *)arg2;
@end

