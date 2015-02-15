/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:52:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Reminders.app/Contents/MacOS/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <AppKit/NSWindow.h>

@class NSAttributedString;

@interface RemindersWindow : NSWindow {

	char _isPrimaryWindow;
	NSAttributedString* _attributedTitleString;

}

@property (assign) char isPrimaryWindow;                                    //@synthesize isPrimaryWindow=_isPrimaryWindow - In the implementation block
@property (retain) NSAttributedString * attributedTitleString;              //@synthesize attributedTitleString=_attributedTitleString - In the implementation block
-(id)initWithContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 primaryWindow:(char)arg5 ;
-(char)isPrimaryWindow;
-(void)setIsPrimaryWindow:(char)arg1 ;
-(NSAttributedString *)attributedTitleString;
-(void)setAttributedTitleString:(NSAttributedString *)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(char)isExcludedFromWindowsMenu;
@end
