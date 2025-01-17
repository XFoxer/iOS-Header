//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (HealthRecordsServices)
+ (id)hrs_accumulatedErrorWithUnsatisfiedConditions:(id)arg1 authorizationFailures:(id)arg2 resourceFetchFailures:(id)arg3 otherErrors:(id)arg4;
+ (id)hrs_errorWithAccumulatedErrors:(id)arg1;
+ (id)hrs_authorizationOrResourceFetchErrorFromError:(id)arg1;
+ (id)hrs_resourceParsingErrorWithUnderlyingError:(id)arg1;
- (id)hrs_accumulatedOtherErrors;
- (_Bool)hrs_hasResourceFetchFailure;
- (id)hrs_accumulatedResourceFetchFailures;
- (_Bool)hrs_hasAuthorizationFailure;
- (id)hrs_accumulatedAuthorizationFailures;
- (_Bool)hrs_hasUnsatisfiedCondition;
- (id)hrs_accumulatedUnsatisfiedConditions;
- (id)_hrs_accumulatedErrorsForUserInfoKey:(id)arg1;
- (_Bool)hrs_isReloginRequiredError;
@end

