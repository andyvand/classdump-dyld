/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CalUIOccurrenceListDelegate <NSObject>
@required
-(void)selectOccurence:(id)arg1;
-(id)calendarForOccurrenceList:(id)arg1;
-(id)occurrenceIndexForOccurrenceList:(id)arg1;
-(void)occurrenceListDidScroll:(id)arg1;
-(void)occurrenceListSelectionDidChange:(id)arg1;
-(void)showInlineInspectorForListOccurrence:(id)arg1 listController:(id)arg2;
-(id)contextualMenuForListOccurrence:(id)arg1 mouseEvent:(id)arg2;
-(id)displayedDateRangeForOccurrenceList:(id)arg1;

@end

