//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Messages/NSCopying-Protocol.h>
#import <Messages/NSSecureCoding-Protocol.h>

@class LPLinkMetadata, NSURL;

@interface MSRichLink : NSObject <NSCopying, NSSecureCoding>
{
    LPLinkMetadata *_linkMetadata;
    NSURL *_URL;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) LPLinkMetadata *_linkMetadata; // @synthesize _linkMetadata;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;

@end

