//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SSMutableURLRequestProperties, SSURLRequestProperties, UIImage;

@interface SUPageSection : NSObject
{
    double _expirationTime;
    NSString *_identifier;
    UIImage *_image;
    long long _structuredPageType;
    NSString *_title;
    SSMutableURLRequestProperties *_urlRequestProperties;
    id _userInfo;
}

@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) SSURLRequestProperties *URLRequestProperties; // @synthesize URLRequestProperties=_urlRequestProperties;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long structuredPageType; // @synthesize structuredPageType=_structuredPageType;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) double expirationTime; // @synthesize expirationTime=_expirationTime;
- (void)_setURLBagKey:(id)arg1;
- (void)_setURL:(id)arg1;
@property(readonly, nonatomic) id segmentedControlItem;
- (_Bool)loadFromDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end

