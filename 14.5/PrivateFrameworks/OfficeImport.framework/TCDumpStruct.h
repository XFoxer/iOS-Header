//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/TCDumpType.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface TCDumpStruct : TCDumpType
{
    long long mSize;
    NSString *mSizeFieldName;
    long long mSizeCorrection;
    NSMutableArray *mMembers;
}

- (void).cxx_destruct;
- (void)fromBinary:(struct __sFILE *)arg1 toXml:(struct _xmlNode *)arg2 state:(id)arg3;
- (id)initWithSizeFieldName:(id)arg1 sizeCorrection:(int)arg2 members:(id)arg3;
- (id)initWithSizeFieldName:(id)arg1 members:(id)arg2;
- (id)initWithSize:(long long)arg1 members:(id)arg2;
- (id)initWithMembers:(id)arg1;
- (id)initWithSize:(long long)arg1 sizeFieldName:(id)arg2 sizeCorrection:(int)arg3 members:(id)arg4;

@end

