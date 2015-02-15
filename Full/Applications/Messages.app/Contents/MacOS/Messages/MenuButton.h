/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Messages/Messages-Structs.h>
#import <AppKit/NSButton.h>

@class NSPopUpButtonCell, NSString;

@interface MenuButton : NSButton {

	NSPopUpButtonCell* _popUpCell;
	NSString* _axDescription;
	char _overlayStyle;

}
-(char)usesMenu;
-(void)setUsesMenu:(char)arg1 ;
-(void)runPopUpInFrame:(CGRect)arg1 ofView:(id)arg2 ;
-(char)_runPopUp;
-(void)setOverlayStyle:(char)arg1 ;
-(char)isOverlayStyle;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityDescriptionAttribute;
-(void)performClick:(id)arg1 ;
-(void)rightMouseDown:(id)arg1 ;
-(char)sendAction:(SEL)arg1 to:(id)arg2 ;
-(void)mouseDown:(id)arg1 ;
-(void)setAccessibilityDescription:(id)arg1 ;
@end
