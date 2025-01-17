//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _SFPBURL;

@protocol _SFPBProduct <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) _Bool buyable;
@property(copy, nonatomic) NSString *displayName;
@property(retain, nonatomic) _SFPBURL *availabilityURL;
@property(copy, nonatomic) NSString *productIdentifier;
@property(copy, nonatomic) NSString *identifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

