/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/EKUITokenAttachmentCell.h>

@interface EKUIAttendeeTokenAttachmentCell : EKUITokenAttachmentCell {

	char _isExpanded;
	char _isConnected;
	char _attendeeHasAddress;

}

@property (assign) char isExpanded;                      //@synthesize isExpanded=_isExpanded - In the implementation block
@property (assign) char isConnected;                     //@synthesize isConnected=_isConnected - In the implementation block
@property (assign) char attendeeHasAddress;              //@synthesize attendeeHasAddress=_attendeeHasAddress - In the implementation block
-(id)initCellForTokenField:(id)arg1 ;
-(void)setIsConnected:(char)arg1 ;
-(char)shouldShowToken;
-(id)imageForRepresentedObject;
-(id)stringForRepresentedObject;
-(char)isCompletedToken;
-(char)attendeeHasAddress;
-(void)setAttendeeHasAddress:(char)arg1 ;
-(char)isConnected;
-(void)setRepresentedObject:(id)arg1 ;
-(char)isExpanded;
-(int)freeBusyType;
-(void)setIsExpanded:(char)arg1 ;
@end

