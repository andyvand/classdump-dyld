/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <AppKit/NSTableCellView.h>

@class NSTextField, EKAttachment;

@interface EKUIAttachmentCellView : NSTableCellView {

	NSTextField* _fileNameField;
	EKAttachment* _attachment;

}

@property (retain) NSTextField * fileNameField;              //@synthesize fileNameField=_fileNameField - In the implementation block
@property (retain) EKAttachment * attachment;                //@synthesize attachment=_attachment - In the implementation block
-(CGSize)fileIconSize;
-(void)setFileNameField:(NSTextField *)arg1 ;
-(NSTextField *)fileNameField;
-(id)initWithAttachemnt:(id)arg1 andFont:(id)arg2 ;
-(double)visibleWidth;
-(char)allowsVibrancy;
-(void)setBackgroundStyle:(long long)arg1 ;
-(EKAttachment *)attachment;
-(void)setAttachment:(EKAttachment *)arg1 ;
@end

