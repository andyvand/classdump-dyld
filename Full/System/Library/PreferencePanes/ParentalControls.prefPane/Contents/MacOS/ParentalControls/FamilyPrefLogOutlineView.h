/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:24 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/ParentalControls.prefPane/Contents/MacOS/ParentalControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ParentalControls/ParentalControls-Structs.h>
#import <AppKit/NSOutlineView.h>

@class NSProgressIndicator, NSAttributedString;

@interface FamilyPrefLogOutlineView : NSOutlineView {

	NSProgressIndicator* _progress;
	NSAttributedString* _attrStr;
	char _isAnimating;

}
-(void)_makeSpinner;
-(void)stopProgress;
-(void)startProgress;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
@end
