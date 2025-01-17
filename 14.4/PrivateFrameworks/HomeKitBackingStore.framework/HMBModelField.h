//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/NSCopying-Protocol.h>
#import <HomeKitBackingStore/NSMutableCopying-Protocol.h>

@class HMFVersion, NSString;

@interface HMBModelField : HMFObject <NSCopying, NSMutableCopying>
{
    _Bool _encrypted;
    _Bool _excludeFromCloudStorage;
    _Bool _optional;
    _Bool _conformsToHMBModelNativeCKWrapper;
    Class _classObj;
    NSString *_externalRecordField;
    unsigned long long _loggingVisibility;
    id _defaultValue;
    HMFVersion *_readonlyVersion;
    HMFVersion *_unavailableVersion;
    CDUnknownBlockType _encodeBlock;
    CDUnknownBlockType _decodeBlock;
    CDUnknownBlockType _descriptionBlock;
}

+ (id)deprecatedField;
+ (id)optionalFieldWithClass:(Class)arg1 options:(id)arg2;
+ (id)fieldWithClass:(Class)arg1 options:(id)arg2;
+ (id)optionalFieldWithClass:(Class)arg1;
+ (id)fieldWithClass:(Class)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType descriptionBlock; // @synthesize descriptionBlock=_descriptionBlock;
@property(copy, nonatomic) CDUnknownBlockType decodeBlock; // @synthesize decodeBlock=_decodeBlock;
@property(copy, nonatomic) CDUnknownBlockType encodeBlock; // @synthesize encodeBlock=_encodeBlock;
@property(nonatomic) _Bool conformsToHMBModelNativeCKWrapper; // @synthesize conformsToHMBModelNativeCKWrapper=_conformsToHMBModelNativeCKWrapper;
@property(copy, nonatomic) HMFVersion *unavailableVersion; // @synthesize unavailableVersion=_unavailableVersion;
@property(copy, nonatomic) HMFVersion *readonlyVersion; // @synthesize readonlyVersion=_readonlyVersion;
@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) unsigned long long loggingVisibility; // @synthesize loggingVisibility=_loggingVisibility;
@property(nonatomic, getter=isOptional) _Bool optional; // @synthesize optional=_optional;
@property(nonatomic) _Bool excludeFromCloudStorage; // @synthesize excludeFromCloudStorage=_excludeFromCloudStorage;
@property(retain, nonatomic) NSString *externalRecordField; // @synthesize externalRecordField=_externalRecordField;
@property(nonatomic) _Bool encrypted; // @synthesize encrypted=_encrypted;
@property(readonly, nonatomic) Class classObj; // @synthesize classObj=_classObj;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionForEncodedQueryableValue:(id)arg1;
- (id)decodeQueryableValue:(id)arg1;
- (id)encodeQueryableValue:(id)arg1;
- (id)description;
- (id)initWithClass:(Class)arg1 options:(id)arg2;
- (id)initWithClass:(Class)arg1;

@end

