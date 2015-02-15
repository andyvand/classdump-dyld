/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:23:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <AppKit/NSClipView.h>

@class NSButton;

@interface CollapseView : NSClipView {

	double _expandedHeight;
	NSButton* _disclosureTriangle;

}
-(id)_highestAncestor:(id)arg1 ;
-(void)collapse:(char)arg1 animate:(char)arg2 ;
-(void)_resizeWindowToFrame:(CGRect)arg1 animate:(char)arg2 ;
-(void)takeStateFromSender:(id)arg1 ;
-(void)toggleCollapsed:(id)arg1 ;
-(void)collapse:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)awakeFromNib;
-(char)isCollapsed;
@end
