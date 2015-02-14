/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class NSTextField, NSError, NSMenu;

@interface NSDocumentNonModalAlertViewController : NSViewController {

	NSTextField* _textField;
	NSError* _errorToDisplay;
	NSMenu* _menu;

}

@property (copy) NSError * errorToDisplay;              //@synthesize errorToDisplay=_errorToDisplay - In the implementation block
@property (assign) NSMenu * menu;                       //@synthesize menu=_menu - In the implementation block
-(id)init;
-(void)dealloc;
-(void)layout;
-(NSMenu *)menu;
-(void)setMenu:(NSMenu *)arg1 ;
-(void)awakeFromNib;
-(void)setErrorToDisplay:(NSError *)arg1 ;
-(NSError *)errorToDisplay;
@end

