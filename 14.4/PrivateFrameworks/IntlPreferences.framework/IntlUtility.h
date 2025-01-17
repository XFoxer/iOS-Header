//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IntlUtility : NSObject
{
    NSMutableArray *mBidiLanguagesArray;
    NSMutableArray *mBidiTestedLanguagesArray;
}

+ (void)unsubscribeFromAppLanguageChanges;
+ (void)subscribeToAppLanguageChanges:(CDUnknownBlockType)arg1;
+ (id)perAppLanguageSelectionBundleIdentifiers;
+ (id)_getXPCConnectionForLocalizationSwitcher;
+ (void)setPreferredLanguage:(id)arg1 forBundleID:(id)arg2 andRelaunchWithCompletion:(CDUnknownBlockType)arg3;
+ (void)setPreferredLanguage:(id)arg1 forBundleID:(id)arg2;
+ (void)_setPreferredLanguage:(id)arg1 forBundleID:(id)arg2;
+ (void)preferredLanguagesForBundleID:(id)arg1 reply:(CDUnknownBlockType)arg2;
+ (id)_preferredLanguagesForBundleID:(id)arg1;
+ (id)_proposedOverrideLanguageFromLanguage:(id)arg1 forLocalizations:(id)arg2 preferredLanguages:(id)arg3 regionCode:(id)arg4;
+ (id)preferredLanguageForBundleID:(id)arg1;
+ (long long)formattingContextFromIUDisplayNameContext:(unsigned long long)arg1;
+ (_Bool)upgradeAppleLanguagesFrom:(id)arg1 to:(id)arg2;
+ (id)restrictedCountryCodes;
+ (id)supportedCalendars;
+ (id)parentLocaleIdentifierForIdentifier:(id)arg1;
+ (id)preferredLanguagesFromLanguages:(id)arg1 byAddingFallbacksForRegion:(id)arg2;
+ (id)filterLanguageList:(id)arg1 forRegion:(id)arg2 fromLanguages:(id)arg3;
+ (id)preferredLanguagesForRegion:(id)arg1;
+ (id)preferredLanguagesForRegionWithoutFiltering:(id)arg1;
+ (int)UDisplayContextForIUDisplayNameContext:(unsigned long long)arg1;
+ (_Bool)forceCapitalizationInLanguageLists;
+ (id)defaultNumberingSystemForLocaleID:(id)arg1;
+ (id)shortDisplayNameForNumberingSystemWithIdentifier:(id)arg1 localeIdentifier:(id)arg2;
+ (id)displayNameForNumberingSystemWithIdentifier:(id)arg1 localeIdentifier:(id)arg2;
+ (id)displayNameForNumberingSystemWithIdentifier:(id)arg1 localeIdentifier:(id)arg2 short:(_Bool)arg3;
+ (id)numberingSystemsForLocaleID:(id)arg1;
+ (id)numberingSystemsFromArray:(id)arg1 forLocaleID:(id)arg2;
+ (id)numberingSystemForLocaleID:(id)arg1;
+ (void)setYearlessYear:(id)arg1 forCalendar:(id)arg2;
+ (_Bool)isYearlessDate:(id)arg1 forCalendar:(id)arg2;
+ (long long)yearlessYearForMonth:(long long)arg1 withCalendar:(id)arg2;
+ (_Bool)isLunarCalendarDefaultOnForLanguage:(id)arg1 locale:(id)arg2;
+ (_Bool)isLunarCalendarDefaultOn;
+ (id)localeForCalendarID:(id)arg1 andLocale:(id)arg2;
+ (id)localeForCalendarID:(id)arg1;
+ (id)preferredLunarCalendarForLocaleID:(id)arg1;
+ (id)lunarCalendarsForLocaleID:(id)arg1;
+ (id)defaultCalendarForLocaleID:(id)arg1;
+ (void)enumeratePreferredCalendarsForLocaleID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)alternateContinentOfRegion:(id)arg1;
+ (id)capitalizeFirstWordOfName:(id)arg1 accordingToLanguage:(id)arg2;
+ (id)normalizedLanguageIDFromString:(id)arg1;
+ (id)baseLanguageIdentifierFromIdentifier:(id)arg1;
+ (id)languageIdentifierFromIdentifier:(id)arg1 withRegion:(id)arg2;
+ (id)baseSystemLanguages;
+ (id)stdLanguageIDs;
+ (id)sharedIntlUtility;
- (void).cxx_destruct;
- (id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 capitalization:(unsigned long long)arg3 short:(_Bool)arg4;
- (id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 capitalization:(unsigned long long)arg3;
- (id)displayNameForNormalizedLanguage:(id)arg1 context:(unsigned long long)arg2 displayLanguage:(id)arg3;
- (id)displayNameForLanguage:(id)arg1 context:(unsigned long long)arg2 displayLanguage:(id)arg3;
- (id)localizedLanguageForLanguage:(id)arg1;
- (id)localizedNameForScript:(short)arg1;
- (_Bool)canRenderLanguage:(id)arg1;
- (id)displayNameForLocale:(id)arg1 displayLanguage:(id)arg2 capitalization:(unsigned long long)arg3 short:(_Bool)arg4;
- (id)ICUdisplayNameForLanguage:(id)arg1 capitalization:(struct ULocaleDisplayNames *)arg2;
- (id)displayNameForDialect:(id)arg1 context:(unsigned long long)arg2 displayLanguage:(id)arg3;
- (id)languageList;
- (id)displayNameForLabelForLunarCalendarID:(id)arg1 displayLanguage:(id)arg2;

@end

