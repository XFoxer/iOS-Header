//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HSSetupServiceHeaderItemManager.h"

@class HFItem, HUInstructionsItem;
@protocol HFServiceLikeItem;

@interface HSSetupSceneSuggestionsItemManager : HSSetupServiceHeaderItemManager
{
    HFItem<HFServiceLikeItem> *_serviceLikeItem;
    HUInstructionsItem *_instructionsItem;
    HFItem *_scenesContentItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HFItem *scenesContentItem; // @synthesize scenesContentItem=_scenesContentItem;
@property(readonly, nonatomic) HUInstructionsItem *instructionsItem; // @synthesize instructionsItem=_instructionsItem;
@property(readonly, copy, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem; // @synthesize serviceLikeItem=_serviceLikeItem;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)initWithDelegate:(id)arg1 serviceLikeItem:(id)arg2;

@end

