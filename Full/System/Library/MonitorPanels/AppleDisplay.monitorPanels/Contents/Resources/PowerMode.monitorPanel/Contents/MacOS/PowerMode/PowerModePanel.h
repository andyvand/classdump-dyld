/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 8:11:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/MonitorPanels/AppleDisplay.monitorPanels/Contents/Resources/PowerMode.monitorPanel/Contents/MacOS/PowerMode
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MonitorPanel/MonitorPanel.h>

@class NSTextField, NSMatrix;

@interface PowerModePanel : MonitorPanel {

	NSTextField* _instructionText;
	NSMatrix* _radioGroup;
	char _extendedMode;

}
+(int)fidelityForDisplayID:(int)arg1 ;
-(void)updatePanel;
-(void)activatePanel;
-(void)enablePanel:(char)arg1 ;
-(void)deactivatePanel;
-(void)authorizationChanged;
-(void)radioButtonClicked:(id)arg1 ;
-(void)willSelect;
-(void)willUnselect;
-(void)finalize;
-(void)dealloc;
-(id)nibName;
-(void)didLoadNib;
@end
