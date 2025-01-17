//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBGraphicalFloat, _SFPBImage, _SFPBLatLng, _SFPBPunchout, _SFPBURL;

@protocol _SFPBActionItem <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int directionsMode;
@property(nonatomic) _Bool shouldSearchDirectionsAlongCurrentRoute;
@property(retain, nonatomic) _SFPBPunchout *customDirectionsPunchout;
@property(copy, nonatomic) NSString *interactionContentType;
@property(copy, nonatomic) NSString *universalLibraryID;
@property(nonatomic) int mediaEntityType;
@property(copy, nonatomic) NSString *persistentID;
@property(retain, nonatomic) _SFPBURL *messageURL;
@property(copy, nonatomic) NSString *messageIdentifier;
@property(retain, nonatomic) _SFPBLatLng *location;
@property(retain, nonatomic) _SFPBImage *baseIcon;
@property(retain, nonatomic) _SFPBImage *icon;
@property(nonatomic) _Bool isITunes;
@property(copy, nonatomic) NSString *labelITunes;
@property(copy, nonatomic) NSString *type;
@property(copy, nonatomic) NSString *offerType;
@property(copy, nonatomic) NSString *provider;
@property(retain, nonatomic) _SFPBGraphicalFloat *longitude;
@property(retain, nonatomic) _SFPBGraphicalFloat *latitude;
@property(copy, nonatomic) NSData *mapsData;
@property(copy, nonatomic) NSString *email;
@property(copy, nonatomic) NSString *phoneNumber;
@property(copy, nonatomic) NSString *contactIdentifier;
@property(copy, nonatomic) NSString *applicationBundleIdentifier;
@property(retain, nonatomic) _SFPBPunchout *punchout;
@property(copy, nonatomic) NSString *localMediaIdentifier;
@property(nonatomic) _Bool requiresLocalMedia;
@property(copy, nonatomic) NSArray *storeIdentifiers;
@property(nonatomic) _Bool isOverlay;
@property(copy, nonatomic) NSString *labelForLocalMedia;
@property(copy, nonatomic) NSString *label;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)storeIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)storeIdentifiersCount;
- (void)addStoreIdentifiers:(NSString *)arg1;
- (void)clearStoreIdentifiers;
@end

