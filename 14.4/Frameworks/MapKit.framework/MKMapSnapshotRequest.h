//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MKMapSnapshotCreator, NSString, UIImage, VKMapSnapshotCreator;

__attribute__((visibility("hidden")))
@interface MKMapSnapshotRequest : NSObject
{
    id _requester;
    id _context;
    struct CLLocationCoordinate2D _coordinate;
    unsigned long long _zoomLevel;
    struct CGSize _size;
    UIImage *_image;
    NSString *_attributionString;
    MKMapSnapshotCreator *_delegate;
    VKMapSnapshotCreator *_snapshotCreator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *attributionString; // @synthesize attributionString=_attributionString;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) __weak MKMapSnapshotCreator *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) unsigned long long zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) id requester; // @synthesize requester=_requester;
@property(retain, nonatomic) id context; // @synthesize context=_context;
- (void)cancel;
- (void)start;
- (id)description;

@end

