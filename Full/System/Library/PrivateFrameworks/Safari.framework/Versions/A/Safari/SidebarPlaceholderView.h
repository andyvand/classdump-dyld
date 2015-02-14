/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class NSTextField;

@interface SidebarPlaceholderView : NSView {

	NSTextField* _mainTextField;
	NSTextField* _descriptionTextField;

}

@property (assign,nonatomic,__weak) NSTextField * mainTextField;                     //@synthesize mainTextField=_mainTextField - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * descriptionTextField;              //@synthesize descriptionTextField=_descriptionTextField - In the implementation block
-(NSTextField *)mainTextField;
-(NSTextField *)descriptionTextField;
-(void)setMainTextField:(NSTextField *)arg1 ;
-(void)setDescriptionTextField:(NSTextField *)arg1 ;
-(void)awakeFromNib;
@end

