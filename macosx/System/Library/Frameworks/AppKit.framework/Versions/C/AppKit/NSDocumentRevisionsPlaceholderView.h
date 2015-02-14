/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSTextField, NSProgressIndicator, NSString;

@interface NSDocumentRevisionsPlaceholderView : NSView {

	NSTextField* messageField1;
	NSTextField* messageField2;
	NSProgressIndicator* progressIndicator;
	char progressIndicatorVisible;
	char animating;
	char hideElements;
	char preventLayout;

}

@property (assign) char progressIndicatorVisible; 
@property (assign) char progressIndicatorAnimating; 
@property (copy) NSString * message1; 
@property (copy) NSString * message2; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setProgressIndicatorVisible:(char)arg1 ;
-(void)setMessage1:(NSString *)arg1 ;
-(void)setProgressIndicatorAnimating:(char)arg1 ;
-(void)setMessage2:(NSString *)arg1 ;
-(void)setElementsHidden:(char)arg1 ;
-(char)_hasButtonOrProgress;
-(id)makeMessageTextField:(char)arg1 ;
-(void)_layout;
-(NSString *)message1;
-(NSString *)message2;
-(char)progressIndicatorVisible;
-(char)progressIndicatorAnimating;
@end

