//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLRecordChange.h>

@class NSData, NSString;

@interface CPLFaceCropChange : CPLRecordChange
{
    NSString *_personIdentifier;
    NSData *_resourceData;
    long long _faceCropType;
    NSString *_rejectedPersonIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *rejectedPersonIdentifier; // @synthesize rejectedPersonIdentifier=_rejectedPersonIdentifier;
@property(nonatomic) long long faceCropType; // @synthesize faceCropType=_faceCropType;
@property(copy, nonatomic) NSData *resourceData; // @synthesize resourceData=_resourceData;
@property(copy, nonatomic) NSString *personIdentifier; // @synthesize personIdentifier=_personIdentifier;
- (id)propertiesDescription;
- (_Bool)validateChangeWithError:(id *)arg1;
- (_Bool)validateFullRecord;
- (void)setRelatedIdentifier:(id)arg1;
- (id)relatedIdentifier;
- (void)setPersonScopedIdentifier:(id)arg1;
- (id)personScopedIdentifier;
- (_Bool)supportsDirectDeletion;
- (_Bool)supportsDeletion;

@end

