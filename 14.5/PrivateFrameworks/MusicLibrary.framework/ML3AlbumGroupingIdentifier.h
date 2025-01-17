//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface ML3AlbumGroupingIdentifier : NSObject <NSCopying>
{
    _Bool _compilation;
    long long _albumArtistPersistentID;
    NSData *_groupingKey;
    NSString *_feedURL;
    long long _seasonNumber;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool compilation; // @synthesize compilation=_compilation;
@property(readonly, nonatomic) long long seasonNumber; // @synthesize seasonNumber=_seasonNumber;
@property(readonly, nonatomic) NSString *feedURL; // @synthesize feedURL=_feedURL;
@property(readonly, nonatomic) NSData *groupingKey; // @synthesize groupingKey=_groupingKey;
@property(readonly, nonatomic) long long albumArtistPersistentID; // @synthesize albumArtistPersistentID=_albumArtistPersistentID;
@property(readonly, nonatomic) NSData *keyValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithAlbumArtistPersistentID:(long long)arg1 groupingKey:(id)arg2 feedURL:(id)arg3 seasonNumber:(long long)arg4 compilation:(_Bool)arg5;

@end

