//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TTRIRecurrenceChooserControllerDelegate-Protocol.h"
#import "UIPickerViewAccessibilityDelegate-Protocol.h"
#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSDate, NSString, NSTimeZone, REMRecurrenceRule, TTRICustomRecurrenceIntervalViewController, TTRIRecurrenceChooserController, TTRIRecurrenceMonthChooserController, TTRIRecurrenceMonthlyChooserController, TTRIRecurrenceOrdinalChooserController, TTRIRecurrenceWeekdayChooserController, UIPickerView, UISwitch, UITableView, UITableViewCell;

@interface TTRICustomRecurrenceViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIPickerViewDelegate, UIPickerViewDataSource, UIPickerViewAccessibilityDelegate, TTRIRecurrenceChooserControllerDelegate>
{
    long long _cachedFrequency;
    long long _cachedInterval;
    REMRecurrenceRule *_cachedRecurrenceRule;
    _Bool _showingFrequencyPicker;
    _Bool _showingIntervalPicker;
    UITableViewCell *_frequencySummaryCell;
    UITableViewCell *_intervalSummaryCell;
    _Bool _useClearBackground;
    _Bool _prohibitsYearlyRecurrenceInterval;
    _Bool _prohibitsHourlyRecurrence;
    CDUnknownBlockType _completionBlock;
    UITableView *_tableView;
    TTRIRecurrenceChooserController *_currentChooser;
    TTRIRecurrenceWeekdayChooserController *_weeklyChooser;
    TTRIRecurrenceMonthlyChooserController *_monthlyChooser;
    TTRIRecurrenceMonthChooserController *_yearlyChooser;
    TTRIRecurrenceOrdinalChooserController *_yearlyOrdinalChooser;
    NSDate *_startDate;
    NSTimeZone *_timeZone;
    UIPickerView *_frequencyPickerView;
    TTRICustomRecurrenceIntervalViewController *_intervalPickerViewController;
    UISwitch *_yearOrdinalSwitch;
    NSString *_recurrenceSummaryString;
    NSArray *_cachedAvailableRecurrenceFrequencies;
}

+ (_Bool)isRecurrenceRuleOrdinal:(id)arg1;
+ (_Bool)_shouldForwardViewWillTransitionToSize;
- (void).cxx_destruct;
@property(copy) NSArray *cachedAvailableRecurrenceFrequencies; // @synthesize cachedAvailableRecurrenceFrequencies=_cachedAvailableRecurrenceFrequencies;
@property(copy) NSString *recurrenceSummaryString; // @synthesize recurrenceSummaryString=_recurrenceSummaryString;
@property(retain) UISwitch *yearOrdinalSwitch; // @synthesize yearOrdinalSwitch=_yearOrdinalSwitch;
@property(retain) TTRICustomRecurrenceIntervalViewController *intervalPickerViewController; // @synthesize intervalPickerViewController=_intervalPickerViewController;
@property(retain) UIPickerView *frequencyPickerView; // @synthesize frequencyPickerView=_frequencyPickerView;
@property(retain) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain) TTRIRecurrenceOrdinalChooserController *yearlyOrdinalChooser; // @synthesize yearlyOrdinalChooser=_yearlyOrdinalChooser;
@property(retain) TTRIRecurrenceMonthChooserController *yearlyChooser; // @synthesize yearlyChooser=_yearlyChooser;
@property(retain) TTRIRecurrenceMonthlyChooserController *monthlyChooser; // @synthesize monthlyChooser=_monthlyChooser;
@property(retain) TTRIRecurrenceWeekdayChooserController *weeklyChooser; // @synthesize weeklyChooser=_weeklyChooser;
@property __weak TTRIRecurrenceChooserController *currentChooser; // @synthesize currentChooser=_currentChooser;
@property(retain) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) _Bool prohibitsHourlyRecurrence; // @synthesize prohibitsHourlyRecurrence=_prohibitsHourlyRecurrence;
@property _Bool prohibitsYearlyRecurrenceInterval; // @synthesize prohibitsYearlyRecurrenceInterval=_prohibitsYearlyRecurrenceInterval;
- (id)_localizedEveryStringForFrequency:(long long)arg1 interval:(long long)arg2;
- (void)_setShowingIntervalPicker:(_Bool)arg1;
- (void)_setShowingFrequencyPicker:(_Bool)arg1;
- (void)_collapseAllPickers;
- (void)_toggleInlineSpinnerForTag:(long long)arg1;
- (long long)_numberOfRowsForSection:(long long)arg1;
- (long long)_tagForIndexPath:(id)arg1;
- (id)_stringForFrequency:(long long)arg1 interval:(long long)arg2;
- (id)_stringForFrequency:(long long)arg1;
- (void)_yearOrdinalSwitchChanged:(id)arg1;
- (id)_chooserForFrequency:(long long)arg1;
- (void)_updateIntervalPicker;
- (void)_frequencyPickerViewUpdated;
- (void)_updateFrequencyRows;
- (void)_updateTableSectionsFromFrequency:(long long)arg1 toFrequency:(long long)arg2;
- (void)_updateCustomPickerView;
- (void)_updateSummaryLabel;
@property(nonatomic) _Bool prohibitsMultipleMonthsInYearlyRecurrence;
@property(nonatomic) _Bool prohibitsMultipleDaysInMonthlyRecurrence;
- (void)_refreshCacheAndPickers;
- (void)setRecurrenceRule:(id)arg1 shouldUpdatePickers:(_Bool)arg2;
- (void)setRecurrenceRule:(id)arg1;
- (id)recurrenceRule;
- (void)_updateRecurrenceRule;
- (void)recurrenceChooser:(id)arg1 wantsRowReload:(long long)arg2;
- (void)recurrenceChooserWantsReload:(id)arg1;
- (void)recurrenceChooserUpdated:(id)arg1;
- (id)_availableRecurrenceFrequencies;
- (long long)_recurrenceFrequencyForPickerRow:(long long)arg1;
- (long long)_pickerRowForRecurrenceFrequency:(long long)arg1;
- (id)pickerView:(id)arg1 accessibilityLabelForComponent:(long long)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)_createChoosersAndControls;
- (struct CGSize)calculatePreferredContentSize;
- (struct CGSize)preferredContentSize;
- (void)loadView;
- (id)initWithStartDate:(id)arg1 timeZone:(id)arg2 clearBackground:(_Bool)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

