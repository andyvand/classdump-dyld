/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSDocumentRevisionsPlaceholderView.h>

@class NSProgress, NSButton;

@interface NSDocumentRevisionsNonLocalVersionPlaceholderView : NSDocumentRevisionsPlaceholderView {

	NSProgress* downloadProgress;
	SEL action;
	id target;
	char clickEnabled;
	char hasButton;
	NSButton* button;

}

@property (assign) char hasButton; 
@property (retain) NSProgress * downloadProgress; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHasButton:(char)arg1 ;
-(void)setClickAction:(SEL)arg1 target:(id)arg2 ;
-(void)setDownloadProgress:(NSProgress *)arg1 ;
-(NSProgress *)downloadProgress;
-(void)setElementsHidden:(char)arg1 ;
-(char)_hasButtonOrProgress;
-(void)_layout;
-(void)_updateForProgress;
-(char)hasButton;
@end

