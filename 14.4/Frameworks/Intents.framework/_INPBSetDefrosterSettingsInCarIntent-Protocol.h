//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDataString, _INPBIntentMetadata;

@protocol _INPBSetDefrosterSettingsInCarIntent <NSObject>
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(nonatomic) _Bool hasEnable;
@property(nonatomic) _Bool enable;
@property(nonatomic) _Bool hasDefroster;
@property(nonatomic) int defroster;
@property(readonly, nonatomic) _Bool hasCarName;
@property(retain, nonatomic) _INPBDataString *carName;
- (int)StringAsDefroster:(NSString *)arg1;
- (NSString *)defrosterAsString:(int)arg1;
@end

