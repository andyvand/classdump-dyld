/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Dictionary.app/Contents/MacOS/Dictionary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSPanel, NSTextField;

@interface DSFindPanelController : NSObject {

	NSPanel* _findPanel;
	NSTextField* _findTextField;
	NSTextField* _statusTextField;
	char _notificationRegistered;

}
-(void)_findOnDirection:(char)arg1 ;
-(void)enterSelection:(id)arg1 ;
-(void)showFindPanel:(id)arg1 ;
-(void)findNext:(id)arg1 ;
-(void)findPrevious:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(void)jumpToSelection:(id)arg1 ;
@end

