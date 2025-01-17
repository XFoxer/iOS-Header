//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUITemplateBaseItem.h>

#import <SAObjects/SAUITemplateItemGroup-Protocol.h>

@class NSArray, NSString, SAUITemplateEdgeInsets;

@interface SAUITemplateBaseItemGroup : SAUITemplateBaseItem <SAUITemplateItemGroup>
{
}

+ (id)baseItemGroupWithDictionary:(id)arg1 context:(id)arg2;
+ (id)baseItemGroup;
@property(copy, nonatomic) NSArray *templateItems;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSArray *communicationOptions; // @dynamic communicationOptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) SAUITemplateEdgeInsets *fullScreenPaddingDelta; // @dynamic fullScreenPaddingDelta;
@property(nonatomic) _Bool hasPriorityLayout; // @dynamic hasPriorityLayout;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SAUITemplateEdgeInsets *padding; // @dynamic padding;
@property(copy, nonatomic) NSArray *presentationOptions; // @dynamic presentationOptions;
@property(nonatomic) _Bool shouldBeOffscreenInPartial; // @dynamic shouldBeOffscreenInPartial;
@property(readonly) Class superclass;

@end

