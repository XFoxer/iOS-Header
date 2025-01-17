//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMBookmark-Protocol.h>

@class NSArray, NSString;
@protocol BMBookmark;

@interface BMBookmarkNode : NSObject <BMBookmark>
{
    NSArray *_upstreams;
    id <BMBookmark> _value;
    NSString *_name;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) id <BMBookmark> value; // @synthesize value=_value;
@property(retain, nonatomic) NSArray *upstreams; // @synthesize upstreams=_upstreams;
- (id)descriptionAtLevel:(long long)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 upstreams:(id)arg2 name:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

