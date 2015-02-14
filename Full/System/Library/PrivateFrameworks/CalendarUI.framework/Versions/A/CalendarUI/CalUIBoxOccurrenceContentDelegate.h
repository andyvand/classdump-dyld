/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CalUIBoxOccurrenceContentDelegate <NSObject>
@optional
-(char)shouldShowTime;
-(id)locationFont;
-(id)startDateForOccurrence:(id)arg1;
-(id)endDateForOccurrence:(id)arg1;
-(char)shouldOccurrenceDrawSelected:(id)arg1;
-(char)shouldOccurrenceDrawDimmed:(id)arg1;
-(char)shouldOccurrenceShowTravelTime:(id)arg1;
-(char)shouldOccurrenceInsetForEnclosingScrollView:(id)arg1;
-(char)occurrenceBeginsOnThisDate;
-(double)properYInDayGridForOccurrence:(id)arg1;
-(double)currentYInDayGridForOccurrence:(id)arg1;
-(id)timeFont;
-(id)timeZoneFont;
-(char)shouldShowNewDotForOccurrence:(id)arg1;
-(id)customImageForNewDot;
-(char)occurrenceWantsTentativeAppearance:(id)arg1;
-(id)titleFont;
-(long long)backgroundStyle;

@required
-(double)yValueInDayGridForDate:(id)arg1;
-(id)dayGridView;

@end

