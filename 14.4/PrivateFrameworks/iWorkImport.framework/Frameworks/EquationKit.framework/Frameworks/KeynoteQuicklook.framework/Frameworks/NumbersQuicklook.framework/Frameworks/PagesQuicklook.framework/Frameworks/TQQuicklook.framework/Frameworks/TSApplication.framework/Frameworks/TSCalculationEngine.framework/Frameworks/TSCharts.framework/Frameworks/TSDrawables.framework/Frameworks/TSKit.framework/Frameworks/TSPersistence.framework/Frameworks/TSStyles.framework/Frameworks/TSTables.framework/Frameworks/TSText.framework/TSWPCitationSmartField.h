//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSText/TSWPSmartField.h>

#import <TSText/TSWPCitationRecordHosting-Protocol.h>

@class NSArray, NSString;
@protocol TSWPCitationSmartFieldEditing;

@interface TSWPCitationSmartField : TSWPSmartField <TSWPCitationRecordHosting>
{
    NSArray *_citationRecords;
    _Bool _isLocalizable;
    id <TSWPCitationSmartFieldEditing> _editingDelegate;
}

+ (_Bool)isValidCitationField:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) id <TSWPCitationSmartFieldEditing> editingDelegate; // @synthesize editingDelegate=_editingDelegate;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (id)bibliographySmartField;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (_Bool)supportsDeepCopyForUndo;
- (unsigned short)smartFieldKind;
@property(nonatomic) _Bool isLocalizable;
@property(copy, nonatomic) NSArray *citationRecords;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

