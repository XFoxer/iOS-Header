//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriCore/NSCopying-Protocol.h>

@class NSString, SiriCoreCorrectionPronunciation;

@interface SiriCoreUserCorrectionsProfileEntry : PBCodable <NSCopying>
{
    unsigned int _alternativesCorrectionsCount;
    NSString *_correctedText;
    SiriCoreCorrectionPronunciation *_pronunciationData;
    unsigned int _spellingCorrectionsCount;
    unsigned int _tap2editCorrectionsCount;
    struct {
        unsigned int alternativesCorrectionsCount:1;
        unsigned int spellingCorrectionsCount:1;
        unsigned int tap2editCorrectionsCount:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int alternativesCorrectionsCount; // @synthesize alternativesCorrectionsCount=_alternativesCorrectionsCount;
@property(nonatomic) unsigned int tap2editCorrectionsCount; // @synthesize tap2editCorrectionsCount=_tap2editCorrectionsCount;
@property(nonatomic) unsigned int spellingCorrectionsCount; // @synthesize spellingCorrectionsCount=_spellingCorrectionsCount;
@property(retain, nonatomic) SiriCoreCorrectionPronunciation *pronunciationData; // @synthesize pronunciationData=_pronunciationData;
@property(retain, nonatomic) NSString *correctedText; // @synthesize correctedText=_correctedText;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasAlternativesCorrectionsCount;
@property(nonatomic) _Bool hasTap2editCorrectionsCount;
@property(nonatomic) _Bool hasSpellingCorrectionsCount;
@property(readonly, nonatomic) _Bool hasPronunciationData;
@property(readonly, nonatomic) _Bool hasCorrectedText;

@end

