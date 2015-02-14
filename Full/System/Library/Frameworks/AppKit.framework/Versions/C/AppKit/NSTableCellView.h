/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSTextField, NSImageView, NSArray;

@interface NSTableCellView : NSView {

	long long _backgroundStyle;
	id _objectValue;
	id _aux;
	long long _rowSizeStyle;
	NSTextField* _textField;
	NSImageView* _imageView;

}

@property (retain) id objectValue;                                   //@synthesize objectValue=_objectValue - In the implementation block
@property (assign) NSTextField * textField;                          //@synthesize textField=_textField - In the implementation block
@property (assign) NSImageView * imageView;                          //@synthesize imageView=_imageView - In the implementation block
@property (assign) long long backgroundStyle; 
@property (assign) long long rowSizeStyle;                           //@synthesize rowSizeStyle=_rowSizeStyle - In the implementation block
@property (readonly) NSArray * draggingImageComponents; 
-(oneway void)release;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layout;
-(id)_autounbinder;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)viewWillDraw;
-(char)isOpaque;
-(char)preservesContentDuringLiveResize;
-(void)_windowChangedKeyState;
-(id)objectValue;
-(void)setObjectValue:(id)arg1 ;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 ;
-(CGRect)_imageViewFrame;
-(id)_enclosingTableView;
-(long long)rowSizeStyle;
-(void)_updateFont;
-(void)setRowSizeStyle:(long long)arg1 ;
-(NSArray *)draggingImageComponents;
-(NSTextField *)textField;
-(void)setImageView:(NSImageView *)arg1 ;
-(void)setTextField:(NSTextField *)arg1 ;
-(NSImageView *)imageView;
-(void)_updateSourceListAttributesIfNecessary;
-(void)_updateSourceListGroupRowAttributesInRowView:(id)arg1 ;
-(void)_updateSourceListAttributesInRowView:(id)arg1 ;
-(CGRect)_textFieldFrame;
-(void)_doStandardRowSizeStyleLayout;
@end

