/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/NSTextAttachment.h>

@interface NSTokenAttachment : NSTextAttachment {

	id _delegate;
	char _needsSeparator;

}
-(void)setDelegate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(id)attachmentCell;
-(void)setAttachmentCell:(id)arg1 ;
-(void)_setNeedsSeparator:(char)arg1 ;
-(char)_needsSeparator;
-(void)sendPrepareMenu:(id)arg1 forTextView:(id)arg2 withEvent:(id)arg3 ;
@end

