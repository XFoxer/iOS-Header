//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreLocation/CLLocation.h>

#import <CloudKit/CKRecordValue-Protocol.h>

@class NSString;

@interface CLLocation (CKPropertiesDescription) <CKRecordValue>
+ (id)CKLocationFromPLocationCoordinate:(id)arg1;
+ (id)CKDPLocationCoordinateFromCLLocation:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

