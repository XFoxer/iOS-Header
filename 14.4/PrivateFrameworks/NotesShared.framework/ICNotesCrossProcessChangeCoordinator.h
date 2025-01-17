//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface ICNotesCrossProcessChangeCoordinator : NSObject
{
    NSPersistentStoreCoordinator *_sourceCoordinator;
    NSManagedObjectContext *_destinationContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSManagedObjectContext *destinationContext; // @synthesize destinationContext=_destinationContext;
@property(retain, nonatomic) NSPersistentStoreCoordinator *sourceCoordinator; // @synthesize sourceCoordinator=_sourceCoordinator;
- (void)postNotesPasswordStatusDidChangeNotification;
- (void)postAccountDidChangeNotification;
- (void)registerForAccountNotifications;
- (void)registerForPasswordStatusDidChangeNotifications;
- (void)registerForCrossProcessNotificationName:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)postCrossProcessNotificationName:(id)arg1;
- (void)dealloc;
- (id)initWithSourceCoordinator:(id)arg1 destinationContext:(id)arg2;

@end

