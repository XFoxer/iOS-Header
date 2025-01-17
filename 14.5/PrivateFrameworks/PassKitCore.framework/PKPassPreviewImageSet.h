//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassPreviewImageSet : PKPassImageSet
{
    PKImage *_iconImage;
    PKImage *_notificationIconImage;
    PKImage *_rawIcon;
}

+ (_Bool)supportsSecureCoding;
+ (unsigned int)currentVersion;
+ (id)archiveName;
+ (long long)imageSetType;
- (void).cxx_destruct;
@property(retain, nonatomic) PKImage *rawIcon; // @synthesize rawIcon=_rawIcon;
@property(retain, nonatomic) PKImage *notificationIconImage; // @synthesize notificationIconImage=_notificationIconImage;
@property(retain, nonatomic) PKImage *iconImage; // @synthesize iconImage=_iconImage;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)preheatImages;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;

@end

