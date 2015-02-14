/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSView.h>

@interface IKEmbeddedImageView : NSView {

	void* _privateData;

}
-(void)crop:(id)arg1 ;
-(void)rotate90cw:(id)arg1 ;
-(void)rotate90ccw:(id)arg1 ;
-(void)effects:(id)arg1 ;
-(void)doCrop:(id)arg1 ;
-(void)doCancelCrop:(id)arg1 ;
-(void)selectionRectRemoved;
-(void)selectionRectAdded;
-(void)removeToolbar;
-(void)addToolbar;
-(void)updateTextView;
-(void)finalize;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)setImageScaling:(unsigned long long)arg1 ;
-(char)acceptsFirstResponder;
-(void)viewDidMoveToWindow;
-(void)setImageFrameStyle:(unsigned long long)arg1 ;
-(void)setImageAlignment:(unsigned long long)arg1 ;
-(void)windowWillClose:(id)arg1 ;
@end

