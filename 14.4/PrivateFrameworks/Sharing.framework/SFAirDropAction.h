//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSString;

@interface SFAirDropAction : NSObject <NSSecureCoding>
{
    _Bool _requiresUnlockedUI;
    _Bool _shouldUpdateUserResponse;
    NSString *_localizedTitle;
    NSString *_singleItemLocalizedTitle;
    NSString *_actionIdentifier;
    NSString *_transferIdentifier;
    unsigned long long _minRequiredTransferState;
    unsigned long long _maxTransferState;
    CDUnknownBlockType _actionHandler;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) _Bool shouldUpdateUserResponse; // @synthesize shouldUpdateUserResponse=_shouldUpdateUserResponse;
@property(nonatomic) _Bool requiresUnlockedUI; // @synthesize requiresUnlockedUI=_requiresUnlockedUI;
@property(nonatomic) unsigned long long maxTransferState; // @synthesize maxTransferState=_maxTransferState;
@property(nonatomic) unsigned long long minRequiredTransferState; // @synthesize minRequiredTransferState=_minRequiredTransferState;
@property(readonly, copy, nonatomic) NSString *transferIdentifier; // @synthesize transferIdentifier=_transferIdentifier;
@property(readonly, copy, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(copy, nonatomic) NSString *singleItemLocalizedTitle; // @synthesize singleItemLocalizedTitle=_singleItemLocalizedTitle;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
- (void)triggerAction;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransferIdentifier:(id)arg1 actionIdentifier:(id)arg2 title:(id)arg3 singleItemTitle:(id)arg4;

@end

