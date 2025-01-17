//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VisualVoicemail/NSCopying-Protocol.h>
#import <VisualVoicemail/NSSecureCoding-Protocol.h>

@interface VMVoicemailCapabilities : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _transcriptionEnabled;
}

+ (id)unarchivedObjectFromData:(id)arg1 error:(id *)arg2;
+ (id)unarchivedObjectClasses;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic, getter=isTranscriptionEnabled) _Bool transcriptionEnabled; // @synthesize transcriptionEnabled=_transcriptionEnabled;
- (id)archivedDataWithError:(id *)arg1;
- (_Bool)isEqualToCapabilities:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapabilities:(id)arg1;
- (id)initWithTranscriptionEnabled:(_Bool)arg1;
- (id)init;

@end

