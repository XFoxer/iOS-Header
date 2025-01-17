//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFParameter.h>

@class NSString;

@interface WFSwitchParameter : WFParameter
{
    NSString *_localizedOnDisplayName;
    NSString *_localizedOffDisplayName;
}

+ (id)defaultOffDisplayName;
+ (id)defaultOnDisplayName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *localizedOffDisplayName; // @synthesize localizedOffDisplayName=_localizedOffDisplayName;
@property(readonly, nonatomic) NSString *localizedOnDisplayName; // @synthesize localizedOnDisplayName=_localizedOnDisplayName;
@property(readonly, nonatomic) NSString *offDisplayName;
@property(readonly, nonatomic) NSString *onDisplayName;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end

