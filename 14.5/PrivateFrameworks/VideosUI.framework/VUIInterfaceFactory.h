//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol VUIDocumentCreator;

__attribute__((visibility("hidden")))
@interface VUIInterfaceFactory : NSObject
{
    struct {
        _Bool respondsToViewControllerCreation;
    } _documentCreatorFlags;
    NSObject<VUIDocumentCreator> *_documentCreator;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<VUIDocumentCreator> *documentCreator; // @synthesize documentCreator=_documentCreator;
- (id)accountSettingsViewController;
- (id)viewControllerWithDocumentDataSource:(id)arg1 appContext:(id)arg2 viewElement:(id)arg3 documentOptions:(id)arg4;
- (id)viewControllerWithDocumentDataSource:(id)arg1 appContext:(id)arg2;

@end

