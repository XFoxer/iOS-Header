//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CTCarrierSpaceClient;

__attribute__((visibility("hidden")))
@interface SSBDatabaseUpdateSupport : NSObject
{
    CTCarrierSpaceClient *_carrierSpaceClient;
    _Bool _onHighCellularDataPlan;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool onHighCellularDataPlan; // @synthesize onHighCellularDataPlan=_onHighCellularDataPlan;
- (id)fetchCellularDataPlanSynchronously;
- (void)_fetchCellularDataPlan;
- (void)_fetchCellularDataPlanWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

