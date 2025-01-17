//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCalculationEngine/NSCopying-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface TSCEError : NSObject <NSCopying>
{
    NSDictionary *_errorDictionary;
}

+ (id)remoteDataUnavailableErrorWithAttribute:(id)arg1;
+ (id)remoteDataServerError;
+ (id)invalidCurrencyPairError;
+ (id)invalidStockCodeError:(id)arg1;
+ (id)noTradingInformationErrorWithNextAvailableDate:(id)arg1;
+ (id)invalidHistoricalDateError;
+ (id)invalidHistoricalCurrencyAttributeError;
+ (id)invalidLiveCurrencyAttributeError;
+ (id)invalidHistoricalStockAttributeError;
+ (id)invalidReferenceNameAttributeError;
+ (id)notAReferenceToAFormulaError;
+ (id)invalidLiveStockAttributeError;
+ (void)raiseRemoteDataUnavailableErrorWithAttribute:(id)arg1;
+ (void)raiseInvalidHistoricalDateError;
+ (void)raiseInvalidHistoricalCurrencyAttributeError;
+ (void)raiseInvalidLiveCurrencyAttributeError;
+ (void)raiseInvalidHistoricalStockAttributeError;
+ (void)raiseInvalidReferenceNameAttributeError;
+ (void)raiseNotAReferenceToAFormulaError;
+ (void)raiseInvalidLiveStockAttributeError;
+ (void)raiseNoConditionIsTrueErrorForFunctionName:(id)arg1;
+ (void)raiseUnsupportedFeatureError;
+ (void)raiseUnsupportedFunctionError;
+ (void)raiseStringTooLongError;
+ (void)raiseInvalidRegexError:(id)arg1;
+ (void)raiseInvalidHeadingError;
+ (void)raiseInvalidAltitudeError;
+ (void)raiseInvalidLatitudeLongitudeError;
+ (void)raiseLocationHeadingFailureError;
+ (void)raiseLocationNetworkError;
+ (void)raiseLocationUserDeniedError;
+ (void)raiseLocationUnknownError;
+ (void)raiseLocationHeadingUnknownError;
+ (void)raiseLocationServicesNotEnabledError;
+ (void)raisePercentRankExcInputOutOfRangeError;
+ (void)raisePercentRankInputOutOfRangeError;
+ (void)raiseNegativeVectorValueErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseLinestMatrixUnderdeterminedError;
+ (void)raiseMultipleDurationsErrorForFunctionName:(id)arg1;
+ (void)raiseComparisonTypeExceptionForLeftType:(int)arg1 rightType:(int)arg2;
+ (void)raiseLinestHighlyCorrelatedVariableError;
+ (void)raiseDurationDisallowedForNormdistPDFError;
+ (void)raiseCharInputOutOfBoundsError;
+ (void)raiseVectorValueNotNumberErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseMismatchedMaxUnitsError;
+ (void)raiseInvalidMatchModeError;
+ (void)raiseNegativeReceivedAmountError;
+ (void)raiseDataInvalidWidthError;
+ (void)raiseDataInvalidLengthError;
+ (void)raiseDataInvalidDimensionsError;
+ (void)raiseArrayElementNoDataError;
+ (void)raiseConvertOriginUnitMismatchError;
+ (void)raiseNonMetricUnitPrefixErrorForUnitString:(id)arg1;
+ (void)raiseDifferentDimensionsErrorForFunctionName:(id)arg1;
+ (void)raiseInvalidUnitStringError:(id)arg1;
+ (void)raiseInvalidBaseCharacterErrorForCharacter:(unsigned short)arg1 base:(short)arg2;
+ (void)raiseEmptyArrayError;
+ (void)raiseRangeSizeMismatchErrorForFunctionName:(id)arg1;
+ (void)raiseInvalidArgumentPairingsErrorForFunctionName:(id)arg1 hasInitialUnrelatedArgument:(_Bool)arg2;
+ (void)raiseInvalidIntersectionError:(vector_99ef3555)arg1 hostTableUID:(const UUIDData_5fbc143e *)arg2 calcEngine:(id)arg3;
+ (void)raiseNotEnoughInputsErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 required:(int)arg3;
+ (void)raiseSumMixedDurationsAndUnitlessWithoutADateErrorForFunctionName:(id)arg1;
+ (id)sumMixedDurationsAndUnitlessWithoutADateErrorForFunctionName:(id)arg1;
+ (void)raiseMismatchedCurrenciesErrorForFunctionName:(id)arg1;
+ (id)durationNotAllowedError:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseDurationNotAllowedError:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseCurrencyNotAllowedErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseUnitsNotAllowedErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseMismatchedUnitsErrorForFunctionName:(id)arg1;
+ (void)raiseMismatchedUnitsErrorForFunctionName:(id)arg1 argumentNumberString:(id)arg2;
+ (void)raiseInvalidComparisonError;
+ (void)raiseInvalidCurrencyComparisonError;
+ (void)raiseTooManyArguments:(id)arg1 maximum:(int)arg2 provided:(int)arg3;
+ (void)raiseWrongNumberOfArgumentsErrorForFunctionName:(id)arg1 provided:(int)arg2;
+ (void)raiseNumberMinusDateError;
+ (void)raiseReferenceToEmptyCellErrorForFunctionName:(id)arg1 rangeReference:(struct TSCERangeRef)arg2;
+ (void)raiseOnlyPositiveOrNegativeErrorForFunctionName:(id)arg1;
+ (void)raiseDateEarlierThanStartingDateErrorForFunctionName:(id)arg1;
+ (void)raiseTooFewDataPointsErrorForFunctionName:(id)arg1;
+ (void)raiseNumberDoesNotConvergeWithEstimateErrorForFunctionName:(id)arg1;
+ (void)raiseNumberDoesNotConvergeErrorForFunctionName:(id)arg1;
+ (void)raiseInvalidSubtotalFunctionNumberError;
+ (void)raiseInvalidTailErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseInvalidTypeErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseInvalidFrequencyErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raisePositionLargerThanArrayErrorForFunctionName:(id)arg1;
+ (void)raiseArgumentEqualsToZeroErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseNumberSmallerThanZeroError;
+ (void)raiseInvalidProbabilityErrorForFunctionName:(id)arg1;
+ (void)raiseNotAVectorError;
+ (void)raiseInvalidTimeError;
+ (void)raiseInvalidDateError;
+ (void)raiseUnsupportedR1C1StyleError;
+ (void)raiseRangeDoesNotSumToOneForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseSignsMustMatchErrorForFunctionName:(id)arg1;
+ (void)raiseStringDoesNotRepresentDateErrorForFunctionName:(id)arg1 string:(id)arg2;
+ (void)raiseStringDoesNotRepresentNumberErrorForFunctionName:(id)arg1 string:(id)arg2;
+ (void)raiseNonEmptyStringRequiredErrorForFunctionName:(id)arg1;
+ (void)raiseInvalidIndexForChooseError:(int)arg1;
+ (void)raiseInvalidArgumentEqualityRelationshipErrorForFunctionName:(id)arg1 argIndex1:(int)arg2 argIndex2:(int)arg3;
+ (void)raiseInvalidArgumentRelationshipErrorForFunctionName:(id)arg1 argIndex1:(int)arg2 argIndex2:(int)arg3 argsAscending:(_Bool)arg4 equalityPermitted:(_Bool)arg5;
+ (void)raiseNoSuitableArgumentsFoundErrorForFunctionName:(id)arg1 requiredType:(int)arg2;
+ (void)raiseNotAReferenceErrorForFunctionName:(id)arg1;
+ (void)raiseCircularReferenceErrorWithReference:(id)arg1;
+ (void)raiseUnionInsideIntersectionError;
+ (void)raiseDifferentNumberOfElementsErrorForFunctionName:(id)arg1;
+ (void)raiseInvalidHyperlinkError;
+ (void)raiseInvalidRangeUsageErrorForReference:(struct TSCERangeRef)arg1;
+ (void)raiseEmptyArgumentSpecificErrorForArgumentNumber:(int)arg1;
+ (void)raiseEmptyArgumentError;
+ (void)raiseInvalidTokenInFormulaError;
+ (void)raiseNoModeError;
+ (void)raiseIndirectErrorForRangeReference:(struct TSCERangeRef)arg1 hostTableUID:(const UUIDData_5fbc143e *)arg2;
+ (id)indirectErrorForRangeReference:(struct TSCERangeRef)arg1 hostTableUID:(const UUIDData_5fbc143e *)arg2;
+ (void)raiseInvalidArgumentsErrorForFunctionName:(id)arg1 argumentIndex:(int)arg2;
+ (void)raiseMixedTypeManipulationErrorForFunctionName:(id)arg1;
+ (void)raiseInvalidDateManipulationError;
+ (id)invalidDateManipulationError;
+ (void)raiseDifferentNumberOfDataPointsErrorForFunctionName:(id)arg1;
+ (void)raiseStartNumberExceedsStringLengthErrorForFunctionName:(id)arg1;
+ (void)raiseMatchNotFoundErrorForValue:(id)arg1 isRegex:(_Bool)arg2 functionName:(id)arg3;
+ (void)raiseMatchNotFoundErrorForValue:(id)arg1 isRegex:(_Bool)arg2 afterMatch:(_Bool)arg3 previousValueToMatch:(id)arg4 previousValueIsRegex:(_Bool)arg5 occurrence:(int)arg6 matchesFound:(int)arg7 functionName:(id)arg8;
+ (void)raiseOutOfBoundsArgumentErrorForArgument:(int)arg1 functionName:(id)arg2 lowerBound:(double)arg3 lowerBoundInclusive:(_Bool)arg4 upperBound:(double)arg5 upperBoundInclusive:(_Bool)arg6;
+ (void)raiseOutOfBoundsArgumentErrorForArgument:(int)arg1 functionName:(id)arg2 upperBound:(double)arg3 upperBoundInclusive:(_Bool)arg4;
+ (void)raiseOutOfBoundsArgumentErrorForArgument:(int)arg1 functionName:(id)arg2 lowerBound:(double)arg3 lowerBoundInclusive:(_Bool)arg4;
+ (id)invalidMergeReference:(struct TSCERangeRef)arg1 contextEntityUID:(const UUIDData_5fbc143e *)arg2;
+ (void)raiseErrorForInvalidReference:(struct TSCERangeRef)arg1 orString:(id)arg2 contextEntityUID:(const UUIDData_5fbc143e *)arg3 invalidMergeReference:(_Bool)arg4 disqualifiedFromEndCell:(_Bool)arg5;
+ (void)raiseErrorForInvalidReference:(struct TSCERangeRef)arg1 orString:(id)arg2 contextEntityUID:(const UUIDData_5fbc143e *)arg3;
+ (id)invalidReferenceError;
+ (void)raiseErrorForInvalidReference;
+ (void)raiseArgumentSetUsedOutOfContextError;
+ (void)raiseValueNotAvailableErrorForFunctionName:(id)arg1;
+ (void)raiseAttachmentErrorInTextCell:(_Bool)arg1;
+ (void)raiseAutoNumberAttachmentErrorInTextCell:(_Bool)arg1;
+ (void)raiseZeroToPowerOfZeroError;
+ (void)raiseDivideByZeroError;
+ (void)raiseNumberErrorForFunctionName:(id)arg1;
+ (void)raiseNumberError;
+ (void)raiseUnknownFunctionErrorForString:(id)arg1;
+ (void)raiseTypeExceptionForValue:(struct TSCEValue)arg1 functionSpec:(id)arg2 argumentIndex:(int)arg3 locale:(id)arg4;
+ (void)raiseDisallowedStockModeError:(id)arg1;
+ (void)raiseNotReadyError;
+ (id)notReadyError;
+ (void)raiseAbortError;
+ (id)abortError;
+ (void)raiseValueErrorForFunctionName:(id)arg1;
+ (void)raiseInvalidArrayContentsError;
+ (void)p_RaiseErrorForDictionary:(id)arg1;
+ (void)raiseErrorForError:(id)arg1;
+ (_Bool)exceptionIsInvalidMergeReference:(id)arg1;
+ (id)attachmentError;
+ (id)autoNumberAttachmentError;
+ (id)badReferenceError;
+ (id)referenceToNonexistentTableError:(const UUIDData_5fbc143e *)arg1;
+ (id)circularReferenceError;
+ (_Bool)p_DictionaryRepresentsInvalidMergeReference:(id)arg1;
+ (_Bool)exceptionIsRangeUsageError:(id)arg1;
+ (_Bool)exceptionIsCircularReferenceError:(id)arg1;
+ (_Bool)exceptionIsFromCalcEngine:(id)arg1;
+ (id)syntaxError;
+ (id)errorForToken:(id)arg1;
+ (id)errorDictionaryForType:(id)arg1 extraInfo:(id)arg2;
+ (id)errorDictionaryForType:(id)arg1 functionName:(id)arg2;
+ (id)errorDictionaryForType:(id)arg1 functionName:(id)arg2 extraInfo:(id)arg3;
+ (id)errorDictionaryForType:(id)arg1;
+ (id)errorDictionaryForType:(id)arg1 andClass:(id)arg2;
+ (id)errorDictionaryForType:(id)arg1 andClass:(id)arg2 extraInfo:(id)arg3;
+ (id)errorWithDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)bakedString;
- (_Bool)isNativelyEqual:(struct TSCEValue)arg1;
- (struct TSCEReferenceValue *)referenceValue;
- (struct TSCEVector *)vector;
- (_Bool)boolean;
- (id)string;
- (id)date;
- (struct TSCENumberValue *)number;
- (struct TSCEReferenceValue *)referenceValueForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(struct TSCEWarningReportingContext *)arg3;
- (struct TSCEVector)formattedVectorForFunction:(id)arg1 argumentIndex:(int)arg2 context:(struct TSCEEvaluationContext *)arg3 format:(const struct TSCEFormat *)arg4;
- (_Bool)booleanForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(struct TSCEWarningReportingContext *)arg3;
- (id)stringForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(struct TSCEWarningReportingContext *)arg3;
- (id)dateForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(struct TSCEWarningReportingContext *)arg3;
- (struct TSCENumberValue *)numberForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(struct TSCEWarningReportingContext *)arg3;
- (int)deepType;
- (int)nativeType;
- (void)setErrorDictionary:(id)arg1;
- (id)errorDictionary;
- (_Bool)isInvalidReference;
- (struct TSCERangeRef)rangeRef;
- (_Bool)isErrorReferenceError;
- (_Bool)isUnsupportedFeatureError;
- (_Bool)isUnsupportedFunctionError;
- (_Bool)isNotReadyError;
- (_Bool)isAbortedError;
- (_Bool)isInvalidMergeReference;
- (_Bool)errorIsRangeUsageError;
- (_Bool)isCircularReferenceError;
- (_Bool)isFromCalcEngine;
- (_Bool)isSyntaxError;
- (id)tokenString;
- (id)displayStringWithCalculationEngine:(id)arg1 forTable:(const UUIDData_5fbc143e *)arg2 andCellID:(struct TSUCellCoord)arg3;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isOfType:(id)arg1;
- (void)raiseException;
- (id)stringValue;
- (id)dateValue;
- (double)doubleValue;
@property(readonly, nonatomic) NSNumber *argIndex2;
@property(readonly, nonatomic) NSNumber *argIndex;
@property(readonly, nonatomic) NSString *functionName;
@property(readonly, nonatomic) NSNumber *debugOnlyErrorNumber;
@property(readonly, nonatomic) id extraInfo;
@property(readonly, nonatomic) NSString *errorClass;
@property(readonly, nonatomic) NSString *errorType;
- (id)error;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;

@end

