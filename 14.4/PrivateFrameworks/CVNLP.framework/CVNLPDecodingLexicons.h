//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CVNLP/CVNLPInformationStream.h>

@class NSSet;

@interface CVNLPDecodingLexicons : CVNLPInformationStream
{
    NSSet *_lexicons;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *lexicons; // @synthesize lexicons=_lexicons;
- (unsigned long long)count;
- (id)packagedLexiconRootCursors;
- (id)packagedLexiconCursorsUsingTextDecodingContext:(id)arg1;
- (id)lexiconsForPriority:(unsigned long long)arg1;
- (id)initWithLexicons:(id)arg1 decodingWeight:(id)arg2 lowerBoundLogProbability:(id)arg3;
- (id)initWithLexicons:(id)arg1 decodingWeight:(id)arg2;
- (id)initWithLexicons:(id)arg1;

@end

