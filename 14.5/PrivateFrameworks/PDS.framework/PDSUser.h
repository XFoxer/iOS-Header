//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PDS/NSCopying-Protocol.h>
#import <PDS/NSSecureCoding-Protocol.h>

@class NSString;

@interface PDSUser : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _userType;
    NSString *_userID;
}

+ (_Bool)supportsSecureCoding;
+ (id)userWithDSID:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL userType; // @synthesize userType=_userType;
@property(readonly, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqualToUser:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithUserID:(id)arg1 userType:(BOOL)arg2;

@end

