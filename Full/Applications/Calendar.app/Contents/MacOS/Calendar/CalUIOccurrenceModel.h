/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:23:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CalUIOccurrenceModelDelegate;
@class NSDate, CALMainController;

@interface CalUIOccurrenceModel : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	char _showDeclinedEvents;
	char _hideAllDayEvents;
	char _invalidated;
	CALMainController* _mainController;
	id<CalUIOccurrenceModelDelegate> _delegate;

}

@property (__weak) id<CalUIOccurrenceModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSDate * endDate;                                       //@synthesize endDate=_endDate - In the implementation block
@property (retain) NSDate * startDate;                                     //@synthesize startDate=_startDate - In the implementation block
@property (assign) char showDeclinedEvents;                                //@synthesize showDeclinedEvents=_showDeclinedEvents - In the implementation block
@property (assign) char hideAllDayEvents;                                  //@synthesize hideAllDayEvents=_hideAllDayEvents - In the implementation block
@property (__weak) CALMainController * mainController;                     //@synthesize mainController=_mainController - In the implementation block
+(id)sharedEnumerationDispatchQueue;
-(CALMainController *)mainController;
-(void)setMainController:(CALMainController *)arg1 ;
-(char)hideAllDayEvents;
-(void)setHideAllDayEvents:(char)arg1 ;
-(id)filterOccurrences:(id)arg1 ;
-(void)_notifyModelWillChange;
-(void)_notifyModelDidChangeWithChangeInfo:(id)arg1 ;
-(void)_selectedCalendarsDidChange;
-(void)debugForceIndexRebuild:(id)arg1 ;
-(void)_filterSettingsDidChange;
-(id)initWithDelegate:(id)arg1 mainController:(id)arg2 ;
-(void)setShowDeclinedEvents:(char)arg1 ;
-(void)calendarListModelUpdated:(id)arg1 ;
-(void)sourceSelectionChanged:(id)arg1 ;
-(char)showDeclinedEvents;
-(void)_binOccurrences:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_filterAndBinOccurrences:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(id)init;
-(void)setDelegate:(id<CalUIOccurrenceModelDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<CalUIOccurrenceModelDelegate>)delegate;
-(NSDate *)endDate;
-(void)setEndDate:(NSDate *)arg1 ;
@end
