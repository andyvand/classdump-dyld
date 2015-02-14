/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface EKUIParticipantDisplayState : NSObject
+(id)displayImageForParticipant:(id)arg1 event:(id)arg2 freeBusyType:(int)arg3 selected:(char)arg4 ;
+(id)displayImageForFreeBusyType:(int)arg1 selected:(char)arg2 ;
+(id)unknownStatusIcon;
+(id)malformedStatusIcon;
+(id)malformedStatusSelectedIcon;
+(id)acceptedParticipationIcon;
+(id)tentativeParticipationIcon;
+(id)declinedParticipationIcon;
+(void)initializeStatusIcons;
+(void)setupStatusIconAccessibility;
+(id)statusImageForName:(id)arg1 color:(id)arg2 ;
+(int)displayImageStateForParticipant:(id)arg1 event:(id)arg2 freeBusyType:(int)arg3 ;
+(id)unknownStatusSelectedIcon;
+(id)busyStatusSelectedIcon;
+(id)busyStatusIcon;
+(id)freeStatusSelectedIcon;
+(id)freeStatusIcon;
+(id)templateStatusImageForName:(id)arg1 ;
+(void)initialize;
@end

