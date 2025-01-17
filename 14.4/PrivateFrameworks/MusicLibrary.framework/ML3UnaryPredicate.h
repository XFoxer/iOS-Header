//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3Predicate.h>

@interface ML3UnaryPredicate : ML3Predicate
{
    ML3Predicate *_predicate;
}

+ (id)predicateWithPredicate:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) ML3Predicate *predicate; // @synthesize predicate=_predicate;
- (id)databaseStatementParameters;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;

@end

