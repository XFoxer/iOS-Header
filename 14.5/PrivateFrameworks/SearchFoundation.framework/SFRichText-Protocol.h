//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFText-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@protocol SFRichText <SFText>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSArray *formattedTextPieces;
@property(copy, nonatomic) NSArray *icons;
@property(copy, nonatomic) NSString *contentAdvisory;
@property(nonatomic) double starRating;
@end

