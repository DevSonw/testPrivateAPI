/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDateRangeFormatter : NSObject {
    NSLocale * __currentLocale;
    NSDateFormatter * __dayOfTheWeekDateFormatter;
    struct UDateIntervalFormat { } * __dayOfTheWeekIntervalFormat;
    struct UDateIntervalFormat { } * __differentMonthDayIntervalFormat;
    struct UDateIntervalFormat { } * __differentMonthDayNoYearIntervalFormat;
    struct UDateIntervalFormat { } * __monthDayIntervalFormat;
    struct UDateIntervalFormat { } * __monthDayNoYearIntervalFormat;
    NSDateFormatter * __relativeDateFormatterDay;
    NSDateFormatter * __sameDayDateFormatter;
    NSDateFormatter * __sameDayNoYearDateFormatter;
    struct UDateIntervalFormat { } * __timeIntervalFormat;
    NSDateFormatter * __yearDateFormatter;
    struct UDateIntervalFormat { } * __yearIntervalFormat;
    BOOL  _autoUpdateOnChanges;
    BOOL  _includeDayNumbers;
    BOOL  _includeDayNumbersWhenMonthsDiffer;
    BOOL  _timeOnly;
    BOOL  _useRelativeDayFormatting;
    BOOL  _useShortDaysInRanges;
    BOOL  _useShortMonths;
    BOOL  _useTime;
    BOOL  _yearOnly;
}

@property (setter=_setCurrentLocale:, nonatomic, retain) NSLocale *_currentLocale;
@property (nonatomic, readonly, retain) NSDateFormatter *_dayOfTheWeekDateFormatter;
@property (nonatomic, readonly) struct UDateIntervalFormat { }*_dayOfTheWeekIntervalFormat;
@property (nonatomic, readonly) struct UDateIntervalFormat { }*_differentMonthDayIntervalFormat;
@property (nonatomic, readonly) struct UDateIntervalFormat { }*_differentMonthDayNoYearIntervalFormat;
@property (nonatomic, readonly) struct UDateIntervalFormat { }*_monthDayIntervalFormat;
@property (nonatomic, readonly) struct UDateIntervalFormat { }*_monthDayNoYearIntervalFormat;
@property (nonatomic, readonly, retain) NSDateFormatter *_relativeDateFormatterDay;
@property (nonatomic, readonly, retain) NSDateFormatter *_sameDayDateFormatter;
@property (nonatomic, readonly, retain) NSDateFormatter *_sameDayNoYearDateFormatter;
@property (nonatomic, readonly) struct UDateIntervalFormat { }*_timeIntervalFormat;
@property (nonatomic, readonly, retain) NSDateFormatter *_yearDateFormatter;
@property (nonatomic, readonly) struct UDateIntervalFormat { }*_yearIntervalFormat;
@property (nonatomic) BOOL autoUpdateOnChanges;
@property (nonatomic) BOOL includeDayNumbers;
@property (nonatomic) BOOL includeDayNumbersWhenMonthsDiffer;
@property (nonatomic) BOOL timeOnly;
@property (nonatomic) BOOL useRelativeDayFormatting;
@property (nonatomic) BOOL useShortDaysInRanges;
@property (nonatomic) BOOL useShortMonths;
@property (nonatomic) BOOL useTime;
@property (nonatomic) BOOL yearOnly;

+ (void)_dumpAllDateCombinationsWithFormatters;

- (id)_currentLocale;
- (BOOL)_date:(id)arg1 isWithinDaysInThePast:(int)arg2;
- (BOOL)_date:(id)arg1 isWithinDaysInThePast:(int)arg2 fromCurrentDate:(id)arg3;
- (id)_dateCombinationAfterUpdatingCurrentDateWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3 dateFormatter:(id)arg4 calendarUnit:(unsigned int)arg5 value:(int)arg6;
- (id)_dateCombinationAfterUpdatingStartAndEndDatesWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3 dateFormatter:(id)arg4 calendarUnit:(unsigned int)arg5 value:(int)arg6;
- (id)_dateCombinationWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3 dateFormatter:(id)arg4;
- (id)_dayDifferentMonthsTemplate;
- (id)_dayOfTheWeekDateFormatter;
- (struct UDateIntervalFormat { }*)_dayOfTheWeekIntervalFormat;
- (id)_dayTemplate;
- (struct UDateIntervalFormat { }*)_differentMonthDayIntervalFormat;
- (struct UDateIntervalFormat { }*)_differentMonthDayNoYearIntervalFormat;
- (void)_dumpDateCombinationWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3 dateFormatter:(id)arg4;
- (void)_dumpDateCombinations;
- (id)_formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3;
- (id)_formattedDateWithUDateFormatter:(struct UDateIntervalFormat { }*)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void)_invalidateFormats;
- (void)_localeChanged:(id)arg1;
- (struct UDateIntervalFormat { }*)_monthDayIntervalFormat;
- (struct UDateIntervalFormat { }*)_monthDayNoYearIntervalFormat;
- (struct UDateIntervalFormat { }*)_newUDateFormatterForLocale:(id)arg1 template:(id)arg2;
- (void)_postChangeNotification;
- (id)_relativeCombinationsForDate:(id)arg1;
- (id)_relativeDateFormatterDay;
- (void)_releaseUDateFormatter:(struct UDateIntervalFormat { }*)arg1;
- (id)_sameDayDateFormatter;
- (id)_sameDayNoYearDateFormatter;
- (id)_sameMonthTemplate;
- (void)_setCurrentLocale:(id)arg1;
- (void)_significantTimeChange:(id)arg1;
- (struct UDateIntervalFormat { }*)_timeIntervalFormat;
- (void)_updateCurrentDateAndDumpDateCombinationWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3 dateFormatter:(id)arg4 calendarUnit:(unsigned int)arg5 value:(int)arg6;
- (void)_updateDateComponents:(id)arg1 withValueValue:(int)arg2 forCalendarUnit:(unsigned int)arg3;
- (void)_updateStartAndEndDatesAndDumpDateCombinationWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3 dateFormatter:(id)arg4 calendarUnit:(unsigned int)arg5 value:(int)arg6;
- (id)_yearDateFormatter;
- (struct UDateIntervalFormat { }*)_yearIntervalFormat;
- (BOOL)autoUpdateOnChanges;
- (void)configureForFormatPreset:(unsigned int)arg1;
- (void)dealloc;
- (id)formattedDate:(id)arg1;
- (id)formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2;
- (BOOL)includeDayNumbers;
- (BOOL)includeDayNumbersWhenMonthsDiffer;
- (id)init;
- (void)setAutoUpdateOnChanges:(BOOL)arg1;
- (void)setIncludeDayNumbers:(BOOL)arg1;
- (void)setIncludeDayNumbersWhenMonthsDiffer:(BOOL)arg1;
- (void)setTimeOnly:(BOOL)arg1;
- (void)setUseRelativeDayFormatting:(BOOL)arg1;
- (void)setUseShortDaysInRanges:(BOOL)arg1;
- (void)setUseShortMonths:(BOOL)arg1;
- (void)setUseTime:(BOOL)arg1;
- (void)setYearOnly:(BOOL)arg1;
- (BOOL)timeOnly;
- (BOOL)useRelativeDayFormatting;
- (BOOL)useShortDaysInRanges;
- (BOOL)useShortMonths;
- (BOOL)useTime;
- (BOOL)yearOnly;

@end
