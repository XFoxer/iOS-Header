//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/Loggable-Protocol.h>

@class CTCellularPlanItem, Logger, NSArray, NSDictionary, NSString;

@interface PSUICellularPlanManagerCache : NSObject <Loggable>
{
    _Bool _cacheIsValid;
    NSArray *_planItems;
    NSArray *_danglingPlanItems;
    NSArray *_plansPendingTransfer;
    NSDictionary *_referenceMap;
    CTCellularPlanItem *_selectedPlanItem;
    _Bool _hasSubscriptions;
    _Bool _isMultipleDataPlanSupportAvailable;
    _Bool _shouldShowOldUI;
    _Bool _isAnyLocalFlowTypeSupported;
    _Bool _isWebUIFlowSupported;
    _Bool _isActivationCodeFlowSupported;
    _Bool _isCarrierItemFlowSupported;
    Logger *_logger;
    _Bool _carrierListFetchInProgress;
    NSArray *_cachedCarrierItems;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property _Bool carrierListFetchInProgress; // @synthesize carrierListFetchInProgress=_carrierListFetchInProgress;
@property(retain) NSArray *cachedCarrierItems; // @synthesize cachedCarrierItems=_cachedCarrierItems;
- (id)getLogger;
- (id)subscriptionContextForPlanItem:(id)arg1 cachedSubscriptionContexts:(id)arg2;
- (void)setLabel:(id)arg1 forPlan:(id)arg2;
- (id)predefinedLabels;
- (void)clearCachedCarrierItems;
@property(readonly, nonatomic) NSArray *carrierItems;
@property(readonly, nonatomic) _Bool isCarrierItemFlowSupported;
@property(readonly, nonatomic) _Bool isActivationCodeFlowSupported;
@property(readonly, nonatomic) _Bool isWebUIFlowSupported;
@property(readonly, nonatomic) _Bool isAnyLocalFlowTypeSupported;
@property(readonly, nonatomic) _Bool shouldShowNewUI;
- (_Bool)shouldShowOldUI;
@property(readonly, nonatomic) _Bool shouldShowPlanSelector;
@property(readonly, nonatomic) _Bool isAnyPlanActivating;
@property(readonly, nonatomic) _Bool isSelectedPlanActivating;
@property(readonly, nonatomic) _Bool shouldShowAccountSetup;
@property(readonly, nonatomic) _Bool hasSubscriptions;
@property(readonly, nonatomic) _Bool isMultipleDataPlanSupportAvailable;
- (void)didSelectDanglingPlan:(id)arg1;
- (void)setSelectedPlanItemForData:(id)arg1;
@property(retain, nonatomic) CTCellularPlanItem *selectedPlanItem;
- (id)planFromReferenceSafe:(id)arg1;
- (id)planPendingTransferFromReference:(id)arg1;
- (id)danglingPlanFromReference:(id)arg1;
- (id)planFromReference:(id)arg1;
@property(readonly, nonatomic) NSArray *plansPendingTransfer;
@property(readonly, nonatomic) NSArray *danglingPlanItems;
@property(readonly, nonatomic) NSArray *embeddedPlanItems;
@property(readonly, nonatomic) NSArray *planItems;
@property(readonly, nonatomic) _Bool shouldShowDataPlanList;
@property(readonly, nonatomic) _Bool shouldShowAddPlan;
- (void)_fetchPlanItemsIfNeeded;
- (void)_carrierInfoDidChange;
- (void)_invalidatePlanItemsCache;
- (void)_planInfoDidChange;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

