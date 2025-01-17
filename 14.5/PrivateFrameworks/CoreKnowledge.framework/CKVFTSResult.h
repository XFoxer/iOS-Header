//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/NSCopying-Protocol.h>

@class CKVItem, CKVOriginApp, CKVSearchField, NSData, NSUUID;

@interface CKVFTSResult : NSObject <NSCopying>
{
    CKVItem *_item;
    NSData *_itemBuffer;
    CKVOriginApp *_originApp;
    CKVSearchField *_searchField;
    NSUUID *_recordId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSUUID *recordId; // @synthesize recordId=_recordId;
@property(readonly, nonatomic) CKVSearchField *searchField; // @synthesize searchField=_searchField;
@property(readonly, nonatomic) CKVOriginApp *originApp; // @synthesize originApp=_originApp;
@property(readonly, nonatomic) NSData *itemBuffer; // @synthesize itemBuffer=_itemBuffer;
@property(readonly, nonatomic) CKVItem *item; // @synthesize item=_item;
- (unsigned long long)hash;
- (_Bool)isEqualToFTSResult:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithItem:(id)arg1 itemBuffer:(id)arg2 originApp:(id)arg3 searchField:(id)arg4 recordId:(id)arg5;

@end

