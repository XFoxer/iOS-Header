//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ICDRequest.h"

@interface ICSetContainerPropertiesRequest : ICDRequest
{
}

+ (id)requestWithDatabaseID:(unsigned int)arg1 databaseRevision:(unsigned int)arg2 containerID:(unsigned int)arg3 trackList:(id)arg4 properties:(id)arg5;
- (id)_bodyDataForDatabaseRevision:(unsigned int)arg1 containerID:(unsigned int)arg2 trackList:(id)arg3 properties:(id)arg4;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithDatabaseID:(unsigned int)arg1 databaseRevision:(unsigned int)arg2 containerID:(unsigned int)arg3 trackList:(id)arg4 properties:(id)arg5;

@end

