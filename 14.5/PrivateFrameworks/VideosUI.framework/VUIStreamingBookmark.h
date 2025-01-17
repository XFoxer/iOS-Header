//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber;

__attribute__((visibility("hidden")))
@interface VUIStreamingBookmark : NSObject
{
    NSNumber *_absoluteResumeTime;
    NSDate *_absoluteBookmarkTimestamp;
    NSNumber *_relativeResumeTime;
    NSDate *_relativeBookmarkTimestamp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *relativeBookmarkTimestamp; // @synthesize relativeBookmarkTimestamp=_relativeBookmarkTimestamp;
@property(retain, nonatomic) NSNumber *relativeResumeTime; // @synthesize relativeResumeTime=_relativeResumeTime;
@property(retain, nonatomic) NSDate *absoluteBookmarkTimestamp; // @synthesize absoluteBookmarkTimestamp=_absoluteBookmarkTimestamp;
@property(retain, nonatomic) NSNumber *absoluteResumeTime; // @synthesize absoluteResumeTime=_absoluteResumeTime;
- (id)initWithAbsoluteResumeTime:(id)arg1 absoluteTimestamp:(id)arg2 relativeResumeTime:(id)arg3 relativeBookmarkTimestamp:(id)arg4;

@end

