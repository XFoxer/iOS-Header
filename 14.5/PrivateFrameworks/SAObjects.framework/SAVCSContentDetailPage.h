//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAAceView.h>

@class NSString, NSURL, SAUIImageResource;

@interface SAVCSContentDetailPage : SAAceView
{
}

+ (id)contentDetailPageWithDictionary:(id)arg1 context:(id)arg2;
+ (id)contentDetailPage;
@property(copy, nonatomic) NSURL *utsSearchUrl;
@property(copy, nonatomic) NSString *utsId;
@property(nonatomic) _Bool userDriven;
@property(copy, nonatomic) NSURL *url;
@property(copy, nonatomic) NSString *showId;
@property(copy, nonatomic) NSString *seasonId;
@property(copy, nonatomic) NSString *loadingText;
@property(nonatomic) _Bool isEvod;
@property(copy, nonatomic) NSString *imagesJsonContentPayload;
@property(retain, nonatomic) SAUIImageResource *image;
@property(copy, nonatomic) NSString *contentType;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

