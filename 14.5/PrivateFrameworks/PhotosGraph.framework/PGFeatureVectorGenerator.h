//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSArray, NSDate, PGManager;

@interface PGFeatureVectorGenerator : NSObject
{
    _Bool _isDryTesting;
    NSDate *_localDate;
    CLLocation *_location;
    NSArray *_peopleNames;
    PGManager *_manager;
}

+ (id)_calendarEventsBetweenDate:(id)arg1 andDate:(id)arg2 atLocation:(id)arg3 withPeopleUUIDs:(id)arg4 inPhotoLibrary:(id)arg5;
- (void).cxx_destruct;
@property _Bool isDryTesting; // @synthesize isDryTesting=_isDryTesting;
@property(readonly) __weak PGManager *manager; // @synthesize manager=_manager;
@property(copy, nonatomic) NSArray *peopleNames; // @synthesize peopleNames=_peopleNames;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSDate *localDate; // @synthesize localDate=_localDate;
- (void)enumerateFeatureVectorsByTypeUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithManager:(id)arg1;

@end

