//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSIndexPath, UIDragItem, _UICollectionViewDragDestinationController;
@protocol UIDragAnimating;

@protocol _UICollectionViewDragDestinationControllerDelegate <NSObject>
- (void)dragDestinationControllerSessionDidEnd:(_UICollectionViewDragDestinationController *)arg1;
- (void)dragDestinationControllerSessionWillBegin:(_UICollectionViewDragDestinationController *)arg1;
- (void)dragDestinationControllerDidConcludeDrop:(_UICollectionViewDragDestinationController *)arg1;
- (void)dragDestinationController:(_UICollectionViewDragDestinationController *)arg1 didCompleteDropAnimationForDragItem:(UIDragItem *)arg2;
- (void)dragDestinationController:(_UICollectionViewDragDestinationController *)arg1 willBeginDropAnimationForDragItem:(UIDragItem *)arg2 animator:(id <UIDragAnimating>)arg3;
- (void)dragDestinationController:(_UICollectionViewDragDestinationController *)arg1 didPerformDropAtIndexPath:(NSIndexPath *)arg2;
- (void)dragDestinationController:(_UICollectionViewDragDestinationController *)arg1 willPerformDropAtIndexPath:(NSIndexPath *)arg2;
@end

