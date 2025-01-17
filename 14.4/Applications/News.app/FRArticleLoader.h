//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRArticleLoaderType-Protocol.h"

@protocol FRFeldsparContext;

@interface FRArticleLoader : NSObject <FRArticleLoaderType>
{
    id <FRFeldsparContext> _feldsparContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
- (void)_logMessageForArticleID:(id)arg1 accessError:(id)arg2 blockedReason:(unsigned long long)arg3;
- (void)articlePageViewControllerWithSelectedHeadline:(id)arg1 frame:(struct CGRect)arg2 headlines:(id)arg3 sectionDataByArticleID:(id)arg4 articleOpenedFrom:(long long)arg5 notificationSenderChannelID:(id)arg6 articleContext:(id)arg7 articlePresentationStyle:(long long)arg8 showShareSheet:(_Bool)arg9 editorialTabName:(id)arg10 completion:(CDUnknownBlockType)arg11;
- (void)loadArticleViewControllerWithHeadline:(id)arg1 frame:(struct CGRect)arg2 articleContext:(id)arg3 notificationSenderChannelID:(id)arg4 articlePresentationStyle:(long long)arg5 showShareSheet:(_Bool)arg6 editorialTabName:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)loadArticleViewControllerWithID:(id)arg1 frame:(struct CGRect)arg2 articleList:(id)arg3 prefetchedHeadlines:(id)arg4 sectionDataByArticleID:(id)arg5 articleOpenedFrom:(long long)arg6 notificationSenderChannelID:(id)arg7 articleContext:(id)arg8 articlePresentationStyle:(long long)arg9 showShareSheet:(_Bool)arg10 forceArticleUpdate:(_Bool)arg11 editorialTabName:(id)arg12 completion:(CDUnknownBlockType)arg13;
- (id)initWithFeldsparContext:(id)arg1;

@end

