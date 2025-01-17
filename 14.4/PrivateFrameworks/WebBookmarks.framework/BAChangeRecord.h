//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WebBookmark, WebBookmarkCollection;

@interface BAChangeRecord : NSObject
{
    WebBookmarkCollection *_collection;
    WebBookmark *_bookmark;
    int _changeType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) WebBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(readonly, nonatomic) WebBookmarkCollection *collection; // @synthesize collection=_collection;
- (id)description;
- (id)_changedAttributeDescription;
- (id)_changeTypeDescription;
- (id)initWithBookmarkCollection:(id)arg1 bookmark:(id)arg2 changeType:(int)arg3;

@end

