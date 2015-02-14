/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSTableRowView.h>

@protocol MMMobileDocumentsTableRowDelegate;
@class NSButton, NSTextField, NSImageView, NSMutableDictionary, NSLayoutConstraint;

@interface MMMobileDocumentsTableRow : NSTableRowView {

	NSButton* _checkbox;
	NSTextField* _serviceNameField;
	NSImageView* _icon;
	int _rowViewType;
	NSMutableDictionary* _appDict;
	id<MMMobileDocumentsTableRowDelegate> _delegate;
	NSLayoutConstraint* _leadingWidth;

}

@property (assign) id<MMMobileDocumentsTableRowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) int rowViewType;                                             //@synthesize rowViewType=_rowViewType - In the implementation block
+(id)createFromNib;
-(void)setAppDict:(id)arg1 ;
-(int)rowViewType;
-(void)updateImageAndName;
-(void)enableServicePressed:(id)arg1 ;
-(void)setRowViewType:(int)arg1 ;
-(void)setDelegate:(id<MMMobileDocumentsTableRowDelegate>)arg1 ;
-(void)dealloc;
-(id<MMMobileDocumentsTableRowDelegate>)delegate;
@end

