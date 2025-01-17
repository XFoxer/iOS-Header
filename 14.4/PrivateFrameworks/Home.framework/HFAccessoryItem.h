//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFActionBuilderFactory-Protocol.h>
#import <Home/HFCompoundItemProtocol-Protocol.h>
#import <Home/HFGroupableItemProtocol-Protocol.h>
#import <Home/HFServiceLikeBuilderCreating-Protocol.h>
#import <Home/HFServiceLikeItem-Protocol.h>

@class HMAccessory, HMHome, NSArray, NSSet, NSString;
@protocol HFCharacteristicValueSource, HFHomeKitObject;

@interface HFAccessoryItem : HFItem <HFServiceLikeItem, HFActionBuilderFactory, HFServiceLikeBuilderCreating, HFGroupableItemProtocol, HFCompoundItemProtocol>
{
    HMAccessory *_accessory;
    id <HFCharacteristicValueSource> _valueSource;
    NSSet *_serviceItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *serviceItems; // @synthesize serviceItems=_serviceItems;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(readonly, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
- (id)_sortDescriptorsForServiceItems;
- (id)_mostCommonValueInServiceItems:(id)arg1 valueProvider:(CDUnknownBlockType)arg2;
- (id)_mostCommonValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (id)_unanimousValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (_Bool)isMultiLightDevice;
- (_Bool)isMultiSensorDevice;
- (id)_buildControlDescription;
- (id)_buildTileDescription:(_Bool)arg1;
@property(readonly, nonatomic) NSArray *allHomeKitObjects;
@property(readonly, nonatomic) id <HFHomeKitObject> primaryHomeKitObject;
@property(readonly, nonatomic) unsigned long long numberOfCompoundItems;
@property(readonly, nonatomic) _Bool isCompoundItem;
@property(readonly, nonatomic) _Bool isContainedWithinItemGroup;
@property(readonly, nonatomic) unsigned long long numberOfItemsContainedWithinGroup;
@property(readonly, nonatomic) _Bool isItemGroup;
- (id)namingComponentForHomeKitObject;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)accessories;
@property(readonly, nonatomic) NSSet *services;
@property(readonly, nonatomic) HMHome *home;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (_Bool)actionsMayRequireDeviceUnlock;
- (_Bool)containsActions;
- (id)_buildServiceItems;
- (id)_collectAllChildItems;
- (id)_buildControlItems;
- (id)serviceItemForService:(id)arg1;
- (id)controlItemsForService:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
@property(readonly, copy) NSString *description;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithAccessory:(id)arg1 valueSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

