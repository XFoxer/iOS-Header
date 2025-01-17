//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMLibraryPlist;
@protocol OS_dispatch_queue;

@interface BLLibrary : NSObject
{
    IMLibraryPlist *_booksPlist;
    IMLibraryPlist *_purchasedPlist;
    IMLibraryPlist *_managedPlist;
    IMLibraryPlist *_sharedPlist;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (_Bool)_addDate:(id)arg1 toPlist:(id)arg2 bookItem:(id)arg3 error:(id *)arg4;
+ (id)_bookItemsFromPlist:(id)arg1 sharedPlist:(id)arg2;
+ (id)defaultBookLibrary;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) IMLibraryPlist *sharedPlist; // @synthesize sharedPlist=_sharedPlist;
@property(retain, nonatomic) IMLibraryPlist *managedPlist; // @synthesize managedPlist=_managedPlist;
@property(retain, nonatomic) IMLibraryPlist *purchasedPlist; // @synthesize purchasedPlist=_purchasedPlist;
@property(retain, nonatomic) IMLibraryPlist *booksPlist; // @synthesize booksPlist=_booksPlist;
- (void)_bookWasOpenedWithStoreID:(id)arg1 permlink:(id)arg2 date:(id)arg3;
- (_Bool)_bookItemIsShared:(id)arg1;
- (_Bool)_addSharedBookToPurchasesPlistWithPermlink:(id)arg1 error:(id *)arg2;
- (void)_downloadWithPermalink:(id)arg1 title:(id)arg2 result:(CDUnknownBlockType)arg3;
- (id)_perUserBookURLForBookURL:(id)arg1;
- (_Bool)_isShareableBook:(id)arg1;
- (_Bool)_isMultiUser;
- (id)_bookItemFromPermlink:(id)arg1 error:(id *)arg2;
- (id)_bookItemFromStoreID:(id)arg1 permlink:(id)arg2 error:(id *)arg3;
- (id)_findBookItemWithTestBlock:(CDUnknownBlockType)arg1 foundWhere:(long long *)arg2;
- (id)_list:(id)arg1 testBlock:(CDUnknownBlockType)arg2;
- (id)_allPlists;
- (id)bookIdentifierFromURL:(id)arg1 error:(id *)arg2;
- (_Bool)_removeBookFromLibraryWithPath:(id)arg1 error:(id *)arg2;
- (_Bool)removeBookFromLibraryWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)_addBookItemToEduContainer:(id)arg1 error:(id *)arg2;
- (id)_lookupBookItemExhaustiveFromPermlink:(id)arg1 error:(id *)arg2;
- (void)addITunesUBookToLibraryWithPermlink:(id)arg1 title:(id)arg2 result:(CDUnknownBlockType)arg3;
- (id)allBookItems;
- (id)_bookItemsFromPlist:(id)arg1;
- (id)_init;
- (id)_initWithBooksPlist:(id)arg1 purchasedPlist:(id)arg2 managedPlist:(id)arg3 sharedPlist:(id)arg4;

@end

