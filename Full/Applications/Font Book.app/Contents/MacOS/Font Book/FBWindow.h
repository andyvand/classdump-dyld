/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Font Book.app/Contents/MacOS/Font Book
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Font Book/Font Book-Structs.h>
#import <AppKit/NSWindow.h>

@interface FBWindow : NSWindow {

	char _animating;

}

@property (assign) char animating;              //@synthesize animating=_animating - In the implementation block
-(void)setAnimating:(char)arg1 ;
-(char)animating;
-(char)makeFirstResponder:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 display:(char)arg2 animate:(char)arg3 ;
-(double)animationResizeTime:(CGRect)arg1 ;
@end
