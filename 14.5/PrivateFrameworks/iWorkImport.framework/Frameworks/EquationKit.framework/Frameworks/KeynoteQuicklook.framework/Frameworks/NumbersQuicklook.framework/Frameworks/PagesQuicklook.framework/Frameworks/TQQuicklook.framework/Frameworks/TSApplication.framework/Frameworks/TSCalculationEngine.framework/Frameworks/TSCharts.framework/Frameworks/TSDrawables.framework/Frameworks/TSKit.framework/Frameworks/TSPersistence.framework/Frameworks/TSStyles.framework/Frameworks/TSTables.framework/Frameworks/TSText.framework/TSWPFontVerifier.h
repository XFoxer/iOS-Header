//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSWPFontVerifier : NSObject
{
}

+ (id)missingFontName;
+ (id)sharedInstance;
- (_Bool)isDownloadableFontName:(id)arg1;
- (_Bool)isCoreTextDownloadableFontName:(id)arg1;
- (_Bool)isCloudKitDownloadableFontName:(id)arg1;
- (_Bool)isFontWithPostscriptNameInstalled:(id)arg1;

@end

