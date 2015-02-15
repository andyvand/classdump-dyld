/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Finder/Finder-Structs.h>
#import <Finder/TBulkRenameFormatterController.h>

@class NSPopUpButton, NSTextField;

@interface TBulkRenameMakeSequentialController : TBulkRenameFormatterController {

	NSPopUpButton* _nameFormatBtn;
	NSPopUpButton* _whereBtn;
	NSTextField* _customNameFld;
	NSTextField* _startIndexFld;
	TNotificationCenterObserver* _customNameTextDidChangeObserver;
	TNotificationCenterObserver* _startIndexTextDidChangeObserver;

}
-(BOOL)allowRename;
-(BOOL)resetCounterForEachFile;
-(id)reformat:(id)arg1 row:(unsigned long long)arg2 ;
-(long long)customIndex;
-(int)formatterType;
-(id)padIndex:(unsigned long long)arg1 padAmount:(unsigned long long)arg2 ;
-(void)nameFormatChanged:(id)arg1 ;
-(void)whereChanged:(id)arg1 ;
-(void)viewLoaded;
-(void)aboutToTearDown;
-(id)displayName;
-(void)updateUI;
-(id)timestamp:(id)arg1 ;
@end
