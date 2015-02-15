/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Network Utility.app/Contents/MacOS/Network Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Network Utility/NUProcessController.h>
#import <Network Utility/NUTabViewItemDelegate.h>

@class NUProcess;

@interface NUSimpleTool : NSObject <NUProcessController, NUTabViewItemDelegate> {

	id addressText;
	id outputText;
	id toolButton;
	id associatedTab;
	id spinner;
	id window;
	char executing;
	NUProcess* currentProcess;

}
-(void)appendOutput:(id)arg1 ;
-(char)isToolAvailable;
-(void)toggleTool:(id)arg1 ;
-(void)tabActivated;
-(void)tabDeactivated;
-(void)processStarted;
-(void)processFinished;
-(id)addressText;
-(id)associatedTab;
-(char)executing;
-(id)output;
-(void)resetButton;
-(id)init;
-(void)print:(id)arg1 ;
-(void)restore;
-(void)controlTextDidChange:(id)arg1 ;
-(void)awakeFromNib;
-(void)save;
@end

