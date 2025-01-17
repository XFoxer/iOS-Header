//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _SFPBAppIconImage, _SFPBCalendarImage, _SFPBContactImage, _SFPBGraphicalFloat, _SFPBLocalImage, _SFPBMediaArtworkImage, _SFPBMonogramImage, _SFPBPointSize, _SFPBSymbolImage, _SFPBURLImage;

@protocol _SFPBImage <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _SFPBSymbolImage *symbolImage;
@property(retain, nonatomic) _SFPBCalendarImage *calendarImage;
@property(retain, nonatomic) _SFPBMediaArtworkImage *mediaArtworkImage;
@property(retain, nonatomic) _SFPBAppIconImage *appIconImage;
@property(retain, nonatomic) _SFPBLocalImage *localImage;
@property(retain, nonatomic) _SFPBMonogramImage *monogramImage;
@property(retain, nonatomic) _SFPBContactImage *contactImage;
@property(retain, nonatomic) _SFPBURLImage *urlImage;
@property(nonatomic) int type;
@property(nonatomic) int cornerRoundingStyle;
@property(nonatomic) int source;
@property(copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *keyColor;
@property(copy, nonatomic) NSString *contentType;
@property(retain, nonatomic) _SFPBPointSize *size;
@property(retain, nonatomic) _SFPBGraphicalFloat *scale;
@property(retain, nonatomic) _SFPBGraphicalFloat *cornerRadius;
@property(nonatomic) _Bool shouldCropToCircle;
@property(nonatomic) _Bool isTemplate;
@property(copy) NSData *imageData;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

