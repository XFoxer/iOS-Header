//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>
#import <ReminderKit/REMObjectIDProviding-Protocol.h>

@class REMObjectID;

@interface REMAlarmTrigger : NSObject <REMObjectIDProviding, NSSecureCoding>
{
    REMObjectID *_objectID;
}

+ (id)cdEntityName;
+ (id)objectIDWithUUID:(id)arg1;
+ (id)newObjectID;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) REMObjectID *objectID; // @synthesize objectID=_objectID;
@property(readonly, nonatomic) REMObjectID *remObjectID;
- (void)encodeWithCoder:(id)arg1;
- (id)_deepCopy;
- (_Bool)isContentEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool isTemporal;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithAlarmTrigger:(id)arg1 objectID:(id)arg2;
- (id)initWithObjectID:(id)arg1;

@end

