/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:57:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSTableCellView.h>

@class NSImage;

@interface FI_TColumnGroupHeaderCellView : NSTableCellView {

	BOOL _isInFloatingHeader;

}

@property (assign,getter=isInFloatingHeader,nonatomic) BOOL inFloatingHeader;              //@synthesize isInFloatingHeader=_isInFloatingHeader - In the implementation block
@property (nonatomic,retain) NSImage * tagImage; 
-(BOOL)isInFloatingHeader;
-(id)initWithFrame:(const CGRect*)arg1 withGroupTextField:(id)arg2 ;
-(void)setInFloatingHeader:(BOOL)arg1 ;
-(void)setTagImage:(NSImage *)arg1 ;
-(NSImage *)tagImage;
-(void)layout;
-(void)updateLayer;
@end
