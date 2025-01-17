//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DRFlockAnimatable;

@interface DRFlockItemLayout : NSObject
{
    _Bool _needsImmediateTracking;
    _Bool _constrainSize;
    _Bool _newItem;
    _Bool _startingPreviewTransition;
    _Bool _inPreviewTransition;
    DRFlockAnimatable *_position;
    DRFlockAnimatable *_size;
    DRFlockAnimatable *_preview;
    struct CGPoint _center;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isInPreviewTransition) _Bool inPreviewTransition; // @synthesize inPreviewTransition=_inPreviewTransition;
@property(nonatomic) _Bool startingPreviewTransition; // @synthesize startingPreviewTransition=_startingPreviewTransition;
@property(nonatomic, getter=isNewItem) _Bool newItem; // @synthesize newItem=_newItem;
@property(nonatomic) _Bool constrainSize; // @synthesize constrainSize=_constrainSize;
@property(nonatomic) _Bool needsImmediateTracking; // @synthesize needsImmediateTracking=_needsImmediateTracking;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(retain, nonatomic) DRFlockAnimatable *preview; // @synthesize preview=_preview;
@property(retain, nonatomic) DRFlockAnimatable *size; // @synthesize size=_size;
@property(retain, nonatomic) DRFlockAnimatable *position; // @synthesize position=_position;

@end

