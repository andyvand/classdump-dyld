/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class ClearBrowsingDataController, NSPopUpButton, NSTextField;

@interface ClearBrowsingDataPanelController : NSWindowController {

	ClearBrowsingDataController* _clearBrowsingDataController;
	NSPopUpButton* _timePeriodPopUp;
	NSTextField* _informativeTextField;

}

@property (assign,nonatomic,__weak) NSPopUpButton * timePeriodPopUp;                 //@synthesize timePeriodPopUp=_timePeriodPopUp - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * informativeTextField;              //@synthesize informativeTextField=_informativeTextField - In the implementation block
+(void)runModalPanelFromTrigger:(id)arg1 ;
-(void)_setUpPanel;
-(void)_clearBrowsingData;
-(void)clearBrowsingDataClicked:(id)arg1 ;
-(void)helpButtonClicked:(id)arg1 ;
-(NSPopUpButton *)timePeriodPopUp;
-(void)setTimePeriodPopUp:(NSPopUpButton *)arg1 ;
-(NSTextField *)informativeTextField;
-(void)setInformativeTextField:(NSTextField *)arg1 ;
-(id)init;
-(void)awakeFromNib;
-(id)windowNibName;
-(void)close:(id)arg1 ;
@end

