/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/Accessibility Inspector.app/Contents/MacOS/Accessibility Inspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Accessibility Inspector/Accessibility Inspector-Structs.h>
#import <AppKit/NSActionCell.h>

@class NSTextStorage, NSLayoutManager, NSTextContainer;

@interface TextLinkCell : NSActionCell {

	CGRect _trackingRect;
	NSTextStorage* _storage;
	NSLayoutManager* _layout;
	NSTextContainer* _container;
	unsigned long long _charIndex;
	id _link;
	id _textLinkDelegate;

}
-(void)_createTextStorage:(id)arg1 cellFrame:(CGRect)arg2 ;
-(NSRange)_characterRangeForPoint:(CGPoint)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 attrString:(id)arg4 ;
-(void)setTextLinkDelegate:(id)arg1 ;
-(id)textLinkDelegate;
-(char)trackMouse:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 untilMouseUp:(char)arg4 ;
-(char)startTrackingAt:(CGPoint)arg1 inView:(id)arg2 ;
-(char)continueTracking:(CGPoint)arg1 at:(CGPoint)arg2 inView:(id)arg3 ;
-(void)stopTracking:(CGPoint)arg1 at:(CGPoint)arg2 inView:(id)arg3 mouseIsUp:(char)arg4 ;
@end
