//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNContactVCardSerialization : NSObject
{
}

+ (void)dataWithContacts:(id)arg1 options:(id)arg2 scheduler:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)dataWithContacts:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)contactsWithData:(id)arg1 scheduler:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)contactsWithData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)contactsWithData:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)contactsWithData:(id)arg1 error:(id *)arg2;
+ (id)dataWithContacts:(id)arg1 options:(id)arg2 error:(id *)arg3 environment:(id)arg4;
+ (id)dataWithContacts:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)dataWithContacts:(id)arg1 error:(id *)arg2;
+ (id)descriptorForRequiredKeysWithOptions:(id)arg1 description:(id)arg2;
+ (id)descriptorForRequiredKeysWithOptions:(id)arg1;
+ (id)summaryOfLocationVCard:(id)arg1 error:(id *)arg2;
+ (id)summaryOfVCard:(id)arg1 error:(id *)arg2;
+ (id)descriptorForRequiredKeys;
+ (id)contactsWithMECARDString:(id)arg1 error:(id *)arg2;

@end

